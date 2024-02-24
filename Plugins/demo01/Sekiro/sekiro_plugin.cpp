#include "sekiro_plugin.h"

#include "sekiro.h"

#include <qqml.h>

void SekiroPlugin::registerTypes(const char *uri)
{
    // @uri Sekiro
    qmlRegisterType<Sekiro>(uri, 1, 0, "Sekiro");

    qmlRegisterType(QUrl("qrc:/Circle.qml"),uri,1,0,"Circle");
    qmlRegisterType(QUrl("qrc:/GlobalConfig.qml"),uri,1,0,"GlobalConfig");
    qmlRegisterType(QUrl("qrc:/TDragRect.qml"),uri,1,0,"TDragRect");
    qmlRegisterType(QUrl("qrc:/TMoveArea.qml"),uri,1,0,"TMoveArea");
    qmlRegisterType(QUrl("qrc:/TResizeBorder.qml"),uri,1,0,"TResizeBorder");
    qmlRegisterType(QUrl("qrc:/TTextBtn.qml"),uri,1,0,"TTextBtn");

}

