/****************************************************************************
** Meta object code from reading C++ file 'wallettests.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/test/wallettests.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wallettests.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalletTests_t {
    QByteArrayData data[3];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalletTests_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalletTests_t qt_meta_stringdata_WalletTests = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WalletTests"
QT_MOC_LITERAL(1, 12, 11), // "walletTests"
QT_MOC_LITERAL(2, 24, 0) // ""

    },
    "WalletTests\0walletTests\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalletTests[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WalletTests::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalletTests *_t = static_cast<WalletTests *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->walletTests(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WalletTests::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletTests.data,
      qt_meta_data_WalletTests,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalletTests::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalletTests::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalletTests.stringdata0))
        return static_cast<void*>(const_cast< WalletTests*>(this));
    return QObject::qt_metacast(_clname);
}

int WalletTests::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
