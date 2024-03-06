#include "SekViewModel.h"

#include <QQuickItem>
#include "Def.h"

Model::Model(QObject *parent):QObject{parent}{
}

Model::~Model(){
}

ViewModelManager::ViewModelManager(QObject *parent): QObject{parent}{
}

void ViewModelManager::insertViewModel(SekViewModel* value){
    _viewmodel.append(value);
}

void ViewModelManager::deleteViewModel(SekViewModel* value){
    _viewmodel.removeOne(value);
}

QObject* ViewModelManager::getModel(const QString& key){
    return  _data.value(key);
}

void ViewModelManager::insert(const QString& key,QObject* value){
    _data.insert(key,value);
}

bool ViewModelManager::exist(const QString& key){
    return _data.contains(key);
}

void ViewModelManager::refreshViewModel(SekViewModel* viewModel,QString key,QVariant value){
    foreach (auto item, _viewmodel) {
        if(item->getKey() == viewModel->getKey()){
            item->enablePropertyChange = false;
            item->setProperty(key.toLatin1().constData(),value);
            item->enablePropertyChange  = true;
        }
    }
}

PropertyObserver::PropertyObserver(QString name,QObject* model,QObject *parent):QObject{parent}{
    _name = name;
    _model = model;
    _property = QQmlProperty(parent,_name);
    _property.connectNotifySignal(this,SLOT(_propertyChange()));
}

PropertyObserver::~PropertyObserver(){
}

void PropertyObserver::_propertyChange(){
    auto viewModel = (SekViewModel*)parent();
    if(viewModel->enablePropertyChange){
        auto value = _property.read();
        _model->setProperty(_name.toLatin1().constData(),value);
        ViewModelManager::getInstance()->refreshViewModel(viewModel,_name,value);
    }
}

SekViewModel::SekViewModel(QObject *parent):QObject{parent}{
    scope(SekViewModelType::Scope::Window);
    ViewModelManager::getInstance()->insertViewModel(this);
}

SekViewModel::~SekViewModel(){
    ViewModelManager::getInstance()->deleteViewModel(this);
}

void SekViewModel::classBegin(){
}

void SekViewModel::componentComplete(){
    auto o = parent();
    while (nullptr != o) {
        _window = o;
        o = o->parent();
    }
    const QMetaObject* obj = metaObject();
    if(_scope == SekViewModelType::Scope::Window){
        _key = property("objectName").toString()+"-"+QString::number(reinterpret_cast<qulonglong>(_window), 16);
    }else{
        _key = property("objectName").toString();
    }
    QObject * model;
    if(!ViewModelManager::getInstance()->exist(_key)){
        if(_scope == SekViewModelType::Scope::Window){
            model = new Model(_window);
        }else{
            model = new Model();
        }
        Q_EMIT initData();
        for (int i = 0; i < obj->propertyCount(); ++i) {
            const QMetaProperty property = obj->property(i);
            QString propertyName = property.name();
            auto value = property.read(this);
            model->setProperty(propertyName.toLatin1().constData(),value);
            new PropertyObserver(propertyName,model,this);
        }
        ViewModelManager::getInstance()->insert(_key,model);
    }else{
        model = ViewModelManager::getInstance()->getModel(_key);
        for (int i = 0; i < obj->propertyCount(); ++i) {
            const QMetaProperty property = obj->property(i);
            QString propertyName = property.name();
            new PropertyObserver(propertyName,model,this);
        }
    }
    foreach (auto key, model->dynamicPropertyNames()) {
        setProperty(key,model->property(key));
    }
}

QString SekViewModel::getKey(){
    return _key;
}
