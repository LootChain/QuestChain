/****************************************************************************
** Meta object code from reading C++ file 'masternodelist.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/masternodelist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'masternodelist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MasternodeList_t {
    QByteArrayData data[13];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MasternodeList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MasternodeList_t qt_meta_stringdata_MasternodeList = {
    {
QT_MOC_LITERAL(0, 0, 14), // "MasternodeList"
QT_MOC_LITERAL(1, 15, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 19), // "showContextMenuDIP3"
QT_MOC_LITERAL(4, 50, 33), // "on_filterLineEditDIP3_textCha..."
QT_MOC_LITERAL(5, 84, 11), // "strFilterIn"
QT_MOC_LITERAL(6, 96, 41), // "on_checkBoxMyMasternodesOnly_..."
QT_MOC_LITERAL(7, 138, 5), // "state"
QT_MOC_LITERAL(8, 144, 21), // "extraInfoDIP3_clicked"
QT_MOC_LITERAL(9, 166, 21), // "copyProTxHash_clicked"
QT_MOC_LITERAL(10, 188, 30), // "copyCollateralOutpoint_clicked"
QT_MOC_LITERAL(11, 219, 27), // "handleMasternodeListChanged"
QT_MOC_LITERAL(12, 247, 23) // "updateDIP3ListScheduled"

    },
    "MasternodeList\0doubleClicked\0\0"
    "showContextMenuDIP3\0"
    "on_filterLineEditDIP3_textChanged\0"
    "strFilterIn\0on_checkBoxMyMasternodesOnly_stateChanged\0"
    "state\0extraInfoDIP3_clicked\0"
    "copyProTxHash_clicked\0"
    "copyCollateralOutpoint_clicked\0"
    "handleMasternodeListChanged\0"
    "updateDIP3ListScheduled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MasternodeList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   62,    2, 0x08 /* Private */,
       4,    1,   65,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MasternodeList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MasternodeList *_t = static_cast<MasternodeList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->showContextMenuDIP3((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->on_filterLineEditDIP3_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_checkBoxMyMasternodesOnly_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->extraInfoDIP3_clicked(); break;
        case 5: _t->copyProTxHash_clicked(); break;
        case 6: _t->copyCollateralOutpoint_clicked(); break;
        case 7: _t->handleMasternodeListChanged(); break;
        case 8: _t->updateDIP3ListScheduled(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MasternodeList::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MasternodeList::doubleClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MasternodeList::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MasternodeList.data,
      qt_meta_data_MasternodeList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MasternodeList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MasternodeList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MasternodeList.stringdata0))
        return static_cast<void*>(const_cast< MasternodeList*>(this));
    return QWidget::qt_metacast(_clname);
}

int MasternodeList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MasternodeList::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
