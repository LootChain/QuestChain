/****************************************************************************
** Meta object code from reading C++ file 'optionsdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/optionsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ProxyAddressValidator_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProxyAddressValidator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProxyAddressValidator_t qt_meta_stringdata_ProxyAddressValidator = {
    {
QT_MOC_LITERAL(0, 0, 21) // "ProxyAddressValidator"

    },
    "ProxyAddressValidator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProxyAddressValidator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ProxyAddressValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject ProxyAddressValidator::staticMetaObject = {
    { &QValidator::staticMetaObject, qt_meta_stringdata_ProxyAddressValidator.data,
      qt_meta_data_ProxyAddressValidator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProxyAddressValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProxyAddressValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProxyAddressValidator.stringdata0))
        return static_cast<void*>(const_cast< ProxyAddressValidator*>(this));
    return QValidator::qt_metacast(_clname);
}

int ProxyAddressValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_OptionsDialog_t {
    QByteArrayData data[22];
    char stringdata0[365];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OptionsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OptionsDialog_t qt_meta_stringdata_OptionsDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OptionsDialog"
QT_MOC_LITERAL(1, 14, 17), // "appearanceChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "proxyIpChecks"
QT_MOC_LITERAL(4, 47, 19), // "QValidatedLineEdit*"
QT_MOC_LITERAL(5, 67, 10), // "pUiProxyIp"
QT_MOC_LITERAL(6, 78, 10), // "nProxyPort"
QT_MOC_LITERAL(7, 89, 8), // "showPage"
QT_MOC_LITERAL(8, 98, 5), // "index"
QT_MOC_LITERAL(9, 104, 16), // "setOkButtonState"
QT_MOC_LITERAL(10, 121, 6), // "fState"
QT_MOC_LITERAL(11, 128, 22), // "on_resetButton_clicked"
QT_MOC_LITERAL(12, 151, 19), // "on_okButton_clicked"
QT_MOC_LITERAL(13, 171, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(14, 195, 28), // "on_hideTrayIcon_stateChanged"
QT_MOC_LITERAL(15, 224, 18), // "showRestartWarning"
QT_MOC_LITERAL(16, 243, 11), // "fPersistent"
QT_MOC_LITERAL(17, 255, 16), // "clearStatusLabel"
QT_MOC_LITERAL(18, 272, 26), // "updateProxyValidationState"
QT_MOC_LITERAL(19, 299, 22), // "updateDefaultProxyNets"
QT_MOC_LITERAL(20, 322, 30), // "updateQuestChainSendVisibility"
QT_MOC_LITERAL(21, 353, 11) // "updateWidth"

    },
    "OptionsDialog\0appearanceChanged\0\0"
    "proxyIpChecks\0QValidatedLineEdit*\0"
    "pUiProxyIp\0nProxyPort\0showPage\0index\0"
    "setOkButtonState\0fState\0on_resetButton_clicked\0"
    "on_okButton_clicked\0on_cancelButton_clicked\0"
    "on_hideTrayIcon_stateChanged\0"
    "showRestartWarning\0fPersistent\0"
    "clearStatusLabel\0updateProxyValidationState\0"
    "updateDefaultProxyNets\0"
    "updateQuestChainSendVisibility\0"
    "updateWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OptionsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    2,   90,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   95,    2, 0x08 /* Private */,
       9,    1,   98,    2, 0x08 /* Private */,
      11,    0,  101,    2, 0x08 /* Private */,
      12,    0,  102,    2, 0x08 /* Private */,
      13,    0,  103,    2, 0x08 /* Private */,
      14,    1,  104,    2, 0x08 /* Private */,
      15,    1,  107,    2, 0x08 /* Private */,
      15,    0,  110,    2, 0x28 /* Private | MethodCloned */,
      17,    0,  111,    2, 0x08 /* Private */,
      18,    0,  112,    2, 0x08 /* Private */,
      19,    0,  113,    2, 0x08 /* Private */,
      20,    0,  114,    2, 0x08 /* Private */,
      21,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OptionsDialog *_t = static_cast<OptionsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->appearanceChanged(); break;
        case 1: _t->proxyIpChecks((*reinterpret_cast< QValidatedLineEdit*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->showPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setOkButtonState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_resetButton_clicked(); break;
        case 5: _t->on_okButton_clicked(); break;
        case 6: _t->on_cancelButton_clicked(); break;
        case 7: _t->on_hideTrayIcon_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->showRestartWarning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->showRestartWarning(); break;
        case 10: _t->clearStatusLabel(); break;
        case 11: _t->updateProxyValidationState(); break;
        case 12: _t->updateDefaultProxyNets(); break;
        case 13: _t->updateQuestChainSendVisibility(); break;
        case 14: _t->updateWidth(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OptionsDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionsDialog::appearanceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OptionsDialog::*_t)(QValidatedLineEdit * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionsDialog::proxyIpChecks)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject OptionsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OptionsDialog.data,
      qt_meta_data_OptionsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsDialog.stringdata0))
        return static_cast<void*>(const_cast< OptionsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int OptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void OptionsDialog::appearanceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void OptionsDialog::proxyIpChecks(QValidatedLineEdit * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
