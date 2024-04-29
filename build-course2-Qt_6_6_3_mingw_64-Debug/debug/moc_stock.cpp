/****************************************************************************
** Meta object code from reading C++ file 'stock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../course2/stock.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stock.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
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
struct qt_meta_stringdata_CLASSstockENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSstockENDCLASS = QtMocHelpers::stringData(
    "stock",
    "dbconnect",
    "",
    "selectAll",
    "add",
    "remove",
    "del",
    "edit",
    "on_twOrg_itemSelectionChanged",
    "back"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSstockENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[6];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[4];
    char stringdata5[7];
    char stringdata6[4];
    char stringdata7[5];
    char stringdata8[30];
    char stringdata9[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSstockENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSstockENDCLASS_t qt_meta_stringdata_CLASSstockENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "stock"
        QT_MOC_LITERAL(6, 9),  // "dbconnect"
        QT_MOC_LITERAL(16, 0),  // ""
        QT_MOC_LITERAL(17, 9),  // "selectAll"
        QT_MOC_LITERAL(27, 3),  // "add"
        QT_MOC_LITERAL(31, 6),  // "remove"
        QT_MOC_LITERAL(38, 3),  // "del"
        QT_MOC_LITERAL(42, 4),  // "edit"
        QT_MOC_LITERAL(47, 29),  // "on_twOrg_itemSelectionChanged"
        QT_MOC_LITERAL(77, 4)   // "back"
    },
    "stock",
    "dbconnect",
    "",
    "selectAll",
    "add",
    "remove",
    "del",
    "edit",
    "on_twOrg_itemSelectionChanged",
    "back"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSstockENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject stock::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSstockENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSstockENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSstockENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<stock, std::true_type>,
        // method 'dbconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'add'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'remove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'del'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'edit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_twOrg_itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'back'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void stock::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<stock *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dbconnect(); break;
        case 1: _t->selectAll(); break;
        case 2: _t->add(); break;
        case 3: _t->remove(); break;
        case 4: _t->del(); break;
        case 5: _t->edit(); break;
        case 6: _t->on_twOrg_itemSelectionChanged(); break;
        case 7: _t->back(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *stock::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *stock::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSstockENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int stock::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
