/****************************************************************************
** Meta object code from reading C++ file 'particle_cloud_display.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/navigation2/nav2_rviz_plugins/include/nav2_rviz_plugins/particle_cloud_display/particle_cloud_display.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'particle_cloud_display.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_nav2_rviz_plugins__ParticleCloudDisplay_t {
    QByteArrayData data[5];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_nav2_rviz_plugins__ParticleCloudDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_nav2_rviz_plugins__ParticleCloudDisplay_t qt_meta_stringdata_nav2_rviz_plugins__ParticleCloudDisplay = {
    {
QT_MOC_LITERAL(0, 0, 39), // "nav2_rviz_plugins::ParticleCl..."
QT_MOC_LITERAL(1, 40, 17), // "updateShapeChoice"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 16), // "updateArrowColor"
QT_MOC_LITERAL(4, 76, 14) // "updateGeometry"

    },
    "nav2_rviz_plugins::ParticleCloudDisplay\0"
    "updateShapeChoice\0\0updateArrowColor\0"
    "updateGeometry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_nav2_rviz_plugins__ParticleCloudDisplay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void nav2_rviz_plugins::ParticleCloudDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParticleCloudDisplay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateShapeChoice(); break;
        case 1: _t->updateArrowColor(); break;
        case 2: _t->updateGeometry(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject nav2_rviz_plugins::ParticleCloudDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::MessageFilterDisplay<nav2_msgs::msg::ParticleCloud>::staticMetaObject>(),
    qt_meta_stringdata_nav2_rviz_plugins__ParticleCloudDisplay.data,
    qt_meta_data_nav2_rviz_plugins__ParticleCloudDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *nav2_rviz_plugins::ParticleCloudDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *nav2_rviz_plugins::ParticleCloudDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_nav2_rviz_plugins__ParticleCloudDisplay.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::MessageFilterDisplay<nav2_msgs::msg::ParticleCloud>::qt_metacast(_clname);
}

int nav2_rviz_plugins::ParticleCloudDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::MessageFilterDisplay<nav2_msgs::msg::ParticleCloud>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
