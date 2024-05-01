/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/bitcoingui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BitcoinGUI_t {
    QByteArrayData data[79];
    char stringdata0[1092];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BitcoinGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BitcoinGUI_t qt_meta_stringdata_BitcoinGUI = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BitcoinGUI"
QT_MOC_LITERAL(1, 11, 11), // "receivedURI"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 3), // "uri"
QT_MOC_LITERAL(4, 28, 16), // "requestedRestart"
QT_MOC_LITERAL(5, 45, 4), // "args"
QT_MOC_LITERAL(6, 50, 17), // "setNumConnections"
QT_MOC_LITERAL(7, 68, 5), // "count"
QT_MOC_LITERAL(8, 74, 16), // "setNetworkActive"
QT_MOC_LITERAL(9, 91, 13), // "networkActive"
QT_MOC_LITERAL(10, 105, 13), // "handleRestart"
QT_MOC_LITERAL(11, 119, 12), // "setNumBlocks"
QT_MOC_LITERAL(12, 132, 9), // "blockDate"
QT_MOC_LITERAL(13, 142, 9), // "blockHash"
QT_MOC_LITERAL(14, 152, 21), // "nVerificationProgress"
QT_MOC_LITERAL(15, 174, 7), // "headers"
QT_MOC_LITERAL(16, 182, 29), // "setAdditionalDataSyncProgress"
QT_MOC_LITERAL(17, 212, 13), // "nSyncProgress"
QT_MOC_LITERAL(18, 226, 7), // "message"
QT_MOC_LITERAL(19, 234, 5), // "title"
QT_MOC_LITERAL(20, 240, 5), // "style"
QT_MOC_LITERAL(21, 246, 5), // "bool*"
QT_MOC_LITERAL(22, 252, 3), // "ret"
QT_MOC_LITERAL(23, 256, 11), // "setHDStatus"
QT_MOC_LITERAL(24, 268, 9), // "hdEnabled"
QT_MOC_LITERAL(25, 278, 19), // "setEncryptionStatus"
QT_MOC_LITERAL(26, 298, 6), // "status"
QT_MOC_LITERAL(27, 305, 20), // "handlePaymentRequest"
QT_MOC_LITERAL(28, 326, 18), // "SendCoinsRecipient"
QT_MOC_LITERAL(29, 345, 9), // "recipient"
QT_MOC_LITERAL(30, 355, 19), // "incomingTransaction"
QT_MOC_LITERAL(31, 375, 4), // "date"
QT_MOC_LITERAL(32, 380, 4), // "unit"
QT_MOC_LITERAL(33, 385, 7), // "CAmount"
QT_MOC_LITERAL(34, 393, 6), // "amount"
QT_MOC_LITERAL(35, 400, 4), // "type"
QT_MOC_LITERAL(36, 405, 7), // "address"
QT_MOC_LITERAL(37, 413, 5), // "label"
QT_MOC_LITERAL(38, 419, 24), // "showIncomingTransactions"
QT_MOC_LITERAL(39, 444, 16), // "gotoOverviewPage"
QT_MOC_LITERAL(40, 461, 15), // "gotoHistoryPage"
QT_MOC_LITERAL(41, 477, 18), // "gotoMasternodePage"
QT_MOC_LITERAL(42, 496, 20), // "gotoReceiveCoinsPage"
QT_MOC_LITERAL(43, 517, 17), // "gotoSendCoinsPage"
QT_MOC_LITERAL(44, 535, 4), // "addr"
QT_MOC_LITERAL(45, 540, 27), // "gotoQuestChainSendCoinsPage"
QT_MOC_LITERAL(46, 568, 18), // "gotoSignMessageTab"
QT_MOC_LITERAL(47, 587, 20), // "gotoVerifyMessageTab"
QT_MOC_LITERAL(48, 608, 11), // "openClicked"
QT_MOC_LITERAL(49, 620, 18), // "highlightTabButton"
QT_MOC_LITERAL(50, 639, 16), // "QAbstractButton*"
QT_MOC_LITERAL(51, 656, 6), // "button"
QT_MOC_LITERAL(52, 663, 7), // "checked"
QT_MOC_LITERAL(53, 671, 14), // "optionsClicked"
QT_MOC_LITERAL(54, 686, 12), // "aboutClicked"
QT_MOC_LITERAL(55, 699, 15), // "showDebugWindow"
QT_MOC_LITERAL(56, 715, 8), // "showInfo"
QT_MOC_LITERAL(57, 724, 11), // "showConsole"
QT_MOC_LITERAL(58, 736, 9), // "showGraph"
QT_MOC_LITERAL(59, 746, 9), // "showPeers"
QT_MOC_LITERAL(60, 756, 10), // "showRepair"
QT_MOC_LITERAL(61, 767, 14), // "showConfEditor"
QT_MOC_LITERAL(62, 782, 11), // "showBackups"
QT_MOC_LITERAL(63, 794, 22), // "showHelpMessageClicked"
QT_MOC_LITERAL(64, 817, 29), // "showQuestChainSendHelpClicked"
QT_MOC_LITERAL(65, 847, 17), // "trayIconActivated"
QT_MOC_LITERAL(66, 865, 33), // "QSystemTrayIcon::ActivationRe..."
QT_MOC_LITERAL(67, 899, 6), // "reason"
QT_MOC_LITERAL(68, 906, 21), // "showNormalIfMinimized"
QT_MOC_LITERAL(69, 928, 13), // "fToggleHidden"
QT_MOC_LITERAL(70, 942, 12), // "toggleHidden"
QT_MOC_LITERAL(71, 955, 14), // "detectShutdown"
QT_MOC_LITERAL(72, 970, 12), // "showProgress"
QT_MOC_LITERAL(73, 983, 9), // "nProgress"
QT_MOC_LITERAL(74, 993, 18), // "setTrayIconVisible"
QT_MOC_LITERAL(75, 1012, 19), // "toggleNetworkActive"
QT_MOC_LITERAL(76, 1032, 16), // "showModalOverlay"
QT_MOC_LITERAL(77, 1049, 30), // "updateQuestChainSendVisibility"
QT_MOC_LITERAL(78, 1080, 11) // "updateWidth"

    },
    "BitcoinGUI\0receivedURI\0\0uri\0"
    "requestedRestart\0args\0setNumConnections\0"
    "count\0setNetworkActive\0networkActive\0"
    "handleRestart\0setNumBlocks\0blockDate\0"
    "blockHash\0nVerificationProgress\0headers\0"
    "setAdditionalDataSyncProgress\0"
    "nSyncProgress\0message\0title\0style\0"
    "bool*\0ret\0setHDStatus\0hdEnabled\0"
    "setEncryptionStatus\0status\0"
    "handlePaymentRequest\0SendCoinsRecipient\0"
    "recipient\0incomingTransaction\0date\0"
    "unit\0CAmount\0amount\0type\0address\0label\0"
    "showIncomingTransactions\0gotoOverviewPage\0"
    "gotoHistoryPage\0gotoMasternodePage\0"
    "gotoReceiveCoinsPage\0gotoSendCoinsPage\0"
    "addr\0gotoQuestChainSendCoinsPage\0"
    "gotoSignMessageTab\0gotoVerifyMessageTab\0"
    "openClicked\0highlightTabButton\0"
    "QAbstractButton*\0button\0checked\0"
    "optionsClicked\0aboutClicked\0showDebugWindow\0"
    "showInfo\0showConsole\0showGraph\0showPeers\0"
    "showRepair\0showConfEditor\0showBackups\0"
    "showHelpMessageClicked\0"
    "showQuestChainSendHelpClicked\0"
    "trayIconActivated\0QSystemTrayIcon::ActivationReason\0"
    "reason\0showNormalIfMinimized\0fToggleHidden\0"
    "toggleHidden\0detectShutdown\0showProgress\0"
    "nProgress\0setTrayIconVisible\0"
    "toggleNetworkActive\0showModalOverlay\0"
    "updateQuestChainSendVisibility\0"
    "updateWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  269,    2, 0x06 /* Public */,
       4,    1,  272,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  275,    2, 0x0a /* Public */,
       8,    1,  278,    2, 0x0a /* Public */,
      10,    1,  281,    2, 0x0a /* Public */,
      11,    5,  284,    2, 0x0a /* Public */,
      16,    1,  295,    2, 0x0a /* Public */,
      18,    4,  298,    2, 0x0a /* Public */,
      18,    3,  307,    2, 0x2a /* Public | MethodCloned */,
      23,    1,  314,    2, 0x0a /* Public */,
      25,    1,  317,    2, 0x0a /* Public */,
      27,    1,  320,    2, 0x0a /* Public */,
      30,    6,  323,    2, 0x0a /* Public */,
      38,    0,  336,    2, 0x0a /* Public */,
      39,    0,  337,    2, 0x08 /* Private */,
      40,    0,  338,    2, 0x08 /* Private */,
      41,    0,  339,    2, 0x08 /* Private */,
      42,    0,  340,    2, 0x08 /* Private */,
      43,    1,  341,    2, 0x08 /* Private */,
      43,    0,  344,    2, 0x28 /* Private | MethodCloned */,
      45,    1,  345,    2, 0x08 /* Private */,
      45,    0,  348,    2, 0x28 /* Private | MethodCloned */,
      46,    1,  349,    2, 0x08 /* Private */,
      46,    0,  352,    2, 0x28 /* Private | MethodCloned */,
      47,    1,  353,    2, 0x08 /* Private */,
      47,    0,  356,    2, 0x28 /* Private | MethodCloned */,
      48,    0,  357,    2, 0x08 /* Private */,
      49,    2,  358,    2, 0x08 /* Private */,
      53,    0,  363,    2, 0x08 /* Private */,
      54,    0,  364,    2, 0x08 /* Private */,
      55,    0,  365,    2, 0x08 /* Private */,
      56,    0,  366,    2, 0x08 /* Private */,
      57,    0,  367,    2, 0x08 /* Private */,
      58,    0,  368,    2, 0x08 /* Private */,
      59,    0,  369,    2, 0x08 /* Private */,
      60,    0,  370,    2, 0x08 /* Private */,
      61,    0,  371,    2, 0x08 /* Private */,
      62,    0,  372,    2, 0x08 /* Private */,
      63,    0,  373,    2, 0x08 /* Private */,
      64,    0,  374,    2, 0x08 /* Private */,
      65,    1,  375,    2, 0x08 /* Private */,
      68,    1,  378,    2, 0x08 /* Private */,
      68,    0,  381,    2, 0x28 /* Private | MethodCloned */,
      70,    0,  382,    2, 0x08 /* Private */,
      71,    0,  383,    2, 0x08 /* Private */,
      72,    2,  384,    2, 0x08 /* Private */,
      74,    1,  389,    2, 0x08 /* Private */,
      75,    0,  392,    2, 0x08 /* Private */,
      76,    0,  393,    2, 0x08 /* Private */,
      77,    0,  394,    2, 0x08 /* Private */,
      78,    0,  395,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime, QMetaType::QString, QMetaType::Double, QMetaType::Bool,    7,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt, 0x80000000 | 21,   19,   18,   20,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt,   19,   18,   20,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Bool, 0x80000000 | 28,   29,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, 0x80000000 | 33, QMetaType::QString, QMetaType::QString, QMetaType::QString,   31,   32,   34,   35,   36,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 50, QMetaType::Bool,   51,   52,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 66,   67,
    QMetaType::Void, QMetaType::Bool,   69,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   19,   73,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->receivedURI((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->requestedRestart((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setNetworkActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->handleRestart((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 5: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 6: _t->setAdditionalDataSyncProgress((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< bool*(*)>(_a[4]))); break;
        case 8: _t->message((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 9: _t->setHDStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: { bool _r = _t->handlePaymentRequest((*reinterpret_cast< const SendCoinsRecipient(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: _t->incomingTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const CAmount(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6]))); break;
        case 13: _t->showIncomingTransactions(); break;
        case 14: _t->gotoOverviewPage(); break;
        case 15: _t->gotoHistoryPage(); break;
        case 16: _t->gotoMasternodePage(); break;
        case 17: _t->gotoReceiveCoinsPage(); break;
        case 18: _t->gotoSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->gotoSendCoinsPage(); break;
        case 20: _t->gotoQuestChainSendCoinsPage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->gotoQuestChainSendCoinsPage(); break;
        case 22: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->gotoSignMessageTab(); break;
        case 24: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->gotoVerifyMessageTab(); break;
        case 26: _t->openClicked(); break;
        case 27: _t->highlightTabButton((*reinterpret_cast< QAbstractButton*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->optionsClicked(); break;
        case 29: _t->aboutClicked(); break;
        case 30: _t->showDebugWindow(); break;
        case 31: _t->showInfo(); break;
        case 32: _t->showConsole(); break;
        case 33: _t->showGraph(); break;
        case 34: _t->showPeers(); break;
        case 35: _t->showRepair(); break;
        case 36: _t->showConfEditor(); break;
        case 37: _t->showBackups(); break;
        case 38: _t->showHelpMessageClicked(); break;
        case 39: _t->showQuestChainSendHelpClicked(); break;
        case 40: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 41: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->showNormalIfMinimized(); break;
        case 43: _t->toggleHidden(); break;
        case 44: _t->detectShutdown(); break;
        case 45: _t->showProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 46: _t->setTrayIconVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->toggleNetworkActive(); break;
        case 48: _t->showModalOverlay(); break;
        case 49: _t->updateQuestChainSendVisibility(); break;
        case 50: _t->updateWidth(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BitcoinGUI::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BitcoinGUI::receivedURI)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BitcoinGUI::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BitcoinGUI::requestedRestart)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI.data,
      qt_meta_data_BitcoinGUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI.stringdata0))
        return static_cast<void*>(const_cast< BitcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
void BitcoinGUI::receivedURI(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BitcoinGUI::requestedRestart(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_UnitDisplayStatusBarControl_t {
    QByteArrayData data[7];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnitDisplayStatusBarControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnitDisplayStatusBarControl_t qt_meta_stringdata_UnitDisplayStatusBarControl = {
    {
QT_MOC_LITERAL(0, 0, 27), // "UnitDisplayStatusBarControl"
QT_MOC_LITERAL(1, 28, 17), // "updateDisplayUnit"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 8), // "newUnits"
QT_MOC_LITERAL(4, 56, 15), // "onMenuSelection"
QT_MOC_LITERAL(5, 72, 8), // "QAction*"
QT_MOC_LITERAL(6, 81, 6) // "action"

    },
    "UnitDisplayStatusBarControl\0"
    "updateDisplayUnit\0\0newUnits\0onMenuSelection\0"
    "QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnitDisplayStatusBarControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void UnitDisplayStatusBarControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UnitDisplayStatusBarControl *_t = static_cast<UnitDisplayStatusBarControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateDisplayUnit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onMenuSelection((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject UnitDisplayStatusBarControl::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_UnitDisplayStatusBarControl.data,
      qt_meta_data_UnitDisplayStatusBarControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UnitDisplayStatusBarControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnitDisplayStatusBarControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UnitDisplayStatusBarControl.stringdata0))
        return static_cast<void*>(const_cast< UnitDisplayStatusBarControl*>(this));
    return QLabel::qt_metacast(_clname);
}

int UnitDisplayStatusBarControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
