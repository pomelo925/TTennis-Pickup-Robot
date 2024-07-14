/****************************************************************************
** Meta object code from reading C++ file 'DataRecorder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/rtabmap/guilib/include/rtabmap/gui/DataRecorder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataRecorder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rtabmap__DataRecorder_t {
    QByteArrayData data[12];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__DataRecorder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__DataRecorder_t qt_meta_stringdata_rtabmap__DataRecorder = {
    {
QT_MOC_LITERAL(0, 0, 21), // "rtabmap::DataRecorder"
QT_MOC_LITERAL(1, 22, 7), // "addData"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "rtabmap::SensorData"
QT_MOC_LITERAL(4, 51, 4), // "data"
QT_MOC_LITERAL(5, 56, 9), // "Transform"
QT_MOC_LITERAL(6, 66, 4), // "pose"
QT_MOC_LITERAL(7, 71, 7), // "cv::Mat"
QT_MOC_LITERAL(8, 79, 9), // "infMatrix"
QT_MOC_LITERAL(9, 89, 9), // "showImage"
QT_MOC_LITERAL(10, 99, 5), // "image"
QT_MOC_LITERAL(11, 105, 5) // "depth"

    },
    "rtabmap::DataRecorder\0addData\0\0"
    "rtabmap::SensorData\0data\0Transform\0"
    "pose\0cv::Mat\0infMatrix\0showImage\0image\0"
    "depth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__DataRecorder[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x0a /* Public */,
       1,    2,   41,    2, 0x2a /* Public | MethodCloned */,
       1,    1,   46,    2, 0x2a /* Public | MethodCloned */,
       9,    2,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7,    4,    6,    8,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,   10,   11,

       0        // eod
};

void rtabmap::DataRecorder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataRecorder *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addData((*reinterpret_cast< const rtabmap::SensorData(*)>(_a[1])),(*reinterpret_cast< const Transform(*)>(_a[2])),(*reinterpret_cast< const cv::Mat(*)>(_a[3]))); break;
        case 1: _t->addData((*reinterpret_cast< const rtabmap::SensorData(*)>(_a[1])),(*reinterpret_cast< const Transform(*)>(_a[2]))); break;
        case 2: _t->addData((*reinterpret_cast< const rtabmap::SensorData(*)>(_a[1]))); break;
        case 3: _t->showImage((*reinterpret_cast< const cv::Mat(*)>(_a[1])),(*reinterpret_cast< const cv::Mat(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rtabmap::DataRecorder::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_rtabmap__DataRecorder.data,
    qt_meta_data_rtabmap__DataRecorder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rtabmap::DataRecorder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::DataRecorder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__DataRecorder.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "UEventsHandler"))
        return static_cast< UEventsHandler*>(this);
    return QWidget::qt_metacast(_clname);
}

int rtabmap::DataRecorder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
