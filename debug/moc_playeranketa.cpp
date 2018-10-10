/****************************************************************************
** Meta object code from reading C++ file 'playeranketa.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../playeranketa.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playeranketa.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PlayerAnketa_t {
    QByteArrayData data[19];
    char stringdata0[421];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayerAnketa_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayerAnketa_t qt_meta_stringdata_PlayerAnketa = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PlayerAnketa"
QT_MOC_LITERAL(1, 13, 6), // "loadDB"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 13), // "pop_upChar_cs"
QT_MOC_LITERAL(4, 35, 35), // "on_RaceComboBox_currentIndexC..."
QT_MOC_LITERAL(5, 71, 5), // "index"
QT_MOC_LITERAL(6, 77, 38), // "on_ClassesComboBox_currentInd..."
QT_MOC_LITERAL(7, 116, 19), // "Result_label_update"
QT_MOC_LITERAL(8, 136, 27), // "on_Str_spinBox_valueChanged"
QT_MOC_LITERAL(9, 164, 4), // "arg1"
QT_MOC_LITERAL(10, 169, 27), // "on_Cha_spinBox_valueChanged"
QT_MOC_LITERAL(11, 197, 27), // "on_Dex_spinBox_valueChanged"
QT_MOC_LITERAL(12, 225, 27), // "on_Con_spinBox_valueChanged"
QT_MOC_LITERAL(13, 253, 27), // "on_Int_spinBox_valueChanged"
QT_MOC_LITERAL(14, 281, 27), // "on_Wis_spinBox_valueChanged"
QT_MOC_LITERAL(15, 309, 31), // "on_pushButton_saveAnket_clicked"
QT_MOC_LITERAL(16, 341, 25), // "on_ExitPushButton_clicked"
QT_MOC_LITERAL(17, 367, 27), // "on_CreatepushButton_clicked"
QT_MOC_LITERAL(18, 395, 25) // "on_LoadpushButton_clicked"

    },
    "PlayerAnketa\0loadDB\0\0pop_upChar_cs\0"
    "on_RaceComboBox_currentIndexChanged\0"
    "index\0on_ClassesComboBox_currentIndexChanged\0"
    "Result_label_update\0on_Str_spinBox_valueChanged\0"
    "arg1\0on_Cha_spinBox_valueChanged\0"
    "on_Dex_spinBox_valueChanged\0"
    "on_Con_spinBox_valueChanged\0"
    "on_Int_spinBox_valueChanged\0"
    "on_Wis_spinBox_valueChanged\0"
    "on_pushButton_saveAnket_clicked\0"
    "on_ExitPushButton_clicked\0"
    "on_CreatepushButton_clicked\0"
    "on_LoadpushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayerAnketa[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    1,   91,    2, 0x08 /* Private */,
       6,    1,   94,    2, 0x08 /* Private */,
       7,    0,   97,    2, 0x08 /* Private */,
       8,    1,   98,    2, 0x08 /* Private */,
      10,    1,  101,    2, 0x08 /* Private */,
      11,    1,  104,    2, 0x08 /* Private */,
      12,    1,  107,    2, 0x08 /* Private */,
      13,    1,  110,    2, 0x08 /* Private */,
      14,    1,  113,    2, 0x08 /* Private */,
      15,    0,  116,    2, 0x08 /* Private */,
      16,    0,  117,    2, 0x08 /* Private */,
      17,    0,  118,    2, 0x08 /* Private */,
      18,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlayerAnketa::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayerAnketa *_t = static_cast<PlayerAnketa *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadDB(); break;
        case 1: _t->pop_upChar_cs(); break;
        case 2: _t->on_RaceComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_ClassesComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->Result_label_update(); break;
        case 5: _t->on_Str_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_Cha_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_Dex_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_Con_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_Int_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_Wis_spinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_pushButton_saveAnket_clicked(); break;
        case 12: _t->on_ExitPushButton_clicked(); break;
        case 13: _t->on_CreatepushButton_clicked(); break;
        case 14: _t->on_LoadpushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject PlayerAnketa::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PlayerAnketa.data,
      qt_meta_data_PlayerAnketa,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlayerAnketa::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerAnketa::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerAnketa.stringdata0))
        return static_cast<void*>(const_cast< PlayerAnketa*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PlayerAnketa::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
