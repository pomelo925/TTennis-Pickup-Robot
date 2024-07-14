/****************************************************************************
** Meta object code from reading C++ file 'LoopClosureViewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/rtabmap/guilib/include/rtabmap/gui/LoopClosureViewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoopClosureViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rtabmap__LoopClosureViewer_t {
    QByteArrayData data[13];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__LoopClosureViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__LoopClosureViewer_t qt_meta_stringdata_rtabmap__LoopClosureViewer = {
    {
QT_MOC_LITERAL(0, 0, 26), // "rtabmap::LoopClosureViewer"
QT_MOC_LITERAL(1, 27, 13), // "setDecimation"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 10), // "decimation"
QT_MOC_LITERAL(4, 53, 11), // "setMaxDepth"
QT_MOC_LITERAL(5, 65, 8), // "maxDepth"
QT_MOC_LITERAL(6, 74, 11), // "setMinDepth"
QT_MOC_LITERAL(7, 86, 8), // "minDepth"
QT_MOC_LITERAL(8, 95, 10), // "updateView"
QT_MOC_LITERAL(9, 106, 9), // "Transform"
QT_MOC_LITERAL(10, 116, 4), // "AtoB"
QT_MOC_LITERAL(11, 121, 13), // "ParametersMap"
QT_MOC_LITERAL(12, 135, 10) // "parameters"

    },
    "rtabmap::LoopClosureViewer\0setDecimation\0"
    "\0decimation\0setMaxDepth\0maxDepth\0"
    "setMinDepth\0minDepth\0updateView\0"
    "Transform\0AtoB\0ParametersMap\0parameters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__LoopClosureViewer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       8,    2,   53,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   61,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 11,   10,   12,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void rtabmap::LoopClosureViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoopClosureViewer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setDecimation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setMaxDepth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setMinDepth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateView((*reinterpret_cast< const Transform(*)>(_a[1])),(*reinterpret_cast< const ParametersMap(*)>(_a[2]))); break;
        case 4: _t->updateView((*reinterpret_cast< const Transform(*)>(_a[1]))); break;
        case 5: _t->updateView(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rtabmap::LoopClosureViewer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_rtabmap__LoopClosureViewer.data,
    qt_meta_data_rtabmap__LoopClosureViewer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rtabmap::LoopClosureViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::LoopClosureViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__LoopClosureViewer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int rtabmap::LoopClosureViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
