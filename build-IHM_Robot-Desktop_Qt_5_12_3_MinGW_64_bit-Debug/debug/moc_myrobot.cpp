/****************************************************************************
** Meta object code from reading C++ file 'myrobot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../IHM_Robot/myrobot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myrobot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyRobot_t {
    QByteArrayData data[15];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyRobot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyRobot_t qt_meta_stringdata_MyRobot = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MyRobot"
QT_MOC_LITERAL(1, 8, 8), // "updateUI"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 5), // "Data*"
QT_MOC_LITERAL(4, 24, 4), // "data"
QT_MOC_LITERAL(5, 29, 9), // "connected"
QT_MOC_LITERAL(6, 39, 12), // "disconnected"
QT_MOC_LITERAL(7, 52, 12), // "bytesWritten"
QT_MOC_LITERAL(8, 65, 5), // "bytes"
QT_MOC_LITERAL(9, 71, 9), // "readyRead"
QT_MOC_LITERAL(10, 81, 11), // "MyTimerSlot"
QT_MOC_LITERAL(11, 93, 5), // "Crc16"
QT_MOC_LITERAL(12, 99, 11), // "QByteArray*"
QT_MOC_LITERAL(13, 111, 11), // "Adresse_tab"
QT_MOC_LITERAL(14, 123, 9) // "tailleMax"

    },
    "MyRobot\0updateUI\0\0Data*\0data\0connected\0"
    "disconnected\0bytesWritten\0bytes\0"
    "readyRead\0MyTimerSlot\0Crc16\0QByteArray*\0"
    "Adresse_tab\0tailleMax"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyRobot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    1,   54,    2, 0x0a /* Public */,
       9,    0,   57,    2, 0x0a /* Public */,
      10,    0,   58,    2, 0x0a /* Public */,
      11,    2,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Short, 0x80000000 | 12, QMetaType::UChar,   13,   14,

       0        // eod
};

void MyRobot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MyRobot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateUI((*reinterpret_cast< Data*(*)>(_a[1]))); break;
        case 1: _t->connected(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->readyRead(); break;
        case 5: _t->MyTimerSlot(); break;
        case 6: { short _r = _t->Crc16((*reinterpret_cast< QByteArray*(*)>(_a[1])),(*reinterpret_cast< unsigned char(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< short*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MyRobot::*)(Data * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MyRobot::updateUI)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MyRobot::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_MyRobot.data,
    qt_meta_data_MyRobot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MyRobot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyRobot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyRobot.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyRobot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void MyRobot::updateUI(Data * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
