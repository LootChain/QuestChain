/****************************************************************************
** Meta object code from reading C++ file 'rpcconsole.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/rpcconsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpcconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RPCConsole_t {
    QByteArrayData data[75];
    char stringdata0[1003];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RPCConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RPCConsole_t qt_meta_stringdata_RPCConsole = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RPCConsole"
QT_MOC_LITERAL(1, 11, 12), // "stopExecutor"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "cmdRequest"
QT_MOC_LITERAL(4, 36, 7), // "command"
QT_MOC_LITERAL(5, 44, 13), // "handleRestart"
QT_MOC_LITERAL(6, 58, 4), // "args"
QT_MOC_LITERAL(7, 63, 8), // "showPage"
QT_MOC_LITERAL(8, 72, 5), // "index"
QT_MOC_LITERAL(9, 78, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(10, 104, 34), // "on_stackedWidgetRPC_currentCh..."
QT_MOC_LITERAL(11, 139, 33), // "on_openDebugLogfileButton_cli..."
QT_MOC_LITERAL(12, 173, 29), // "on_sldGraphRange_valueChanged"
QT_MOC_LITERAL(13, 203, 5), // "value"
QT_MOC_LITERAL(14, 209, 11), // "resizeEvent"
QT_MOC_LITERAL(15, 221, 13), // "QResizeEvent*"
QT_MOC_LITERAL(16, 235, 5), // "event"
QT_MOC_LITERAL(17, 241, 9), // "showEvent"
QT_MOC_LITERAL(18, 251, 11), // "QShowEvent*"
QT_MOC_LITERAL(19, 263, 9), // "hideEvent"
QT_MOC_LITERAL(20, 273, 11), // "QHideEvent*"
QT_MOC_LITERAL(21, 285, 11), // "changeEvent"
QT_MOC_LITERAL(22, 297, 7), // "QEvent*"
QT_MOC_LITERAL(23, 305, 1), // "e"
QT_MOC_LITERAL(24, 307, 25), // "showPeersTableContextMenu"
QT_MOC_LITERAL(25, 333, 5), // "point"
QT_MOC_LITERAL(26, 339, 23), // "showBanTableContextMenu"
QT_MOC_LITERAL(27, 363, 28), // "showOrHideBanTableIfRequired"
QT_MOC_LITERAL(28, 392, 17), // "clearSelectedNode"
QT_MOC_LITERAL(29, 410, 5), // "clear"
QT_MOC_LITERAL(30, 416, 12), // "clearHistory"
QT_MOC_LITERAL(31, 429, 10), // "fontBigger"
QT_MOC_LITERAL(32, 440, 11), // "fontSmaller"
QT_MOC_LITERAL(33, 452, 11), // "setFontSize"
QT_MOC_LITERAL(34, 464, 7), // "newSize"
QT_MOC_LITERAL(35, 472, 13), // "walletSalvage"
QT_MOC_LITERAL(36, 486, 12), // "walletRescan"
QT_MOC_LITERAL(37, 499, 14), // "walletZaptxes1"
QT_MOC_LITERAL(38, 514, 14), // "walletZaptxes2"
QT_MOC_LITERAL(39, 529, 13), // "walletUpgrade"
QT_MOC_LITERAL(40, 543, 13), // "walletReindex"
QT_MOC_LITERAL(41, 557, 7), // "message"
QT_MOC_LITERAL(42, 565, 8), // "category"
QT_MOC_LITERAL(43, 574, 4), // "html"
QT_MOC_LITERAL(44, 579, 17), // "setNumConnections"
QT_MOC_LITERAL(45, 597, 5), // "count"
QT_MOC_LITERAL(46, 603, 16), // "setNetworkActive"
QT_MOC_LITERAL(47, 620, 13), // "networkActive"
QT_MOC_LITERAL(48, 634, 21), // "updateMasternodeCount"
QT_MOC_LITERAL(49, 656, 12), // "setNumBlocks"
QT_MOC_LITERAL(50, 669, 9), // "blockDate"
QT_MOC_LITERAL(51, 679, 9), // "blockHash"
QT_MOC_LITERAL(52, 689, 21), // "nVerificationProgress"
QT_MOC_LITERAL(53, 711, 7), // "headers"
QT_MOC_LITERAL(54, 719, 14), // "setMempoolSize"
QT_MOC_LITERAL(55, 734, 11), // "numberOfTxs"
QT_MOC_LITERAL(56, 746, 6), // "size_t"
QT_MOC_LITERAL(57, 753, 8), // "dynUsage"
QT_MOC_LITERAL(58, 762, 23), // "setInstantSendLockCount"
QT_MOC_LITERAL(59, 786, 13), // "browseHistory"
QT_MOC_LITERAL(60, 800, 6), // "offset"
QT_MOC_LITERAL(61, 807, 11), // "scrollToEnd"
QT_MOC_LITERAL(62, 819, 12), // "peerSelected"
QT_MOC_LITERAL(63, 832, 14), // "QItemSelection"
QT_MOC_LITERAL(64, 847, 8), // "selected"
QT_MOC_LITERAL(65, 856, 10), // "deselected"
QT_MOC_LITERAL(66, 867, 23), // "peerLayoutAboutToChange"
QT_MOC_LITERAL(67, 891, 17), // "peerLayoutChanged"
QT_MOC_LITERAL(68, 909, 22), // "disconnectSelectedNode"
QT_MOC_LITERAL(69, 932, 15), // "banSelectedNode"
QT_MOC_LITERAL(70, 948, 7), // "bantime"
QT_MOC_LITERAL(71, 956, 17), // "unbanSelectedNode"
QT_MOC_LITERAL(72, 974, 11), // "setTabFocus"
QT_MOC_LITERAL(73, 986, 8), // "TabTypes"
QT_MOC_LITERAL(74, 995, 7) // "tabType"

    },
    "RPCConsole\0stopExecutor\0\0cmdRequest\0"
    "command\0handleRestart\0args\0showPage\0"
    "index\0on_lineEdit_returnPressed\0"
    "on_stackedWidgetRPC_currentChanged\0"
    "on_openDebugLogfileButton_clicked\0"
    "on_sldGraphRange_valueChanged\0value\0"
    "resizeEvent\0QResizeEvent*\0event\0"
    "showEvent\0QShowEvent*\0hideEvent\0"
    "QHideEvent*\0changeEvent\0QEvent*\0e\0"
    "showPeersTableContextMenu\0point\0"
    "showBanTableContextMenu\0"
    "showOrHideBanTableIfRequired\0"
    "clearSelectedNode\0clear\0clearHistory\0"
    "fontBigger\0fontSmaller\0setFontSize\0"
    "newSize\0walletSalvage\0walletRescan\0"
    "walletZaptxes1\0walletZaptxes2\0"
    "walletUpgrade\0walletReindex\0message\0"
    "category\0html\0setNumConnections\0count\0"
    "setNetworkActive\0networkActive\0"
    "updateMasternodeCount\0setNumBlocks\0"
    "blockDate\0blockHash\0nVerificationProgress\0"
    "headers\0setMempoolSize\0numberOfTxs\0"
    "size_t\0dynUsage\0setInstantSendLockCount\0"
    "browseHistory\0offset\0scrollToEnd\0"
    "peerSelected\0QItemSelection\0selected\0"
    "deselected\0peerLayoutAboutToChange\0"
    "peerLayoutChanged\0disconnectSelectedNode\0"
    "banSelectedNode\0bantime\0unbanSelectedNode\0"
    "setTabFocus\0TabTypes\0tabType"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RPCConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  234,    2, 0x06 /* Public */,
       3,    1,  235,    2, 0x06 /* Public */,
       5,    1,  238,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  241,    2, 0x08 /* Private */,
       9,    0,  244,    2, 0x08 /* Private */,
      10,    1,  245,    2, 0x08 /* Private */,
      11,    0,  248,    2, 0x08 /* Private */,
      12,    1,  249,    2, 0x08 /* Private */,
      14,    1,  252,    2, 0x08 /* Private */,
      17,    1,  255,    2, 0x08 /* Private */,
      19,    1,  258,    2, 0x08 /* Private */,
      21,    1,  261,    2, 0x08 /* Private */,
      24,    1,  264,    2, 0x08 /* Private */,
      26,    1,  267,    2, 0x08 /* Private */,
      27,    0,  270,    2, 0x08 /* Private */,
      28,    0,  271,    2, 0x08 /* Private */,
      29,    1,  272,    2, 0x0a /* Public */,
      29,    0,  275,    2, 0x2a /* Public | MethodCloned */,
      31,    0,  276,    2, 0x0a /* Public */,
      32,    0,  277,    2, 0x0a /* Public */,
      33,    1,  278,    2, 0x0a /* Public */,
      35,    0,  281,    2, 0x0a /* Public */,
      36,    0,  282,    2, 0x0a /* Public */,
      37,    0,  283,    2, 0x0a /* Public */,
      38,    0,  284,    2, 0x0a /* Public */,
      39,    0,  285,    2, 0x0a /* Public */,
      40,    0,  286,    2, 0x0a /* Public */,
      41,    3,  287,    2, 0x0a /* Public */,
      41,    2,  294,    2, 0x2a /* Public | MethodCloned */,
      44,    1,  299,    2, 0x0a /* Public */,
      46,    1,  302,    2, 0x0a /* Public */,
      48,    0,  305,    2, 0x0a /* Public */,
      49,    5,  306,    2, 0x0a /* Public */,
      54,    2,  317,    2, 0x0a /* Public */,
      58,    1,  322,    2, 0x0a /* Public */,
      59,    1,  325,    2, 0x0a /* Public */,
      61,    0,  328,    2, 0x0a /* Public */,
      62,    2,  329,    2, 0x0a /* Public */,
      66,    0,  334,    2, 0x0a /* Public */,
      67,    0,  335,    2, 0x0a /* Public */,
      68,    0,  336,    2, 0x0a /* Public */,
      69,    1,  337,    2, 0x0a /* Public */,
      71,    0,  340,    2, 0x0a /* Public */,
      72,    1,  341,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QStringList,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   16,
    QMetaType::Void, 0x80000000 | 20,   16,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, QMetaType::QPoint,   25,
    QMetaType::Void, QMetaType::QPoint,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,   42,   41,   43,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   42,   41,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QDateTime, QMetaType::QString, QMetaType::Double, QMetaType::Bool,   45,   50,   51,   52,   53,
    QMetaType::Void, QMetaType::Long, 0x80000000 | 56,   55,   57,
    QMetaType::Void, 0x80000000 | 56,   45,
    QMetaType::Void, QMetaType::Int,   60,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 63, 0x80000000 | 63,   64,   65,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   70,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 73,   74,

       0        // eod
};

void RPCConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RPCConsole *_t = static_cast<RPCConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopExecutor(); break;
        case 1: _t->cmdRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->handleRestart((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->showPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_lineEdit_returnPressed(); break;
        case 5: _t->on_stackedWidgetRPC_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_openDebugLogfileButton_clicked(); break;
        case 7: _t->on_sldGraphRange_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 9: _t->showEvent((*reinterpret_cast< QShowEvent*(*)>(_a[1]))); break;
        case 10: _t->hideEvent((*reinterpret_cast< QHideEvent*(*)>(_a[1]))); break;
        case 11: _t->changeEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 12: _t->showPeersTableContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 13: _t->showBanTableContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 14: _t->showOrHideBanTableIfRequired(); break;
        case 15: _t->clearSelectedNode(); break;
        case 16: _t->clear((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->clear(); break;
        case 18: _t->fontBigger(); break;
        case 19: _t->fontSmaller(); break;
        case 20: _t->setFontSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->walletSalvage(); break;
        case 22: _t->walletRescan(); break;
        case 23: _t->walletZaptxes1(); break;
        case 24: _t->walletZaptxes2(); break;
        case 25: _t->walletUpgrade(); break;
        case 26: _t->walletReindex(); break;
        case 27: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 28: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 29: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->setNetworkActive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->updateMasternodeCount(); break;
        case 32: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QDateTime(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 33: _t->setMempoolSize((*reinterpret_cast< long(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        case 34: _t->setInstantSendLockCount((*reinterpret_cast< size_t(*)>(_a[1]))); break;
        case 35: _t->browseHistory((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->scrollToEnd(); break;
        case 37: _t->peerSelected((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 38: _t->peerLayoutAboutToChange(); break;
        case 39: _t->peerLayoutChanged(); break;
        case 40: _t->disconnectSelectedNode(); break;
        case 41: _t->banSelectedNode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->unbanSelectedNode(); break;
        case 43: _t->setTabFocus((*reinterpret_cast< TabTypes(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RPCConsole::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole::stopExecutor)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RPCConsole::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole::cmdRequest)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (RPCConsole::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RPCConsole::handleRestart)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject RPCConsole::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RPCConsole.data,
      qt_meta_data_RPCConsole,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RPCConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RPCConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RPCConsole.stringdata0))
        return static_cast<void*>(const_cast< RPCConsole*>(this));
    return QWidget::qt_metacast(_clname);
}

int RPCConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    return _id;
}

// SIGNAL 0
void RPCConsole::stopExecutor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void RPCConsole::cmdRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RPCConsole::handleRestart(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
