/****************************************************************************
** Meta object code from reading C++ file 'transactiontablemodel.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/transactiontablemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transactiontablemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TransactionTableModel_t {
    QByteArrayData data[16];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransactionTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransactionTableModel_t qt_meta_stringdata_TransactionTableModel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "TransactionTableModel"
QT_MOC_LITERAL(1, 22, 17), // "updateTransaction"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "hash"
QT_MOC_LITERAL(4, 46, 6), // "status"
QT_MOC_LITERAL(5, 53, 15), // "showTransaction"
QT_MOC_LITERAL(6, 69, 17), // "updateAddressBook"
QT_MOC_LITERAL(7, 87, 7), // "address"
QT_MOC_LITERAL(8, 95, 5), // "label"
QT_MOC_LITERAL(9, 101, 6), // "isMine"
QT_MOC_LITERAL(10, 108, 7), // "purpose"
QT_MOC_LITERAL(11, 116, 19), // "updateConfirmations"
QT_MOC_LITERAL(12, 136, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(13, 154, 23), // "updateAmountColumnTitle"
QT_MOC_LITERAL(14, 178, 31), // "setProcessingQueuedTransactions"
QT_MOC_LITERAL(15, 210, 5) // "value"

    },
    "TransactionTableModel\0updateTransaction\0"
    "\0hash\0status\0showTransaction\0"
    "updateAddressBook\0address\0label\0isMine\0"
    "purpose\0updateConfirmations\0"
    "updateDisplayUnit\0updateAmountColumnTitle\0"
    "setProcessingQueuedTransactions\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransactionTableModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x0a /* Public */,
       6,    5,   51,    2, 0x0a /* Public */,
      11,    0,   62,    2, 0x0a /* Public */,
      12,    0,   63,    2, 0x0a /* Public */,
      13,    0,   64,    2, 0x0a /* Public */,
      14,    1,   65,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QString, QMetaType::Int,    7,    8,    9,   10,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

void TransactionTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TransactionTableModel *_t = static_cast<TransactionTableModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->updateAddressBook((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 2: _t->updateConfirmations(); break;
        case 3: _t->updateDisplayUnit(); break;
        case 4: _t->updateAmountColumnTitle(); break;
        case 5: _t->setProcessingQueuedTransactions((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TransactionTableModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_TransactionTableModel.data,
      qt_meta_data_TransactionTableModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TransactionTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransactionTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TransactionTableModel.stringdata0))
        return static_cast<void*>(const_cast< TransactionTableModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int TransactionTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
