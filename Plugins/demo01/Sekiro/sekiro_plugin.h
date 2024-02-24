#ifndef SEKIRO_PLUGIN_H
#define SEKIRO_PLUGIN_H

#include <QQmlExtensionPlugin>

class SekiroPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri) override;
};

#endif // SEKIRO_PLUGIN_H
