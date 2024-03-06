#ifndef SekREGISTER_H
#define SekREGISTER_H

#include <QObject>
#include <QQuickWindow>
#include <QJsonObject>
#include "stdafx.h"

/**
 * @brief The SekRegister class
 */
class SekRegister : public QObject
{
    Q_OBJECT
    Q_PROPERTY_AUTO(QQuickWindow*,from)
    Q_PROPERTY_AUTO(QQuickWindow*,to)
    Q_PROPERTY_AUTO(QString,path);
public:
    explicit SekRegister(QObject *parent = nullptr);
    Q_INVOKABLE void launch(const QJsonObject& argument  = {});
    Q_INVOKABLE void onResult(const QJsonObject& data  = {});
    Q_SIGNAL void result(const QJsonObject& data);
};

#endif // SekREGISTER_H
