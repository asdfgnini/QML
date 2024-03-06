#include "SekApp.h"

#include <QQmlEngine>
#include <QGuiApplication>
#include <QQmlContext>
#include <QQuickItem>
#include <QTimer>
#include <QUuid>
#include <QFontDatabase>
#include <QClipboard>

SekApp::SekApp(QObject *parent):QObject{parent}{
    vsync(true);
    useSystemAppBar(false);
}

SekApp::~SekApp(){
}

void SekApp::init(QObject *application){
    this->_application = application;
    QJSEngine * jsEngine = qjsEngine(_application);
    std::string jsFunction = R"( (function () { console.log("SekentUI");}) )";
    QJSValue function = jsEngine->evaluate(QString::fromStdString(jsFunction));
    jsEngine->globalObject().setProperty("__Sekentui",function);
}

void SekApp::run(){
    navigate(initialRoute());
}

void SekApp::navigate(const QString& route,const QJsonObject& argument,SekRegister* SekRegister){
    if(!routes().contains(route)){
        qCritical()<<"No route found "<<route;
        return;
    }
    QQmlEngine *engine = qmlEngine(_application);
    QQmlComponent component(engine, routes().value(route).toString());
    if (component.isError()) {
        qCritical() << component.errors();
        return;
    }
    QVariantMap properties;
    properties.insert("_route",route);
    if(SekRegister){
        properties.insert("_pageRegister",QVariant::fromValue(SekRegister));
    }
    properties.insert("argument",argument);
    QQuickWindow *win=nullptr;
    for (const auto& pair : _windows.toStdMap()) {
        QString r =  pair.second->property("_route").toString();
        if(r == route){
            win = pair.second;
            break;
        }
    }
    if(win){
        int launchMode = win->property("launchMode").toInt();
        if(launchMode == 1){
            win->setProperty("argument",argument);
            win->show();
            win->raise();
            win->requestActivate();
            return;
        }else if(launchMode == 2){
            win->close();
        }
    }
    win = qobject_cast<QQuickWindow*>(component.createWithInitialProperties(properties));
    if(SekRegister){
        SekRegister->to(win);
    }
    win->setColor(QColor(Qt::transparent));
}

void SekApp::exit(int retCode){
    for (const auto& pair : _windows.toStdMap()) {
        pair.second->close();
        removeWindow(pair.second);
    }
    qApp->exit(retCode);
}

void SekApp::addWindow(QQuickWindow* window){
    _windows.insert(window->winId(),window);
}

void SekApp::removeWindow(QQuickWindow* window){
    if(window){
        _windows.remove(window->winId());
        window->deleteLater();
        window = nullptr;
    }
}
