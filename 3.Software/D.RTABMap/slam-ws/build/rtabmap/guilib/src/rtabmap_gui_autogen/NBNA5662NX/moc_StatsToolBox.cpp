/****************************************************************************
** Meta object code from reading C++ file 'StatsToolBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/rtabmap/guilib/include/rtabmap/gui/StatsToolBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StatsToolBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rtabmap__StatItem_t {
    QByteArrayData data[11];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__StatItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__StatItem_t qt_meta_stringdata_rtabmap__StatItem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "rtabmap::StatItem"
QT_MOC_LITERAL(1, 18, 10), // "valueAdded"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 13), // "valuesChanged"
QT_MOC_LITERAL(4, 44, 18), // "std::vector<qreal>"
QT_MOC_LITERAL(5, 63, 13), // "plotRequested"
QT_MOC_LITERAL(6, 77, 15), // "const StatItem*"
QT_MOC_LITERAL(7, 93, 10), // "updateMenu"
QT_MOC_LITERAL(8, 104, 12), // "const QMenu*"
QT_MOC_LITERAL(9, 117, 4), // "menu"
QT_MOC_LITERAL(10, 122, 18) // "preparePlotRequest"

    },
    "rtabmap::StatItem\0valueAdded\0\0"
    "valuesChanged\0std::vector<qreal>\0"
    "plotRequested\0const StatItem*\0updateMenu\0"
    "const QMenu*\0menu\0preparePlotRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__StatItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       1,    2,   47,    2, 0x06 /* Public */,
       3,    2,   52,    2, 0x06 /* Public */,
       5,    2,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   62,    2, 0x0a /* Public */,
      10,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,    2,    2,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void rtabmap::StatItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatItem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->valueAdded((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->valueAdded((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 2: _t->valuesChanged((*reinterpret_cast< const std::vector<qreal>(*)>(_a[1])),(*reinterpret_cast< const std::vector<qreal>(*)>(_a[2]))); break;
        case 3: _t->plotRequested((*reinterpret_cast< const StatItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->updateMenu((*reinterpret_cast< const QMenu*(*)>(_a[1]))); break;
        case 5: _t->preparePlotRequest(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StatItem::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatItem::valueAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StatItem::*)(qreal , qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatItem::valueAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StatItem::*)(const std::vector<qreal> & , const std::vector<qreal> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatItem::valuesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StatItem::*)(const StatItem * , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatItem::plotRequested)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rtabmap::StatItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_rtabmap__StatItem.data,
    qt_meta_data_rtabmap__StatItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rtabmap::StatItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::StatItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__StatItem.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int rtabmap::StatItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void rtabmap::StatItem::valueAdded(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rtabmap::StatItem::valueAdded(qreal _t1, qreal _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void rtabmap::StatItem::valuesChanged(const std::vector<qreal> & _t1, const std::vector<qreal> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void rtabmap::StatItem::plotRequested(const StatItem * _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_rtabmap__StatsToolBox_t {
    QByteArrayData data[18];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__StatsToolBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__StatsToolBox_t qt_meta_stringdata_rtabmap__StatsToolBox = {
    {
QT_MOC_LITERAL(0, 0, 21), // "rtabmap::StatsToolBox"
QT_MOC_LITERAL(1, 22, 11), // "menuChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 12), // "const QMenu*"
QT_MOC_LITERAL(4, 48, 19), // "figuresSetupChanged"
QT_MOC_LITERAL(5, 68, 10), // "updateStat"
QT_MOC_LITERAL(6, 79, 12), // "statFullName"
QT_MOC_LITERAL(7, 92, 7), // "cacheOn"
QT_MOC_LITERAL(8, 100, 1), // "y"
QT_MOC_LITERAL(9, 102, 1), // "x"
QT_MOC_LITERAL(10, 104, 18), // "std::vector<qreal>"
QT_MOC_LITERAL(11, 123, 5), // "clear"
QT_MOC_LITERAL(12, 129, 4), // "plot"
QT_MOC_LITERAL(13, 134, 15), // "const StatItem*"
QT_MOC_LITERAL(14, 150, 4), // "stat"
QT_MOC_LITERAL(15, 155, 8), // "plotName"
QT_MOC_LITERAL(16, 164, 13), // "figureDeleted"
QT_MOC_LITERAL(17, 178, 3) // "obj"

    },
    "rtabmap::StatsToolBox\0menuChanged\0\0"
    "const QMenu*\0figuresSetupChanged\0"
    "updateStat\0statFullName\0cacheOn\0y\0x\0"
    "std::vector<qreal>\0clear\0plot\0"
    "const StatItem*\0stat\0plotName\0"
    "figureDeleted\0obj"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__StatsToolBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    0,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   68,    2, 0x0a /* Public */,
       5,    3,   73,    2, 0x0a /* Public */,
       5,    4,   80,    2, 0x0a /* Public */,
       5,    4,   89,    2, 0x0a /* Public */,
      11,    0,   98,    2, 0x0a /* Public */,
      12,    2,   99,    2, 0x08 /* Private */,
      12,    1,  104,    2, 0x28 /* Private | MethodCloned */,
      16,    1,  107,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    6,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QReal, QMetaType::Bool,    6,    8,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QReal, QMetaType::QReal, QMetaType::Bool,    6,    9,    8,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10, 0x80000000 | 10, QMetaType::Bool,    6,    9,    8,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, QMetaType::QString,   14,   15,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QObjectStar,   17,

       0        // eod
};

void rtabmap::StatsToolBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StatsToolBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->menuChanged((*reinterpret_cast< const QMenu*(*)>(_a[1]))); break;
        case 1: _t->figuresSetupChanged(); break;
        case 2: _t->updateStat((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->updateStat((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->updateStat((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 5: _t->updateStat((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const std::vector<qreal>(*)>(_a[2])),(*reinterpret_cast< const std::vector<qreal>(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 6: _t->clear(); break;
        case 7: _t->plot((*reinterpret_cast< const StatItem*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->plot((*reinterpret_cast< const StatItem*(*)>(_a[1]))); break;
        case 9: _t->figureDeleted((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StatsToolBox::*)(const QMenu * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatsToolBox::menuChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StatsToolBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StatsToolBox::figuresSetupChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rtabmap::StatsToolBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_rtabmap__StatsToolBox.data,
    qt_meta_data_rtabmap__StatsToolBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rtabmap::StatsToolBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::StatsToolBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__StatsToolBox.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int rtabmap::StatsToolBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::StatsToolBox::menuChanged(const QMenu * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void rtabmap::StatsToolBox::figuresSetupChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
