#ifndef SekFRAMELESSHELPER_H
#define SekFRAMELESSHELPER_H

#include <QObject>
#include <QQuickWindow>
#include <QtQml/qqml.h>
#include <QAbstractNativeEventFilter>
#include <QQmlProperty>

#if (QT_VERSION >= QT_VERSION_CHECK(6, 0, 0))
using QT_NATIVE_EVENT_RESULT_TYPE = qintptr;
using QT_ENTER_EVENT_TYPE = QEnterEvent;
#else
using QT_NATIVE_EVENT_RESULT_TYPE = long;
using QT_ENTER_EVENT_TYPE = QEvent;
#endif

class SekFramelessHelper;

class FramelessEventFilter : public QAbstractNativeEventFilter
{
public:
    FramelessEventFilter(SekFramelessHelper* helper);
    bool nativeEventFilter(const QByteArray &eventType, void *message, QT_NATIVE_EVENT_RESULT_TYPE *result) override;
public:
    QPointer<SekFramelessHelper> _helper = nullptr;
    qint64 _current = 0;
};

class SekFramelessHelper : public QObject, public QQmlParserStatus
{
    Q_OBJECT
    Q_INTERFACES(QQmlParserStatus)
    QML_NAMED_ELEMENT(SekFramelessHelper)
public:
    explicit SekFramelessHelper(QObject *parent = nullptr);
    ~SekFramelessHelper();
    void classBegin() override;
    void componentComplete() override;
    bool hoverMaxBtn();
    bool resizeable();
    QObject* maximizeButton();
    void setOriginalPos(QVariant pos);
    Q_INVOKABLE void showSystemMenu();
    Q_SIGNAL void loadCompleted();
protected:
    bool eventFilter(QObject *obj, QEvent *event) override;
private:
    void _updateCursor(int edges);
    bool _maximized();
    bool _fullScreen();
    Q_SLOT void _onStayTopChange();
    Q_SLOT void _onScreenChanged();
public:
    QPointer<QQuickWindow> window = nullptr;
private:
    FramelessEventFilter* _nativeEvent = nullptr;
    QQmlProperty _stayTop;
    QQmlProperty _screen;
    QQmlProperty _originalPos;
    QQmlProperty _fixSize;
    QQmlProperty _realHeight;
    QQmlProperty _realWidth;
    QQmlProperty _appBarHeight;
    int _edges = 0;
};

#endif // SekFRAMELESSHELPER_H
