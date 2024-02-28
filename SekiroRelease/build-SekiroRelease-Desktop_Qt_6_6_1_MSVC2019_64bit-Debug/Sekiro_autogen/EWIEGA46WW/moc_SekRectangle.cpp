/****************************************************************************
** Meta object code from reading C++ file 'SekRectangle.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../SekiroRelease/SekRectangle.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SekRectangle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSekRectangleENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSSekRectangleENDCLASS = QtMocHelpers::stringData(
    "SekRectangle",
    "QML.Element",
    "colorChanged",
    "",
    "radiusChanged",
    "color",
    "radius",
    "QList<int>"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSekRectangleENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[13];
    char stringdata1[12];
    char stringdata2[13];
    char stringdata3[1];
    char stringdata4[14];
    char stringdata5[6];
    char stringdata6[7];
    char stringdata7[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSekRectangleENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSekRectangleENDCLASS_t qt_meta_stringdata_CLASSSekRectangleENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "SekRectangle"
        QT_MOC_LITERAL(13, 11),  // "QML.Element"
        QT_MOC_LITERAL(25, 12),  // "colorChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 13),  // "radiusChanged"
        QT_MOC_LITERAL(53, 5),  // "color"
        QT_MOC_LITERAL(59, 6),  // "radius"
        QT_MOC_LITERAL(66, 10)   // "QList<int>"
    },
    "SekRectangle",
    "QML.Element",
    "colorChanged",
    "",
    "radiusChanged",
    "color",
    "radius",
    "QList<int>"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSekRectangleENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       2,   16, // methods
       2,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    0,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       2,    0,   28,    3, 0x06,    3 /* Public */,
       4,    0,   29,    3, 0x06,    4 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QColor, 0x00015003, uint(0), 0,
       6, 0x80000000 | 7, 0x0001500b, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject SekRectangle::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickPaintedItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSSekRectangleENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSekRectangleENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_metaTypeArray<
        // property 'color'
        QColor,
        // property 'radius'
        QList<int>,
        // Q_OBJECT / Q_GADGET
        SekRectangle,
        // method 'colorChanged'
        void,
        // method 'radiusChanged'
        void
    >,
    nullptr
} };

void SekRectangle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SekRectangle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->colorChanged(); break;
        case 1: _t->radiusChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SekRectangle::*)();
            if (_t _q_method = &SekRectangle::colorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SekRectangle::*)();
            if (_t _q_method = &SekRectangle::radiusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SekRectangle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->_color; break;
        case 1: *reinterpret_cast< QList<int>*>(_v) = _t->_radius; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SekRectangle *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_color != *reinterpret_cast< QColor*>(_v)) {
                _t->_color = *reinterpret_cast< QColor*>(_v);
                Q_EMIT _t->colorChanged();
            }
            break;
        case 1:
            if (_t->_radius != *reinterpret_cast< QList<int>*>(_v)) {
                _t->_radius = *reinterpret_cast< QList<int>*>(_v);
                Q_EMIT _t->radiusChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *SekRectangle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SekRectangle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSekRectangleENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QQuickPaintedItem::qt_metacast(_clname);
}

int SekRectangle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickPaintedItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SekRectangle::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SekRectangle::radiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
