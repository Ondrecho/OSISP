/****************************************************************************
** Meta object code from reading C++ file 'serverthread.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/RemoteControlServer/serverthread.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serverthread.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ServerThread_t {
    uint offsetsAndSizes[26];
    char stringdata0[13];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[21];
    char stringdata5[2];
    char stringdata6[6];
    char stringdata7[3];
    char stringdata8[16];
    char stringdata9[26];
    char stringdata10[15];
    char stringdata11[26];
    char stringdata12[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ServerThread_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ServerThread_t qt_meta_stringdata_ServerThread = {
    {
        QT_MOC_LITERAL(0, 12),  // "ServerThread"
        QT_MOC_LITERAL(13, 18),  // "updateCursorSignal"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 11),  // "cursor_type"
        QT_MOC_LITERAL(45, 20),  // "sendClientInfoSignal"
        QT_MOC_LITERAL(66, 1),  // "s"
        QT_MOC_LITERAL(68, 5),  // "char*"
        QT_MOC_LITERAL(74, 2),  // "ip"
        QT_MOC_LITERAL(77, 15),  // "signalToTurnOff"
        QT_MOC_LITERAL(93, 25),  // "timeIsOverToConnectSignal"
        QT_MOC_LITERAL(119, 14),  // "sendScreenshot"
        QT_MOC_LITERAL(134, 25),  // "receivePasswordFromUISlot"
        QT_MOC_LITERAL(160, 11)   // "const char*"
    },
    "ServerThread",
    "updateCursorSignal",
    "",
    "cursor_type",
    "sendClientInfoSignal",
    "s",
    "char*",
    "ip",
    "signalToTurnOff",
    "timeIsOverToConnectSignal",
    "sendScreenshot",
    "receivePasswordFromUISlot",
    "const char*"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ServerThread[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       4,    2,   53,    2, 0x06,    3 /* Public */,
       8,    0,   58,    2, 0x06,    6 /* Public */,
       9,    0,   59,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   60,    2, 0x0a,    8 /* Public */,
      11,    1,   61,    2, 0x0a,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject ServerThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_ServerThread.offsetsAndSizes,
    qt_meta_data_ServerThread,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ServerThread_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ServerThread, std::true_type>,
        // method 'updateCursorSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sendClientInfoSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<char *, std::false_type>,
        // method 'signalToTurnOff'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timeIsOverToConnectSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendScreenshot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'receivePasswordFromUISlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>
    >,
    nullptr
} };

void ServerThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ServerThread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateCursorSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->sendClientInfoSignal((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<char*>>(_a[2]))); break;
        case 2: _t->signalToTurnOff(); break;
        case 3: _t->timeIsOverToConnectSignal(); break;
        case 4: _t->sendScreenshot(); break;
        case 5: _t->receivePasswordFromUISlot((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ServerThread::*)(int );
            if (_t _q_method = &ServerThread::updateCursorSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ServerThread::*)(QString , char * );
            if (_t _q_method = &ServerThread::sendClientInfoSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ServerThread::*)();
            if (_t _q_method = &ServerThread::signalToTurnOff; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ServerThread::*)();
            if (_t _q_method = &ServerThread::timeIsOverToConnectSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *ServerThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ServerThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ServerThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int ServerThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ServerThread::updateCursorSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ServerThread::sendClientInfoSignal(QString _t1, char * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ServerThread::signalToTurnOff()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ServerThread::timeIsOverToConnectSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
