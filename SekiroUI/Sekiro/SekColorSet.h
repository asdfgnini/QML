#ifndef SekCOLORSET_H
#define SekCOLORSET_H

#include <QObject>
#include <QtQml/qqml.h>
#include "stdafx.h"

/**
 * @brief The SekColorSet class
 */
class SekColorSet : public QObject
{
    Q_OBJECT
    Q_PROPERTY_AUTO(QString,darkest)
    Q_PROPERTY_AUTO(QString,darker)
    Q_PROPERTY_AUTO(QString,dark)
    Q_PROPERTY_AUTO(QString,normal)
    Q_PROPERTY_AUTO(QString,light)
    Q_PROPERTY_AUTO(QString,lighter)
    Q_PROPERTY_AUTO(QString,lightest)
    QML_NAMED_ELEMENT(SekColorSet)
public:
    explicit SekColorSet(QObject *parent = nullptr);
};

#endif // SekCOLORSET_H
