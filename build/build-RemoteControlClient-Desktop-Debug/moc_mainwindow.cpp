/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/RemoteControlClient/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[38];
    char stringdata0[11];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[5];
    char stringdata5[31];
    char stringdata6[11];
    char stringdata7[13];
    char stringdata8[11];
    char stringdata9[9];
    char stringdata10[24];
    char stringdata11[28];
    char stringdata12[37];
    char stringdata13[46];
    char stringdata14[17];
    char stringdata15[11];
    char stringdata16[23];
    char stringdata17[7];
    char stringdata18[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 24),  // "sendSettingsFromUISignal"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 14),  // "DataConnection"
        QT_MOC_LITERAL(52, 4),  // "data"
        QT_MOC_LITERAL(57, 30),  // "mouseEventToClientThreadSignal"
        QT_MOC_LITERAL(88, 10),  // "event_flag"
        QT_MOC_LITERAL(99, 12),  // "keyIsPressed"
        QT_MOC_LITERAL(112, 10),  // "is_pressed"
        QT_MOC_LITERAL(123, 8),  // "key_code"
        QT_MOC_LITERAL(132, 23),  // "on_actionExit_triggered"
        QT_MOC_LITERAL(156, 27),  // "on_actionSettings_triggered"
        QT_MOC_LITERAL(184, 36),  // "on_actionConnect_to_server_tr..."
        QT_MOC_LITERAL(221, 45),  // "on_actionDisconnect_from_the_..."
        QT_MOC_LITERAL(267, 16),  // "updateScreenshot"
        QT_MOC_LITERAL(284, 10),  // "screenshot"
        QT_MOC_LITERAL(295, 22),  // "showPasswordStatusSlot"
        QT_MOC_LITERAL(318, 6),  // "status"
        QT_MOC_LITERAL(325, 17)   // "connectFailedSlot"
    },
    "MainWindow",
    "sendSettingsFromUISignal",
    "",
    "DataConnection",
    "data",
    "mouseEventToClientThreadSignal",
    "event_flag",
    "keyIsPressed",
    "is_pressed",
    "key_code",
    "on_actionExit_triggered",
    "on_actionSettings_triggered",
    "on_actionConnect_to_server_triggered",
    "on_actionDisconnect_from_the_server_triggered",
    "updateScreenshot",
    "screenshot",
    "showPasswordStatusSlot",
    "status",
    "connectFailedSlot"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,
       5,    1,   77,    2, 0x06,    3 /* Public */,
       7,    2,   80,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   85,    2, 0x08,    8 /* Private */,
      11,    0,   86,    2, 0x08,    9 /* Private */,
      12,    0,   87,    2, 0x08,   10 /* Private */,
      13,    0,   88,    2, 0x08,   11 /* Private */,
      14,    1,   89,    2, 0x0a,   12 /* Public */,
      16,    1,   92,    2, 0x0a,   14 /* Public */,
      18,    0,   95,    2, 0x0a,   16 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'sendSettingsFromUISignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataConnection, std::false_type>,
        // method 'mouseEventToClientThreadSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'keyIsPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_actionExit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSettings_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionConnect_to_server_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDisconnect_from_the_server_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateScreenshot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        // method 'showPasswordStatusSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'connectFailedSlot'
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
        case 0: _t->sendSettingsFromUISignal((*reinterpret_cast< std::add_pointer_t<DataConnection>>(_a[1]))); break;
        case 1: _t->mouseEventToClientThreadSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->keyIsPressed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->on_actionExit_triggered(); break;
        case 4: _t->on_actionSettings_triggered(); break;
        case 5: _t->on_actionConnect_to_server_triggered(); break;
        case 6: _t->on_actionDisconnect_from_the_server_triggered(); break;
        case 7: _t->updateScreenshot((*reinterpret_cast< std::add_pointer_t<QImage>>(_a[1]))); break;
        case 8: _t->showPasswordStatusSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->connectFailedSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(DataConnection );
            if (_t _q_method = &MainWindow::sendSettingsFromUISignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int );
            if (_t _q_method = &MainWindow::mouseEventToClientThreadSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(int , int );
            if (_t _q_method = &MainWindow::keyIsPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
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
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::sendSettingsFromUISignal(DataConnection _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::mouseEventToClientThreadSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::keyIsPressed(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
