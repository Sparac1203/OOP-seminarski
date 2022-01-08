/****************************************************************************
** Meta object code from reading C++ file 'gameplay.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Krizic-Kruzic/gameplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GamePlay_t {
    const uint offsetsAndSize[36];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_GamePlay_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_GamePlay_t qt_meta_stringdata_GamePlay = {
    {
QT_MOC_LITERAL(0, 8), // "GamePlay"
QT_MOC_LITERAL(9, 29), // "on_pushButton_NewGame_clicked"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 23), // "on_pushButton_1_clicked"
QT_MOC_LITERAL(64, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(88, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(112, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(136, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(160, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(184, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(208, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(232, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(256, 6), // "Stanje"
QT_MOC_LITERAL(263, 6), // "brojac"
QT_MOC_LITERAL(270, 8), // "provjera"
QT_MOC_LITERAL(279, 16), // "Provjera_Pobjede"
QT_MOC_LITERAL(296, 10), // "char[3][3]"
QT_MOC_LITERAL(307, 2) // "xo"

    },
    "GamePlay\0on_pushButton_NewGame_clicked\0"
    "\0on_pushButton_1_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked\0"
    "on_pushButton_6_clicked\0on_pushButton_7_clicked\0"
    "on_pushButton_8_clicked\0on_pushButton_9_clicked\0"
    "Stanje\0brojac\0provjera\0Provjera_Pobjede\0"
    "char[3][3]\0xo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GamePlay[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x08,    1 /* Private */,
       3,    0,   87,    2, 0x08,    2 /* Private */,
       4,    0,   88,    2, 0x08,    3 /* Private */,
       5,    0,   89,    2, 0x08,    4 /* Private */,
       6,    0,   90,    2, 0x08,    5 /* Private */,
       7,    0,   91,    2, 0x08,    6 /* Private */,
       8,    0,   92,    2, 0x08,    7 /* Private */,
       9,    0,   93,    2, 0x08,    8 /* Private */,
      10,    0,   94,    2, 0x08,    9 /* Private */,
      11,    0,   95,    2, 0x08,   10 /* Private */,
      12,    2,   96,    2, 0x08,   11 /* Private */,
      15,    1,  101,    2, 0x08,   14 /* Private */,

 // slots: parameters
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
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,
    QMetaType::Int, 0x80000000 | 16,   17,

       0        // eod
};

void GamePlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GamePlay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pushButton_NewGame_clicked(); break;
        case 1: _t->on_pushButton_1_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->on_pushButton_5_clicked(); break;
        case 6: _t->on_pushButton_6_clicked(); break;
        case 7: _t->on_pushButton_7_clicked(); break;
        case 8: _t->on_pushButton_8_clicked(); break;
        case 9: _t->on_pushButton_9_clicked(); break;
        case 10: _t->Stanje((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: { int _r = _t->Provjera_Pobjede((*reinterpret_cast< char(*)[3][3]>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject GamePlay::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_GamePlay.offsetsAndSize,
    qt_meta_data_GamePlay,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_GamePlay_t
, QtPrivate::TypeAndForceComplete<GamePlay, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<char, std::false_type>


>,
    nullptr
} };


const QMetaObject *GamePlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GamePlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GamePlay.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int GamePlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
