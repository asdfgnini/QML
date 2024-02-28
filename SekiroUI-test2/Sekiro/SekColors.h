#ifndef FLUCOLORS_H
#define FLUCOLORS_H

#include <QObject>
#include <QtQml/qqml.h>
#include "SekColorSet.h"
#include "stdafx.h"
#include "singleton.h"

/**
 * @brief The FluColors class
 */
class SekColors : public QObject
{
    Q_OBJECT
    Q_PROPERTY_AUTO(QString,Transparent);
    Q_PROPERTY_AUTO(QString,Black);
    Q_PROPERTY_AUTO(QString,White);
    Q_PROPERTY_AUTO(QString,Grey10);
    Q_PROPERTY_AUTO(QString,Grey20);
    Q_PROPERTY_AUTO(QString,Grey30);
    Q_PROPERTY_AUTO(QString,Grey40);
    Q_PROPERTY_AUTO(QString,Grey50);
    Q_PROPERTY_AUTO(QString,Grey60);
    Q_PROPERTY_AUTO(QString,Grey70);
    Q_PROPERTY_AUTO(QString,Grey80);
    Q_PROPERTY_AUTO(QString,Grey90);
    Q_PROPERTY_AUTO(QString,Grey100);
    Q_PROPERTY_AUTO(QString,Grey110);
    Q_PROPERTY_AUTO(QString,Grey120);
    Q_PROPERTY_AUTO(QString,Grey130);
    Q_PROPERTY_AUTO(QString,Grey140);
    Q_PROPERTY_AUTO(QString,Grey150);
    Q_PROPERTY_AUTO(QString,Grey160);
    Q_PROPERTY_AUTO(QString,Grey170);
    Q_PROPERTY_AUTO(QString,Grey180);
    Q_PROPERTY_AUTO(QString,Grey190);
    Q_PROPERTY_AUTO(QString,Grey200);
    Q_PROPERTY_AUTO(QString,Grey210);
    Q_PROPERTY_AUTO(QString,Grey220);
    Q_PROPERTY_AUTO(SekColorSet*,Yellow);
    Q_PROPERTY_AUTO(SekColorSet*,Orange);
    Q_PROPERTY_AUTO(SekColorSet*,Red);
    Q_PROPERTY_AUTO(SekColorSet*,Magenta);
    Q_PROPERTY_AUTO(SekColorSet*,Purple);
    Q_PROPERTY_AUTO(SekColorSet*,Blue);
    Q_PROPERTY_AUTO(SekColorSet*,Teal);
    Q_PROPERTY_AUTO(SekColorSet*,Green);
    QML_NAMED_ELEMENT(SekColors)
    QML_SINGLETON
private:
    explicit SekColors(QObject *parent = nullptr);
public:
    SINGLETON(SekColors)
    static SekColors *create(QQmlEngine *qmlEngine, QJSEngine *jsEngine){return getInstance();}
};

#endif // FLUCOLORS_H
