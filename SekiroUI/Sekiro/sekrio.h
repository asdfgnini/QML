#ifndef SEKRIO_H
#define SEKRIO_H

#include <QtQuick/QQuickPaintedItem>

class Sekrio : public QQuickPaintedItem
{
    Q_OBJECT
    QML_ELEMENT
    Q_DISABLE_COPY(Sekrio)
public:
    explicit Sekrio(QQuickItem *parent = nullptr);
    void paint(QPainter *painter) override;
    ~Sekrio() override;
};

#endif // SEKRIO_H
