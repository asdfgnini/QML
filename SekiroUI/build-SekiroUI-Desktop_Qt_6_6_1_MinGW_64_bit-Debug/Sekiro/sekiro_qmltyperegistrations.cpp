/****************************************************************************
** Generated QML type registration code
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <QtQml/qqml.h>
#include <QtQml/qqmlmoduleregistration.h>

#include <Def.h>
#include <SekColorSet.h>
#include <SekColors.h>
#include <SekRectangle.h>
#include <SekTextStyle.h>
#include <SekTheme.h>
#include <SekTools.h>
#include <SekViewModel.h>
#include <sekiro.h>


#if !defined(QT_STATIC)
#define Q_QMLTYPE_EXPORT Q_DECL_EXPORT
#else
#define Q_QMLTYPE_EXPORT
#endif
Q_QMLTYPE_EXPORT void qml_register_types_Sekiro()
{
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &SekCalendarViewType::staticMetaObject;},
            "SekCalendarViewType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&SekCalendarViewType::staticMetaObject, "Sekiro", 1, nullptr, &SekCalendarViewType::staticMetaObject, nullptr);
    qmlRegisterTypesAndRevisions<SekColorSet>("Sekiro", 1);
    qmlRegisterTypesAndRevisions<SekColors>("Sekiro", 1);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &SekContentDialogType::staticMetaObject;},
            "SekContentDialogType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&SekContentDialogType::staticMetaObject, "Sekiro", 1, nullptr, &SekContentDialogType::staticMetaObject, nullptr);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &SekNavigationViewType::staticMetaObject;},
            "SekNavigationViewType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&SekNavigationViewType::staticMetaObject, "Sekiro", 1, nullptr, &SekNavigationViewType::staticMetaObject, nullptr);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &SekNetworkType::staticMetaObject;},
            "SekNetworkType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&SekNetworkType::staticMetaObject, "Sekiro", 1, nullptr, &SekNetworkType::staticMetaObject, nullptr);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &SekPageType::staticMetaObject;},
            "SekPageType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&SekPageType::staticMetaObject, "Sekiro", 1, nullptr, &SekPageType::staticMetaObject, nullptr);
    qmlRegisterTypesAndRevisions<SekRectangle>("Sekiro", 1);
    qmlRegisterAnonymousType<QQuickItem, 254>("Sekiro", 1);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &SekStatusLayoutType::staticMetaObject;},
            "SekStatusLayoutType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&SekStatusLayoutType::staticMetaObject, "Sekiro", 1, nullptr, &SekStatusLayoutType::staticMetaObject, nullptr);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &SekTabViewType::staticMetaObject;},
            "SekTabViewType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&SekTabViewType::staticMetaObject, "Sekiro", 1, nullptr, &SekTabViewType::staticMetaObject, nullptr);
    qmlRegisterTypesAndRevisions<SekTextStyle>("Sekiro", 1);
    qmlRegisterTypesAndRevisions<SekTheme>("Sekiro", 1);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &SekThemeType::staticMetaObject;},
            "SekThemeType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&SekThemeType::staticMetaObject, "Sekiro", 1, nullptr, &SekThemeType::staticMetaObject, nullptr);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &SekTimePickerType::staticMetaObject;},
            "SekTimePickerType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&SekTimePickerType::staticMetaObject, "Sekiro", 1, nullptr, &SekTimePickerType::staticMetaObject, nullptr);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &SekTimelineType::staticMetaObject;},
            "SekTimelineType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&SekTimelineType::staticMetaObject, "Sekiro", 1, nullptr, &SekTimelineType::staticMetaObject, nullptr);
    qmlRegisterTypesAndRevisions<SekTools>("Sekiro", 1);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &SekTreeViewType::staticMetaObject;},
            "SekTreeViewType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&SekTreeViewType::staticMetaObject, "Sekiro", 1, nullptr, &SekTreeViewType::staticMetaObject, nullptr);
    qmlRegisterTypesAndRevisions<SekViewModel>("Sekiro", 1);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &SekViewModelType::staticMetaObject;},
            "SekViewModelType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&SekViewModelType::staticMetaObject, "Sekiro", 1, nullptr, &SekViewModelType::staticMetaObject, nullptr);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &SekWindowType::staticMetaObject;},
            "SekWindowType");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&SekWindowType::staticMetaObject, "Sekiro", 1, nullptr, &SekWindowType::staticMetaObject, nullptr);
    {
        Q_CONSTINIT static auto metaType = QQmlPrivate::metaTypeForNamespace(
            [](const QtPrivate::QMetaTypeInterface *) {return &Sekent_Awesome::staticMetaObject;},
            "Sekent_Awesome");
        QMetaType(&metaType).id();
    }
    qmlRegisterNamespaceAndRevisions(&Sekent_Awesome::staticMetaObject, "Sekiro", 1, nullptr, &Sekent_Awesome::staticMetaObject, nullptr);
    qmlRegisterTypesAndRevisions<Sekiro>("Sekiro", 1);
    qmlRegisterModule("Sekiro", 1, 0);
}

static const QQmlModuleRegistration registration("Sekiro", qml_register_types_Sekiro);
