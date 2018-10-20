/****************************************************************************
** Meta object code from reading C++ file 'createavatar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../createavatar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createavatar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CreateAvatar_t {
    QByteArrayData data[10];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CreateAvatar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CreateAvatar_t qt_meta_stringdata_CreateAvatar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CreateAvatar"
QT_MOC_LITERAL(1, 13, 21), // "on_HSlid_valueChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "value"
QT_MOC_LITERAL(4, 42, 22), // "on_HSlid1_valueChanged"
QT_MOC_LITERAL(5, 65, 22), // "on_HSlid3_valueChanged"
QT_MOC_LITERAL(6, 88, 22), // "on_HSlid4_valueChanged"
QT_MOC_LITERAL(7, 111, 6), // "update"
QT_MOC_LITERAL(8, 118, 26), // "on_pushButton_Save_clicked"
QT_MOC_LITERAL(9, 145, 28) // "on_pushButton_Cancel_clicked"

    },
    "CreateAvatar\0on_HSlid_valueChanged\0\0"
    "value\0on_HSlid1_valueChanged\0"
    "on_HSlid3_valueChanged\0on_HSlid4_valueChanged\0"
    "update\0on_pushButton_Save_clicked\0"
    "on_pushButton_Cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CreateAvatar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    1,   52,    2, 0x08 /* Private */,
       5,    1,   55,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CreateAvatar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CreateAvatar *_t = static_cast<CreateAvatar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_HSlid_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_HSlid1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_HSlid3_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_HSlid4_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->update(); break;
        case 5: _t->on_pushButton_Save_clicked(); break;
        case 6: _t->on_pushButton_Cancel_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject CreateAvatar::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CreateAvatar.data,
      qt_meta_data_CreateAvatar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CreateAvatar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CreateAvatar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CreateAvatar.stringdata0))
        return static_cast<void*>(const_cast< CreateAvatar*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CreateAvatar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
