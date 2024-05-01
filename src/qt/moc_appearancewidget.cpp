/****************************************************************************
** Meta object code from reading C++ file 'appearancewidget.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/appearancewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appearancewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AppearanceWidget_t {
    QByteArrayData data[14];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppearanceWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppearanceWidget_t qt_meta_stringdata_AppearanceWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AppearanceWidget"
QT_MOC_LITERAL(1, 17, 17), // "appearanceChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6), // "accept"
QT_MOC_LITERAL(4, 43, 11), // "updateTheme"
QT_MOC_LITERAL(5, 55, 7), // "toTheme"
QT_MOC_LITERAL(6, 63, 16), // "updateFontFamily"
QT_MOC_LITERAL(7, 80, 5), // "index"
QT_MOC_LITERAL(8, 86, 15), // "updateFontScale"
QT_MOC_LITERAL(9, 102, 6), // "nScale"
QT_MOC_LITERAL(10, 109, 22), // "updateFontWeightNormal"
QT_MOC_LITERAL(11, 132, 6), // "nValue"
QT_MOC_LITERAL(12, 139, 6), // "fForce"
QT_MOC_LITERAL(13, 146, 20) // "updateFontWeightBold"

    },
    "AppearanceWidget\0appearanceChanged\0\0"
    "accept\0updateTheme\0toTheme\0updateFontFamily\0"
    "index\0updateFontScale\0nScale\0"
    "updateFontWeightNormal\0nValue\0fForce\0"
    "updateFontWeightBold"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppearanceWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   65,    2, 0x0a /* Public */,
       4,    1,   66,    2, 0x08 /* Private */,
       4,    0,   69,    2, 0x28 /* Private | MethodCloned */,
       6,    1,   70,    2, 0x08 /* Private */,
       8,    1,   73,    2, 0x08 /* Private */,
      10,    2,   76,    2, 0x08 /* Private */,
      10,    1,   81,    2, 0x28 /* Private | MethodCloned */,
      13,    2,   84,    2, 0x08 /* Private */,
      13,    1,   89,    2, 0x28 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void AppearanceWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AppearanceWidget *_t = static_cast<AppearanceWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appearanceChanged(); break;
        case 1: _t->accept(); break;
        case 2: _t->updateTheme((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateTheme(); break;
        case 4: _t->updateFontFamily((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateFontScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateFontWeightNormal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->updateFontWeightNormal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateFontWeightBold((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->updateFontWeightBold((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AppearanceWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AppearanceWidget::appearanceChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AppearanceWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AppearanceWidget.data,
      qt_meta_data_AppearanceWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AppearanceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppearanceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AppearanceWidget.stringdata0))
        return static_cast<void*>(const_cast< AppearanceWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int AppearanceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void AppearanceWidget::appearanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
