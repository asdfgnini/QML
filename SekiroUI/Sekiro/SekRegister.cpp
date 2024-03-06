#include "SekRegister.h"

#include "SekApp.h"
#include <QCoreApplication>

SekRegister::SekRegister(QObject *parent):QObject{parent}{
    from(nullptr);
    to(nullptr);
    path("");
}

void SekRegister::launch(const QJsonObject& argument){
    SekApp::getInstance()->navigate(path(),argument,this);
}

void SekRegister::onResult(const QJsonObject& data){
    Q_EMIT result(data);
}
