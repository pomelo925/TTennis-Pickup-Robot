/****************************************************************************
** Meta object code from reading C++ file 'MultiSessionLocSubView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/rtabmap/guilib/include/rtabmap/gui/MultiSessionLocSubView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MultiSessionLocSubView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rtabmap__MultiSessionLocSubView_t {
    QByteArrayData data[10];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__MultiSessionLocSubView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__MultiSessionLocSubView_t qt_meta_stringdata_rtabmap__MultiSessionLocSubView = {
    {
QT_MOC_LITERAL(0, 0, 31), // "rtabmap::MultiSessionLocSubView"
QT_MOC_LITERAL(1, 32, 10), // "updateView"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 6), // "nodeId"
QT_MOC_LITERAL(4, 51, 5), // "image"
QT_MOC_LITERAL(5, 57, 31), // "std::multimap<int,cv::KeyPoint>"
QT_MOC_LITERAL(6, 89, 8), // "features"
QT_MOC_LITERAL(7, 98, 8), // "locRatio"
QT_MOC_LITERAL(8, 107, 7), // "bgColor"
QT_MOC_LITERAL(9, 115, 5) // "clear"

    },
    "rtabmap::MultiSessionLocSubView\0"
    "updateView\0\0nodeId\0image\0"
    "std::multimap<int,cv::KeyPoint>\0"
    "features\0locRatio\0bgColor\0clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__MultiSessionLocSubView[] = {

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
       1,    5,   24,    2, 0x0a /* Public */,
       9,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QImage, 0x80000000 | 5, QMetaType::Float, QMetaType::QColor,    3,    4,    6,    7,    8,
    QMetaType::Void,

       0        // eod
};

void rtabmap::MultiSessionLocSubView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MultiSessionLocSubView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateView((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const std::multimap<int,cv::KeyPoint>(*)>(_a[3])),(*reinterpret_cast< float(*)>(_a[4])),(*reinterpret_cast< const QColor(*)>(_a[5]))); break;
        case 1: _t->clear(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rtabmap::MultiSessionLocSubView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_rtabmap__MultiSessionLocSubView.data,
    qt_meta_data_rtabmap__MultiSessionLocSubView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rtabmap::MultiSessionLocSubView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::MultiSessionLocSubView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__MultiSessionLocSubView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int rtabmap::MultiSessionLocSubView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
