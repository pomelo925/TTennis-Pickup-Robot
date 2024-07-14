/****************************************************************************
** Meta object code from reading C++ file 'MapBuilder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/rtabmap/examples/RGBDMapping/MapBuilder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MapBuilder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapBuilder_t {
    QByteArrayData data[12];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapBuilder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapBuilder_t qt_meta_stringdata_MapBuilder = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MapBuilder"
QT_MOC_LITERAL(1, 11, 14), // "pauseDetection"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "processOdometry"
QT_MOC_LITERAL(4, 43, 22), // "rtabmap::OdometryEvent"
QT_MOC_LITERAL(5, 66, 4), // "odom"
QT_MOC_LITERAL(6, 71, 17), // "processStatistics"
QT_MOC_LITERAL(7, 89, 19), // "rtabmap::Statistics"
QT_MOC_LITERAL(8, 109, 5), // "stats"
QT_MOC_LITERAL(9, 115, 11), // "handleEvent"
QT_MOC_LITERAL(10, 127, 7), // "UEvent*"
QT_MOC_LITERAL(11, 135, 5) // "event"

    },
    "MapBuilder\0pauseDetection\0\0processOdometry\0"
    "rtabmap::OdometryEvent\0odom\0"
    "processStatistics\0rtabmap::Statistics\0"
    "stats\0handleEvent\0UEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapBuilder[] = {

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
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    1,   35,    2, 0x09 /* Protected */,
       6,    1,   38,    2, 0x09 /* Protected */,
       9,    1,   41,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Bool, 0x80000000 | 10,   11,

       0        // eod
};

void MapBuilder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapBuilder *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pauseDetection(); break;
        case 1: _t->processOdometry((*reinterpret_cast< const rtabmap::OdometryEvent(*)>(_a[1]))); break;
        case 2: _t->processStatistics((*reinterpret_cast< const rtabmap::Statistics(*)>(_a[1]))); break;
        case 3: { bool _r = _t->handleEvent((*reinterpret_cast< UEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapBuilder::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MapBuilder.data,
    qt_meta_data_MapBuilder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapBuilder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapBuilder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapBuilder.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "UEventsHandler"))
        return static_cast< UEventsHandler*>(this);
    return QWidget::qt_metacast(_clname);
}

int MapBuilder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
