#ifndef SEKIRO_H
#define SEKIRO_H

#include <QtQuick/QQuickPaintedItem>

class Sekiro : public QQuickPaintedItem
{
    Q_OBJECT
    QML_ELEMENT
    Q_DISABLE_COPY(Sekiro)
public:
    explicit Sekiro(QQuickItem *parent = nullptr);
    void paint(QPainter *painter) override;
    ~Sekiro() override;
};

#endif // SEKIRO_H
