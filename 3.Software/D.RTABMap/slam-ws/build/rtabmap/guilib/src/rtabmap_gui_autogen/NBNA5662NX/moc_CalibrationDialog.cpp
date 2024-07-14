/****************************************************************************
** Meta object code from reading C++ file 'CalibrationDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/rtabmap/guilib/include/rtabmap/gui/CalibrationDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CalibrationDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rtabmap__CalibrationDialog_t {
    QByteArrayData data[32];
    char stringdata0[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__CalibrationDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__CalibrationDialog_t qt_meta_stringdata_rtabmap__CalibrationDialog = {
    {
QT_MOC_LITERAL(0, 0, 26), // "rtabmap::CalibrationDialog"
QT_MOC_LITERAL(1, 27, 12), // "setBoardType"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 4), // "type"
QT_MOC_LITERAL(4, 46, 13), // "setBoardWidth"
QT_MOC_LITERAL(5, 60, 5), // "width"
QT_MOC_LITERAL(6, 66, 14), // "setBoardHeight"
QT_MOC_LITERAL(7, 81, 6), // "height"
QT_MOC_LITERAL(8, 88, 13), // "setSquareSize"
QT_MOC_LITERAL(9, 102, 4), // "size"
QT_MOC_LITERAL(10, 107, 19), // "setMarkerDictionary"
QT_MOC_LITERAL(11, 127, 10), // "dictionary"
QT_MOC_LITERAL(12, 138, 15), // "setMarkerLength"
QT_MOC_LITERAL(13, 154, 6), // "length"
QT_MOC_LITERAL(14, 161, 21), // "setSubpixelRefinement"
QT_MOC_LITERAL(15, 183, 7), // "enabled"
QT_MOC_LITERAL(16, 191, 19), // "setSubpixelMaxError"
QT_MOC_LITERAL(17, 211, 5), // "value"
QT_MOC_LITERAL(18, 217, 23), // "setCalibrationDataSaved"
QT_MOC_LITERAL(19, 241, 25), // "setExpectedStereoBaseline"
QT_MOC_LITERAL(20, 267, 11), // "setMaxScale"
QT_MOC_LITERAL(21, 279, 5), // "scale"
QT_MOC_LITERAL(22, 285, 13), // "processImages"
QT_MOC_LITERAL(23, 299, 7), // "cv::Mat"
QT_MOC_LITERAL(24, 307, 9), // "imageLeft"
QT_MOC_LITERAL(25, 317, 10), // "imageRight"
QT_MOC_LITERAL(26, 328, 10), // "cameraName"
QT_MOC_LITERAL(27, 339, 13), // "generateBoard"
QT_MOC_LITERAL(28, 353, 9), // "calibrate"
QT_MOC_LITERAL(29, 363, 7), // "restart"
QT_MOC_LITERAL(30, 371, 4), // "save"
QT_MOC_LITERAL(31, 376, 6) // "unlock"

    },
    "rtabmap::CalibrationDialog\0setBoardType\0"
    "\0type\0setBoardWidth\0width\0setBoardHeight\0"
    "height\0setSquareSize\0size\0setMarkerDictionary\0"
    "dictionary\0setMarkerLength\0length\0"
    "setSubpixelRefinement\0enabled\0"
    "setSubpixelMaxError\0value\0"
    "setCalibrationDataSaved\0"
    "setExpectedStereoBaseline\0setMaxScale\0"
    "scale\0processImages\0cv::Mat\0imageLeft\0"
    "imageRight\0cameraName\0generateBoard\0"
    "calibrate\0restart\0save\0unlock"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__CalibrationDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x0a /* Public */,
       4,    1,  102,    2, 0x0a /* Public */,
       6,    1,  105,    2, 0x0a /* Public */,
       8,    1,  108,    2, 0x0a /* Public */,
      10,    1,  111,    2, 0x0a /* Public */,
      12,    1,  114,    2, 0x0a /* Public */,
      14,    1,  117,    2, 0x0a /* Public */,
      16,    1,  120,    2, 0x0a /* Public */,
      18,    1,  123,    2, 0x0a /* Public */,
      19,    1,  126,    2, 0x0a /* Public */,
      20,    1,  129,    2, 0x0a /* Public */,
      22,    3,  132,    2, 0x0a /* Public */,
      27,    0,  139,    2, 0x0a /* Public */,
      28,    0,  140,    2, 0x0a /* Public */,
      29,    0,  141,    2, 0x0a /* Public */,
      30,    0,  142,    2, 0x0a /* Public */,
      31,    0,  143,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Double,   17,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 23, QMetaType::QString,   24,   25,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void rtabmap::CalibrationDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CalibrationDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setBoardType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setBoardWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setBoardHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setSquareSize((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setMarkerDictionary((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setMarkerLength((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setSubpixelRefinement((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setSubpixelMaxError((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->setCalibrationDataSaved((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setExpectedStereoBaseline((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->setMaxScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->processImages((*reinterpret_cast< const cv::Mat(*)>(_a[1])),(*reinterpret_cast< const cv::Mat(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 12: _t->generateBoard(); break;
        case 13: _t->calibrate(); break;
        case 14: _t->restart(); break;
        case 15: { bool _r = _t->save();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: _t->unlock(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject rtabmap::CalibrationDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_rtabmap__CalibrationDialog.data,
    qt_meta_data_rtabmap__CalibrationDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rtabmap::CalibrationDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::CalibrationDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__CalibrationDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "UEventsHandler"))
        return static_cast< UEventsHandler*>(this);
    return QDialog::qt_metacast(_clname);
}

int rtabmap::CalibrationDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
