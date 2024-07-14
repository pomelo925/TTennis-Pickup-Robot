/****************************************************************************
** Meta object code from reading C++ file 'DatabaseViewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/rtabmap/guilib/include/rtabmap/gui/DatabaseViewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rtabmap__DatabaseViewer_t {
    QByteArrayData data[72];
    char stringdata0[1277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__DatabaseViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__DatabaseViewer_t qt_meta_stringdata_rtabmap__DatabaseViewer = {
    {
QT_MOC_LITERAL(0, 0, 23), // "rtabmap::DatabaseViewer"
QT_MOC_LITERAL(1, 24, 13), // "writeSettings"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "restoreDefaultSettings"
QT_MOC_LITERAL(4, 62, 14), // "configModified"
QT_MOC_LITERAL(5, 77, 12), // "openDatabase"
QT_MOC_LITERAL(6, 90, 13), // "closeDatabase"
QT_MOC_LITERAL(7, 104, 15), // "recoverDatabase"
QT_MOC_LITERAL(8, 120, 10), // "updateInfo"
QT_MOC_LITERAL(9, 131, 16), // "updateStatistics"
QT_MOC_LITERAL(10, 148, 19), // "selectObstacleColor"
QT_MOC_LITERAL(11, 168, 17), // "selectGroundColor"
QT_MOC_LITERAL(12, 186, 16), // "selectEmptyColor"
QT_MOC_LITERAL(13, 203, 19), // "selectFrontierColor"
QT_MOC_LITERAL(14, 223, 14), // "editDepthImage"
QT_MOC_LITERAL(15, 238, 13), // "generateGraph"
QT_MOC_LITERAL(16, 252, 14), // "editSaved2DMap"
QT_MOC_LITERAL(17, 267, 16), // "exportSaved2DMap"
QT_MOC_LITERAL(18, 284, 11), // "import2DMap"
QT_MOC_LITERAL(19, 296, 18), // "regenerateSavedMap"
QT_MOC_LITERAL(20, 315, 17), // "viewOptimizedMesh"
QT_MOC_LITERAL(21, 333, 19), // "exportOptimizedMesh"
QT_MOC_LITERAL(22, 353, 19), // "updateOptimizedMesh"
QT_MOC_LITERAL(23, 373, 14), // "exportDatabase"
QT_MOC_LITERAL(24, 388, 13), // "extractImages"
QT_MOC_LITERAL(25, 402, 14), // "exportPosesRaw"
QT_MOC_LITERAL(26, 417, 32), // "exportPosesRGBDSLAMMotionCapture"
QT_MOC_LITERAL(27, 450, 19), // "exportPosesRGBDSLAM"
QT_MOC_LITERAL(28, 470, 21), // "exportPosesRGBDSLAMID"
QT_MOC_LITERAL(29, 492, 16), // "exportPosesKITTI"
QT_MOC_LITERAL(30, 509, 15), // "exportPosesTORO"
QT_MOC_LITERAL(31, 525, 14), // "exportPosesG2O"
QT_MOC_LITERAL(32, 540, 14), // "exportPosesKML"
QT_MOC_LITERAL(33, 555, 13), // "exportGPS_TXT"
QT_MOC_LITERAL(34, 569, 13), // "exportGPS_KML"
QT_MOC_LITERAL(35, 583, 18), // "generateLocalGraph"
QT_MOC_LITERAL(36, 602, 19), // "regenerateLocalMaps"
QT_MOC_LITERAL(37, 622, 26), // "regenerateCurrentLocalMaps"
QT_MOC_LITERAL(38, 649, 9), // "view3DMap"
QT_MOC_LITERAL(39, 659, 13), // "generate3DMap"
QT_MOC_LITERAL(40, 673, 22), // "detectMoreLoopClosures"
QT_MOC_LITERAL(41, 696, 28), // "updateAllNeighborCovariances"
QT_MOC_LITERAL(42, 725, 31), // "updateAllLoopClosureCovariances"
QT_MOC_LITERAL(43, 757, 28), // "updateAllLandmarkCovariances"
QT_MOC_LITERAL(44, 786, 11), // "refineLinks"
QT_MOC_LITERAL(45, 798, 15), // "resetAllChanges"
QT_MOC_LITERAL(46, 814, 17), // "graphNodeSelected"
QT_MOC_LITERAL(47, 832, 17), // "graphLinkSelected"
QT_MOC_LITERAL(48, 850, 19), // "sliderAValueChanged"
QT_MOC_LITERAL(49, 870, 19), // "sliderBValueChanged"
QT_MOC_LITERAL(50, 890, 12), // "sliderAMoved"
QT_MOC_LITERAL(51, 903, 12), // "sliderBMoved"
QT_MOC_LITERAL(52, 916, 12), // "update3dView"
QT_MOC_LITERAL(53, 929, 26), // "sliderNeighborValueChanged"
QT_MOC_LITERAL(54, 956, 22), // "sliderLoopValueChanged"
QT_MOC_LITERAL(55, 979, 28), // "sliderIterationsValueChanged"
QT_MOC_LITERAL(56, 1008, 14), // "editConstraint"
QT_MOC_LITERAL(57, 1023, 10), // "updateGrid"
QT_MOC_LITERAL(58, 1034, 17), // "updateOctomapView"
QT_MOC_LITERAL(59, 1052, 19), // "updateGraphRotation"
QT_MOC_LITERAL(60, 1072, 15), // "updateGraphView"
QT_MOC_LITERAL(61, 1088, 16), // "refineConstraint"
QT_MOC_LITERAL(62, 1105, 13), // "addConstraint"
QT_MOC_LITERAL(63, 1119, 15), // "resetConstraint"
QT_MOC_LITERAL(64, 1135, 16), // "rejectConstraint"
QT_MOC_LITERAL(65, 1152, 20), // "updateConstraintView"
QT_MOC_LITERAL(66, 1173, 17), // "updateLoggerLevel"
QT_MOC_LITERAL(67, 1191, 12), // "updateStereo"
QT_MOC_LITERAL(68, 1204, 23), // "notifyParametersChanged"
QT_MOC_LITERAL(69, 1228, 15), // "setupMainLayout"
QT_MOC_LITERAL(70, 1244, 8), // "vertical"
QT_MOC_LITERAL(71, 1253, 23) // "updateConstraintButtons"

    },
    "rtabmap::DatabaseViewer\0writeSettings\0"
    "\0restoreDefaultSettings\0configModified\0"
    "openDatabase\0closeDatabase\0recoverDatabase\0"
    "updateInfo\0updateStatistics\0"
    "selectObstacleColor\0selectGroundColor\0"
    "selectEmptyColor\0selectFrontierColor\0"
    "editDepthImage\0generateGraph\0"
    "editSaved2DMap\0exportSaved2DMap\0"
    "import2DMap\0regenerateSavedMap\0"
    "viewOptimizedMesh\0exportOptimizedMesh\0"
    "updateOptimizedMesh\0exportDatabase\0"
    "extractImages\0exportPosesRaw\0"
    "exportPosesRGBDSLAMMotionCapture\0"
    "exportPosesRGBDSLAM\0exportPosesRGBDSLAMID\0"
    "exportPosesKITTI\0exportPosesTORO\0"
    "exportPosesG2O\0exportPosesKML\0"
    "exportGPS_TXT\0exportGPS_KML\0"
    "generateLocalGraph\0regenerateLocalMaps\0"
    "regenerateCurrentLocalMaps\0view3DMap\0"
    "generate3DMap\0detectMoreLoopClosures\0"
    "updateAllNeighborCovariances\0"
    "updateAllLoopClosureCovariances\0"
    "updateAllLandmarkCovariances\0refineLinks\0"
    "resetAllChanges\0graphNodeSelected\0"
    "graphLinkSelected\0sliderAValueChanged\0"
    "sliderBValueChanged\0sliderAMoved\0"
    "sliderBMoved\0update3dView\0"
    "sliderNeighborValueChanged\0"
    "sliderLoopValueChanged\0"
    "sliderIterationsValueChanged\0"
    "editConstraint\0updateGrid\0updateOctomapView\0"
    "updateGraphRotation\0updateGraphView\0"
    "refineConstraint\0addConstraint\0"
    "resetConstraint\0rejectConstraint\0"
    "updateConstraintView\0updateLoggerLevel\0"
    "updateStereo\0notifyParametersChanged\0"
    "setupMainLayout\0vertical\0"
    "updateConstraintButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__DatabaseViewer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      69,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  359,    2, 0x08 /* Private */,
       3,    0,  360,    2, 0x08 /* Private */,
       4,    0,  361,    2, 0x08 /* Private */,
       5,    0,  362,    2, 0x08 /* Private */,
       6,    0,  363,    2, 0x08 /* Private */,
       7,    0,  364,    2, 0x08 /* Private */,
       8,    0,  365,    2, 0x08 /* Private */,
       9,    0,  366,    2, 0x08 /* Private */,
      10,    0,  367,    2, 0x08 /* Private */,
      11,    0,  368,    2, 0x08 /* Private */,
      12,    0,  369,    2, 0x08 /* Private */,
      13,    0,  370,    2, 0x08 /* Private */,
      14,    0,  371,    2, 0x08 /* Private */,
      15,    0,  372,    2, 0x08 /* Private */,
      16,    0,  373,    2, 0x08 /* Private */,
      17,    0,  374,    2, 0x08 /* Private */,
      18,    0,  375,    2, 0x08 /* Private */,
      19,    0,  376,    2, 0x08 /* Private */,
      20,    0,  377,    2, 0x08 /* Private */,
      21,    0,  378,    2, 0x08 /* Private */,
      22,    0,  379,    2, 0x08 /* Private */,
      23,    0,  380,    2, 0x08 /* Private */,
      24,    0,  381,    2, 0x08 /* Private */,
      25,    0,  382,    2, 0x08 /* Private */,
      26,    0,  383,    2, 0x08 /* Private */,
      27,    0,  384,    2, 0x08 /* Private */,
      28,    0,  385,    2, 0x08 /* Private */,
      29,    0,  386,    2, 0x08 /* Private */,
      30,    0,  387,    2, 0x08 /* Private */,
      31,    0,  388,    2, 0x08 /* Private */,
      32,    0,  389,    2, 0x08 /* Private */,
      33,    0,  390,    2, 0x08 /* Private */,
      34,    0,  391,    2, 0x08 /* Private */,
      35,    0,  392,    2, 0x08 /* Private */,
      36,    0,  393,    2, 0x08 /* Private */,
      37,    0,  394,    2, 0x08 /* Private */,
      38,    0,  395,    2, 0x08 /* Private */,
      39,    0,  396,    2, 0x08 /* Private */,
      40,    0,  397,    2, 0x08 /* Private */,
      41,    0,  398,    2, 0x08 /* Private */,
      42,    0,  399,    2, 0x08 /* Private */,
      43,    0,  400,    2, 0x08 /* Private */,
      44,    0,  401,    2, 0x08 /* Private */,
      45,    0,  402,    2, 0x08 /* Private */,
      46,    1,  403,    2, 0x08 /* Private */,
      47,    2,  406,    2, 0x08 /* Private */,
      48,    1,  411,    2, 0x08 /* Private */,
      49,    1,  414,    2, 0x08 /* Private */,
      50,    1,  417,    2, 0x08 /* Private */,
      51,    1,  420,    2, 0x08 /* Private */,
      52,    0,  423,    2, 0x08 /* Private */,
      53,    1,  424,    2, 0x08 /* Private */,
      54,    1,  427,    2, 0x08 /* Private */,
      55,    1,  430,    2, 0x08 /* Private */,
      56,    0,  433,    2, 0x08 /* Private */,
      57,    0,  434,    2, 0x08 /* Private */,
      58,    0,  435,    2, 0x08 /* Private */,
      59,    0,  436,    2, 0x08 /* Private */,
      60,    0,  437,    2, 0x08 /* Private */,
      61,    0,  438,    2, 0x08 /* Private */,
      62,    0,  439,    2, 0x08 /* Private */,
      63,    0,  440,    2, 0x08 /* Private */,
      64,    0,  441,    2, 0x08 /* Private */,
      65,    0,  442,    2, 0x08 /* Private */,
      66,    0,  443,    2, 0x08 /* Private */,
      67,    0,  444,    2, 0x08 /* Private */,
      68,    1,  445,    2, 0x08 /* Private */,
      69,    1,  448,    2, 0x08 /* Private */,
      71,    0,  451,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::Bool,   70,
    QMetaType::Void,

       0        // eod
};

