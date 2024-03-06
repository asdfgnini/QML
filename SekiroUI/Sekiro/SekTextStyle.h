#ifndef SekTEXTSTYLE_H
#define SekTEXTSTYLE_H

#include <QObject>
#include <QtQml/qqml.h>
#include <QFont>
#include "stdafx.h"
#include "singleton.h"

class SekTextStyle : public QObject
{
    Q_OBJECT
public:
    Q_PROPERTY_AUTO(QFont,Caption);
    Q_PROPERTY_AUTO(QFont,Body);
    Q_PROPERTY_AUTO(QFont,BodyStrong);
    Q_PROPERTY_AUTO(QFont,Subtitle);
    Q_PROPERTY_AUTO(QFont,Title);
    Q_PROPERTY_AUTO(QFont,TitleLarge);
    Q_PROPERTY_AUTO(QFont,Display);
    QML_NAMED_ELEMENT(SekTextStyle)
    QML_SINGLETON
private:
    explicit SekTextStyle(QObject *parent = nullptr);
public:
    SINGLETON(SekTextStyle)
    static SekTextStyle *create(QQmlEngine *qmlEngine, QJSEngine *jsEngine){return getInstance();}
};

#endif // SekTEXTSTYLE_H
