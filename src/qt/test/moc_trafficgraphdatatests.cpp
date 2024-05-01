/****************************************************************************
** Meta object code from reading C++ file 'trafficgraphdatatests.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/test/trafficgraphdatatests.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trafficgraphdatatests.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TrafficGraphDataTests_t {
    QByteArrayData data[9];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrafficGraphDataTests_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrafficGraphDataTests_t qt_meta_stringdata_TrafficGraphDataTests = {
    {
QT_MOC_LITERAL(0, 0, 21), // "TrafficGraphDataTests"
QT_MOC_LITERAL(1, 22, 29), // "simpleCurrentSampleQueueTests"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 35), // "accumulationCurrentSampleQueu..."
QT_MOC_LITERAL(4, 89, 13), // "getRangeTests"
QT_MOC_LITERAL(5, 103, 16), // "switchRangeTests"
QT_MOC_LITERAL(6, 120, 10), // "clearTests"
QT_MOC_LITERAL(7, 131, 20), // "averageBandwidthTest"
QT_MOC_LITERAL(8, 152, 31) // "averageBandwidthEvery2EmptyTest"

    },
    "TrafficGraphDataTests\0"
    "simpleCurrentSampleQueueTests\0\0"
    "accumulationCurrentSampleQueueTests\0"
    "getRangeTests\0switchRangeTests\0"
    "clearTests\0averageBandwidthTest\0"
    "averageBandwidthEvery2EmptyTest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrafficGraphDataTests[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TrafficGraphDataTests::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TrafficGraphDataTests *_t = static_cast<TrafficGraphDataTests *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->simpleCurrentSampleQueueTests(); break;
        case 1: _t->accumulationCurrentSampleQueueTests(); break;
        case 2: _t->getRangeTests(); break;
        case 3: _t->switchRangeTests(); break;
        case 4: _t->clearTests(); break;
        case 5: _t->averageBandwidthTest(); break;
        case 6: _t->averageBandwidthEvery2EmptyTest(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TrafficGraphDataTests::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TrafficGraphDataTests.data,
      qt_meta_data_TrafficGraphDataTests,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TrafficGraphDataTests::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrafficGraphDataTests::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TrafficGraphDataTests.stringdata0))
        return static_cast<void*>(const_cast< TrafficGraphDataTests*>(this));
    return QObject::qt_metacast(_clname);
}

int TrafficGraphDataTests::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
