#ifndef SekVIEWMODEL_H
#define SekVIEWMODEL_H

#include <QQuickItem>
#include <QtQml/qqml.h>
#include <QQuickWindow>
#include <QQmlProperty>
#include "stdafx.h"
#include "singleton.h"

class Model : public QObject{
    Q_OBJECT
public:
    explicit Model(QObject *parent = nullptr);
    ~Model();
};

class SekViewModel : public QObject, public QQmlParserStatus
{
    Q_OBJECT
    Q_INTERFACES(QQmlParserStatus)
    Q_PROPERTY_AUTO(int,scope);
    QML_NAMED_ELEMENT(SekViewModel)
public:
    explicit SekViewModel(QObject *parent = nullptr);
    ~SekViewModel();
    void classBegin() override;
    void componentComplete() override;
    Q_SIGNAL void initData();
    QString getKey();
    bool enablePropertyChange = true;
private:
    QObject* _window = nullptr;
    QString _key = "";
};

class PropertyObserver: public QObject{
    Q_OBJECT
public:
    explicit PropertyObserver(QString name,QObject* model,QObject *parent = nullptr);
    ~PropertyObserver();
private:
    Q_SLOT void _propertyChange();
private:
    QString _name = "";
    QQmlProperty _property;
    QObject* _model = nullptr;
};


class ViewModelManager:public QObject{
    Q_OBJECT
private:
    explicit ViewModelManager(QObject *parent = nullptr);
public:
    SINGLETON(ViewModelManager)
    bool exist(const QString& key);
    void insert(const QString& key,QObject* value);
    QObject* getModel(const QString& key);
    void insertViewModel(SekViewModel* value);
    void deleteViewModel(SekViewModel* value);
    void refreshViewModel(SekViewModel* viewModel,QString key,QVariant value);
private:
    QMap<QString,QObject*> _data;
    QList<SekViewModel*> _viewmodel;
};

#endif // SekVIEWMODEL_H
