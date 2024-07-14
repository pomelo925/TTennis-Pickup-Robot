/****************************************************************************
** Meta object code from reading C++ file 'MapCloudDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/rtabmap_ros/rtabmap_rviz_plugins/include/rtabmap_rviz_plugins/MapCloudDisplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MapCloudDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rtabmap_rviz_plugins__MapCloudDisplay_t {
    QByteArrayData data[16];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap_rviz_plugins__MapCloudDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap_rviz_plugins__MapCloudDisplay_t qt_meta_stringdata_rtabmap_rviz_plugins__MapCloudDisplay = {
    {
QT_MOC_LITERAL(0, 0, 37), // "rtabmap_rviz_plugins::MapClou..."
QT_MOC_LITERAL(1, 38, 16), // "causeRetransform"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 11), // "updateStyle"
QT_MOC_LITERAL(4, 68, 19), // "updateBillboardSize"
QT_MOC_LITERAL(5, 88, 11), // "updateAlpha"
QT_MOC_LITERAL(6, 100, 20), // "updateXyzTransformer"
QT_MOC_LITERAL(7, 121, 22), // "updateColorTransformer"
QT_MOC_LITERAL(8, 144, 24), // "setXyzTransformerOptions"
QT_MOC_LITERAL(9, 169, 38), // "rviz_common::properties::Enum..."
QT_MOC_LITERAL(10, 208, 4), // "prop"
QT_MOC_LITERAL(11, 213, 26), // "setColorTransformerOptions"
QT_MOC_LITERAL(12, 240, 21), // "updateCloudParameters"
QT_MOC_LITERAL(13, 262, 24), // "downloadNamespaceChanged"
QT_MOC_LITERAL(14, 287, 11), // "downloadMap"
QT_MOC_LITERAL(15, 299, 13) // "downloadGraph"

    },
    "rtabmap_rviz_plugins::MapCloudDisplay\0"
    "causeRetransform\0\0updateStyle\0"
    "updateBillboardSize\0updateAlpha\0"
    "updateXyzTransformer\0updateColorTransformer\0"
    "setXyzTransformerOptions\0"
    "rviz_common::properties::EnumProperty*\0"
    "prop\0setColorTransformerOptions\0"
    "updateCloudParameters\0downloadNamespaceChanged\0"
    "downloadMap\0downloadGraph"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap_rviz_plugins__MapCloudDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x0a /* Public */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    1,   80,    2, 0x08 /* Private */,
      11,    1,   83,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rtabmap_rviz_plugins::MapCloudDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapCloudDisplay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->causeRetransform(); break;
        case 1: _t->updateStyle(); break;
        case 2: _t->updateBillboardSize(); break;
        case 3: _t->updateAlpha(); break;
        case 4: _t->updateXyzTransformer(); break;
        case 5: _t->updateColorTransformer(); break;
        case 6: _t->setXyzTransformerOptions((*reinterpret_cast< rviz_common::properties::EnumProperty*(*)>(_a[1]))); break;
        case 7: _t->setColorTransformerOptions((*reinterpret_cast< rviz_common::properties::EnumProperty*(*)>(_a[1]))); break;
        case 8: _t->updateCloudParameters(); break;
        case 9: _t->downloadNamespaceChanged(); break;
        case 10: _t->downloadMap(); break;
        case 11: _t->downloadGraph(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rtabmap_rviz_plugins::MapCloudDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::MessageFilterDisplay<rtabmap_msgs::msg::MapData>::staticMetaObject>(),
    qt_meta_stringdata_rtabmap_rviz_plugins__MapCloudDisplay.data,
    qt_meta_data_rtabmap_rviz_plugins__MapCloudDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rtabmap_rviz_plugins::MapCloudDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap_rviz_plugins::MapCloudDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap_rviz_plugins__MapCloudDisplay.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::MessageFilterDisplay<rtabmap_msgs::msg::MapData>::qt_metacast(_clname);
}

int rtabmap_rviz_plugins::MapCloudDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::MessageFilterDisplay<rtabmap_msgs::msg::MapData>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
