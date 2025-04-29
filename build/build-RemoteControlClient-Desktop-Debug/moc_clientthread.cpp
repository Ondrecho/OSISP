/****************************************************************************
** Meta object code from reading C++ file 'clientthread.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/RemoteControlClient/clientthread.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientthread.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ClientThread_t {
    uint offsetsAndSizes[32];
    char stringdata0[13];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[25];
    char stringdata5[7];
    char stringdata6[19];
    char stringdata7[20];
    char stringdata8[26];
    char stringdata9[15];
    char stringdata10[5];
    char stringdata11[28];
    char stringdata12[10];
    char stringdata13[26];
    char stringdata14[11];
    char stringdata15[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ClientThread_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ClientThread_t qt_meta_stringdata_ClientThread = {
    {
        QT_MOC_LITERAL(0, 12),  // "ClientThread"
        QT_MOC_LITERAL(13, 15),  // "screenshotReady"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 10),  // "screenshot"
        QT_MOC_LITERAL(41, 24),  // "showPasswordStatusSignal"
        QT_MOC_LITERAL(66, 6),  // "status"
        QT_MOC_LITERAL(73, 18),  // "signalToDisconnect"
        QT_MOC_LITERAL(92, 19),  // "connectFailedSignal"
        QT_MOC_LITERAL(112, 25),  // "receiveSettingsFromUISlot"
        QT_MOC_LITERAL(138, 14),  // "DataConnection"
        QT_MOC_LITERAL(153, 4),  // "data"
        QT_MOC_LITERAL(158, 27),  // "getMouseEventFromWindowSlot"
        QT_MOC_LITERAL(186, 9),  // "event_pos"
        QT_MOC_LITERAL(196, 25),  // "getKeyEventFromWindowSlot"
        QT_MOC_LITERAL(222, 10),  // "is_pressed"
        QT_MOC_LITERAL(233, 8)   // "key_code"
    },
    "ClientThread",
    "screenshotReady",
    "",
    "screenshot",
    "showPasswordStatusSignal",
    "status",
    "signalToDisconnect",
    "connectFailedSignal",
    "receiveSettingsFromUISlot",
    "DataConnection",
    "data",
    "getMouseEventFromWindowSlot",
    "event_pos",
    "getKeyEventFromWindowSlot",
    "is_pressed",
    "key_code"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ClientThread[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       4,    1,   59,    2, 0x06,    3 /* Public */,
       6,    0,   62,    2, 0x06,    5 /* Public */,
       7,    0,   63,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   64,    2, 0x0a,    7 /* Public */,
      11,    1,   67,    2, 0x0a,    9 /* Public */,
      13,    2,   70,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject ClientThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_ClientThread.offsetsAndSizes,
    qt_meta_data_ClientThread,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ClientThread_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClientThread, std::true_type>,
        // method 'screenshotReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        // method 'showPasswordStatusSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'signalToDisconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectFailedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receiveSettingsFromUISlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DataConnection, std::false_type>,
        // method 'getMouseEventFromWindowSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getKeyEventFromWindowSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void ClientThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->screenshotReady((*reinterpret_cast< std::add_pointer_t<QImage>>(_a[1]))); break;
        case 1: _t->showPasswordStatusSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->signalToDisconnect(); break;
        case 3: _t->connectFailedSignal(); break;
        case 4: _t->receiveSettingsFromUISlot((*reinterpret_cast< std::add_pointer_t<DataConnection>>(_a[1]))); break;
        case 5: _t->getMouseEventFromWindowSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->getKeyEventFromWindowSlot((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientThread::*)(QImage );
            if (_t _q_method = &ClientThread::screenshotReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientThread::*)(int );
            if (_t _q_method = &ClientThread::showPasswordStatusSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ClientThread::*)();
            if (_t _q_method = &ClientThread::signalToDisconnect; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientThread::*)();
            if (_t _q_method = &ClientThread::connectFailedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *ClientThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ClientThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ClientThread::screenshotReady(QImage _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ClientThread::showPasswordStatusSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ClientThread::signalToDisconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ClientThread::connectFailedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
