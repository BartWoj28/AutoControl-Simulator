/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_startButton_clicked",
    "",
    "on_stopButton_clicked",
    "on_resetButton_clicked",
    "on_wznowButton_clicked",
    "on_signalTypeComboBox_currentIndexChanged",
    "index",
    "aktualizujSymulacje",
    "on_spinBoxK_editingFinished",
    "on_spinBoxTi_editingFinished",
    "on_spinBoxTd_editingFinished",
    "on_spinBoxAmplituda_editingFinished",
    "on_spinBoxOkres_editingFinished",
    "on_spinBoxWypelnienie_editingFinished",
    "on_spinBoxInterwal_editingFinished",
    "saveConfiguration",
    "loadConfiguration",
    "on_pushButtonARX_clicked",
    "on_pushButtonResetCalka_clicked",
    "on_comboBoxSposobCalkowania_currentIndexChanged",
    "on_btnRozlacz_clicked",
    "on_btnPolaczenie_clicked",
    "slot_clientConnected",
    "adr",
    "slot_clientDisconnected",
    "slot_connected",
    "port",
    "slot_disconnected"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[58];
    char stringdata0[11];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[23];
    char stringdata5[23];
    char stringdata6[42];
    char stringdata7[6];
    char stringdata8[20];
    char stringdata9[28];
    char stringdata10[29];
    char stringdata11[29];
    char stringdata12[36];
    char stringdata13[32];
    char stringdata14[38];
    char stringdata15[35];
    char stringdata16[18];
    char stringdata17[18];
    char stringdata18[25];
    char stringdata19[32];
    char stringdata20[48];
    char stringdata21[22];
    char stringdata22[25];
    char stringdata23[21];
    char stringdata24[4];
    char stringdata25[24];
    char stringdata26[15];
    char stringdata27[5];
    char stringdata28[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 22),  // "on_startButton_clicked"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 21),  // "on_stopButton_clicked"
        QT_MOC_LITERAL(57, 22),  // "on_resetButton_clicked"
        QT_MOC_LITERAL(80, 22),  // "on_wznowButton_clicked"
        QT_MOC_LITERAL(103, 41),  // "on_signalTypeComboBox_current..."
        QT_MOC_LITERAL(145, 5),  // "index"
        QT_MOC_LITERAL(151, 19),  // "aktualizujSymulacje"
        QT_MOC_LITERAL(171, 27),  // "on_spinBoxK_editingFinished"
        QT_MOC_LITERAL(199, 28),  // "on_spinBoxTi_editingFinished"
        QT_MOC_LITERAL(228, 28),  // "on_spinBoxTd_editingFinished"
        QT_MOC_LITERAL(257, 35),  // "on_spinBoxAmplituda_editingFi..."
        QT_MOC_LITERAL(293, 31),  // "on_spinBoxOkres_editingFinished"
        QT_MOC_LITERAL(325, 37),  // "on_spinBoxWypelnienie_editing..."
        QT_MOC_LITERAL(363, 34),  // "on_spinBoxInterwal_editingFin..."
        QT_MOC_LITERAL(398, 17),  // "saveConfiguration"
        QT_MOC_LITERAL(416, 17),  // "loadConfiguration"
        QT_MOC_LITERAL(434, 24),  // "on_pushButtonARX_clicked"
        QT_MOC_LITERAL(459, 31),  // "on_pushButtonResetCalka_clicked"
        QT_MOC_LITERAL(491, 47),  // "on_comboBoxSposobCalkowania_c..."
        QT_MOC_LITERAL(539, 21),  // "on_btnRozlacz_clicked"
        QT_MOC_LITERAL(561, 24),  // "on_btnPolaczenie_clicked"
        QT_MOC_LITERAL(586, 20),  // "slot_clientConnected"
        QT_MOC_LITERAL(607, 3),  // "adr"
        QT_MOC_LITERAL(611, 23),  // "slot_clientDisconnected"
        QT_MOC_LITERAL(635, 14),  // "slot_connected"
        QT_MOC_LITERAL(650, 4),  // "port"
        QT_MOC_LITERAL(655, 17)   // "slot_disconnected"
    },
    "MainWindow",
    "on_startButton_clicked",
    "",
    "on_stopButton_clicked",
    "on_resetButton_clicked",
    "on_wznowButton_clicked",
    "on_signalTypeComboBox_currentIndexChanged",
    "index",
    "aktualizujSymulacje",
    "on_spinBoxK_editingFinished",
    "on_spinBoxTi_editingFinished",
    "on_spinBoxTd_editingFinished",
    "on_spinBoxAmplituda_editingFinished",
    "on_spinBoxOkres_editingFinished",
    "on_spinBoxWypelnienie_editingFinished",
    "on_spinBoxInterwal_editingFinished",
    "saveConfiguration",
    "loadConfiguration",
    "on_pushButtonARX_clicked",
    "on_pushButtonResetCalka_clicked",
    "on_comboBoxSposobCalkowania_currentIndexChanged",
    "on_btnRozlacz_clicked",
    "on_btnPolaczenie_clicked",
    "slot_clientConnected",
    "adr",
    "slot_clientDisconnected",
    "slot_connected",
    "port",
    "slot_disconnected"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  158,    2, 0x08,    1 /* Private */,
       3,    0,  159,    2, 0x08,    2 /* Private */,
       4,    0,  160,    2, 0x08,    3 /* Private */,
       5,    0,  161,    2, 0x08,    4 /* Private */,
       6,    1,  162,    2, 0x08,    5 /* Private */,
       8,    0,  165,    2, 0x08,    7 /* Private */,
       9,    0,  166,    2, 0x08,    8 /* Private */,
      10,    0,  167,    2, 0x08,    9 /* Private */,
      11,    0,  168,    2, 0x08,   10 /* Private */,
      12,    0,  169,    2, 0x08,   11 /* Private */,
      13,    0,  170,    2, 0x08,   12 /* Private */,
      14,    0,  171,    2, 0x08,   13 /* Private */,
      15,    0,  172,    2, 0x08,   14 /* Private */,
      16,    0,  173,    2, 0x08,   15 /* Private */,
      17,    0,  174,    2, 0x08,   16 /* Private */,
      18,    0,  175,    2, 0x08,   17 /* Private */,
      19,    0,  176,    2, 0x08,   18 /* Private */,
      20,    1,  177,    2, 0x08,   19 /* Private */,
      21,    0,  180,    2, 0x08,   21 /* Private */,
      22,    0,  181,    2, 0x08,   22 /* Private */,
      23,    1,  182,    2, 0x08,   23 /* Private */,
      25,    0,  185,    2, 0x08,   25 /* Private */,
      26,    2,  186,    2, 0x08,   26 /* Private */,
      28,    0,  191,    2, 0x08,   29 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
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
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   24,   27,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_startButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stopButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_resetButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_wznowButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_signalTypeComboBox_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'aktualizujSymulacje'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_spinBoxK_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_spinBoxTi_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_spinBoxTd_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_spinBoxAmplituda_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_spinBoxOkres_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_spinBoxWypelnienie_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_spinBoxInterwal_editingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveConfiguration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadConfiguration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonARX_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonResetCalka_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_comboBoxSposobCalkowania_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btnRozlacz_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnPolaczenie_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_clientConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'slot_clientDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slot_disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_startButton_clicked(); break;
        case 1: _t->on_stopButton_clicked(); break;
        case 2: _t->on_resetButton_clicked(); break;
        case 3: _t->on_wznowButton_clicked(); break;
        case 4: _t->on_signalTypeComboBox_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->aktualizujSymulacje(); break;
        case 6: _t->on_spinBoxK_editingFinished(); break;
        case 7: _t->on_spinBoxTi_editingFinished(); break;
        case 8: _t->on_spinBoxTd_editingFinished(); break;
        case 9: _t->on_spinBoxAmplituda_editingFinished(); break;
        case 10: _t->on_spinBoxOkres_editingFinished(); break;
        case 11: _t->on_spinBoxWypelnienie_editingFinished(); break;
        case 12: _t->on_spinBoxInterwal_editingFinished(); break;
        case 13: _t->saveConfiguration(); break;
        case 14: _t->loadConfiguration(); break;
        case 15: _t->on_pushButtonARX_clicked(); break;
        case 16: _t->on_pushButtonResetCalka_clicked(); break;
        case 17: _t->on_comboBoxSposobCalkowania_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_btnRozlacz_clicked(); break;
        case 19: _t->on_btnPolaczenie_clicked(); break;
        case 20: _t->slot_clientConnected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->slot_clientDisconnected(); break;
        case 22: _t->slot_connected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 23: _t->slot_disconnected(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 24;
    }
    return _id;
}
QT_WARNING_POP
