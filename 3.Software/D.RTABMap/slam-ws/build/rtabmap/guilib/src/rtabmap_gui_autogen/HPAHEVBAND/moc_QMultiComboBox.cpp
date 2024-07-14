/****************************************************************************
** Meta object code from reading C++ file 'QMultiComboBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/rtabmap/guilib/src/3rdParty/QMultiComboBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QMultiComboBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMultiComboBox_t {
    QByteArrayData data[10];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMultiComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMultiComboBox_t qt_meta_stringdata_QMultiComboBox = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QMultiComboBox"
QT_MOC_LITERAL(1, 15, 11), // "itemChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "scanItemSelect"
QT_MOC_LITERAL(4, 43, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 60, 4), // "item"
QT_MOC_LITERAL(6, 65, 15), // "initStyleOption"
QT_MOC_LITERAL(7, 81, 21), // "QStyleOptionComboBox*"
QT_MOC_LITERAL(8, 103, 6), // "option"
QT_MOC_LITERAL(9, 110, 5) // "clear"

    },
    "QMultiComboBox\0itemChanged\0\0scanItemSelect\0"
    "QListWidgetItem*\0item\0initStyleOption\0"
    "QStyleOptionComboBox*\0option\0clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMultiComboBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,
       6,    1,   38,    2, 0x0a /* Public */,
       9,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

void QMultiComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QMultiComboBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->itemChanged(); break;
        case 1: _t->scanItemSelect((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->initStyleOption((*reinterpret_cast< QStyleOptionComboBox*(*)>(_a[1]))); break;
        case 3: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QMultiComboBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QMultiComboBox::itemChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QMultiComboBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QComboBox::staticMetaObject>(),
    qt_meta_stringdata_QMultiComboBox.data,
    qt_meta_data_QMultiComboBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QMultiComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMultiComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMultiComboBox.stringdata0))
        return static_cast<void*>(this);
    return QComboBox::qt_metacast(_clname);
}

int QMultiComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QMultiComboBox::itemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
