/****************************************************************************
** Meta object code from reading C++ file 'MultiSessionLocWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/rtabmap/guilib/include/rtabmap/gui/MultiSessionLocWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiSessionLocWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rtabmap__MultiSessionLocWidget_t {
    QByteArrayData data[8];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__MultiSessionLocWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__MultiSessionLocWidget_t qt_meta_stringdata_rtabmap__MultiSessionLocWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "rtabmap::MultiSessionLocWidget"
QT_MOC_LITERAL(1, 31, 10), // "updateView"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 9), // "Signature"
QT_MOC_LITERAL(4, 53, 13), // "lastSignature"
QT_MOC_LITERAL(5, 67, 10), // "Statistics"
QT_MOC_LITERAL(6, 78, 5), // "stats"
QT_MOC_LITERAL(7, 84, 5) // "clear"

    },
    "rtabmap::MultiSessionLocWidget\0"
    "updateView\0\0Signature\0lastSignature\0"
    "Statistics\0stats\0clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__MultiSessionLocWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       7,    0,   29,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void,

       0        // eod
};

void rtabmap::MultiSessionLocWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MultiSessionLocWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateView((*reinterpret_cast< const Signature(*)>(_a[1])),(*reinterpret_cast< const Statistics(*)>(_a[2]))); break;
        case 1: _t->clear(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rtabmap::MultiSessionLocWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_rtabmap__MultiSessionLocWidget.data,
    qt_meta_data_rtabmap__MultiSessionLocWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rtabmap::MultiSessionLocWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::MultiSessionLocWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__MultiSessionLocWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int rtabmap::MultiSessionLocWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