void rtabmap::DatabaseViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DatabaseViewer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->writeSettings(); break;
        case 1: _t->restoreDefaultSettings(); break;
        case 2: _t->configModified(); break;
        case 3: _t->openDatabase(); break;
        case 4: { bool _r = _t->closeDatabase();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->recoverDatabase(); break;
        case 6: _t->updateInfo(); break;
        case 7: _t->updateStatistics(); break;
        case 8: _t->selectObstacleColor(); break;
        case 9: _t->selectGroundColor(); break;
        case 10: _t->selectEmptyColor(); break;
        case 11: _t->selectFrontierColor(); break;
        case 12: _t->editDepthImage(); break;
        case 13: _t->generateGraph(); break;
        case 14: _t->editSaved2DMap(); break;
        case 15: _t->exportSaved2DMap(); break;
        case 16: _t->import2DMap(); break;
        case 17: _t->regenerateSavedMap(); break;
        case 18: _t->viewOptimizedMesh(); break;
        case 19: _t->exportOptimizedMesh(); break;
        case 20: _t->updateOptimizedMesh(); break;
        case 21: _t->exportDatabase(); break;
        case 22: _t->extractImages(); break;
        case 23: _t->exportPosesRaw(); break;
        case 24: _t->exportPosesRGBDSLAMMotionCapture(); break;
        case 25: _t->exportPosesRGBDSLAM(); break;
        case 26: _t->exportPosesRGBDSLAMID(); break;
        case 27: _t->exportPosesKITTI(); break;
        case 28: _t->exportPosesTORO(); break;
        case 29: _t->exportPosesG2O(); break;
        case 30: _t->exportPosesKML(); break;
        case 31: _t->exportGPS_TXT(); break;
        case 32: _t->exportGPS_KML(); break;
        case 33: _t->generateLocalGraph(); break;
        case 34: _t->regenerateLocalMaps(); break;
        case 35: _t->regenerateCurrentLocalMaps(); break;
        case 36: _t->view3DMap(); break;
        case 37: _t->generate3DMap(); break;
        case 38: _t->detectMoreLoopClosures(); break;
        case 39: _t->updateAllNeighborCovariances(); break;
        case 40: _t->updateAllLoopClosureCovariances(); break;
        case 41: _t->updateAllLandmarkCovariances(); break;
        case 42: _t->refineLinks(); break;
        case 43: _t->resetAllChanges(); break;
        case 44: _t->graphNodeSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->graphLinkSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 46: _t->sliderAValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->sliderBValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->sliderAMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->sliderBMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->update3dView(); break;
        case 51: _t->sliderNeighborValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 52: _t->sliderLoopValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 53: _t->sliderIterationsValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->editConstraint(); break;
        case 55: _t->updateGrid(); break;
        case 56: _t->updateOctomapView(); break;
        case 57: _t->updateGraphRotation(); break;
        case 58: _t->updateGraphView(); break;
        case 59: _t->refineConstraint(); break;
        case 60: _t->addConstraint(); break;
        case 61: _t->resetConstraint(); break;
        case 62: _t->rejectConstraint(); break;
        case 63: _t->updateConstraintView(); break;
        case 64: _t->updateLoggerLevel(); break;
        case 65: _t->updateStereo(); break;
        case 66: _t->notifyParametersChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 67: _t->setupMainLayout((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 68: _t->updateConstraintButtons(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rtabmap::DatabaseViewer::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_rtabmap__DatabaseViewer.data,
    qt_meta_data_rtabmap__DatabaseViewer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rtabmap::DatabaseViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::DatabaseViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__DatabaseViewer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int rtabmap::DatabaseViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 69)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 69;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 69)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 69;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
