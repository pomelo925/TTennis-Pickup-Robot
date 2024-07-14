/****************************************************************************
** Meta object code from reading C++ file 'ExportCloudsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/rtabmap/guilib/include/rtabmap/gui/ExportCloudsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExportCloudsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rtabmap__ExportCloudsDialog_t {
    QByteArrayData data[11];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__ExportCloudsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__ExportCloudsDialog_t qt_meta_stringdata_rtabmap__ExportCloudsDialog = {
    {
QT_MOC_LITERAL(0, 0, 27), // "rtabmap::ExportCloudsDialog"
QT_MOC_LITERAL(1, 28, 13), // "configChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 15), // "restoreDefaults"
QT_MOC_LITERAL(4, 59, 12), // "loadSettings"
QT_MOC_LITERAL(5, 72, 12), // "saveSettings"
QT_MOC_LITERAL(6, 85, 26), // "updateReconstructionFlavor"
QT_MOC_LITERAL(7, 112, 21), // "selectDistortionModel"
QT_MOC_LITERAL(8, 134, 17), // "selectCamProjMask"
QT_MOC_LITERAL(9, 152, 22), // "updateMLSGrpVisibility"
QT_MOC_LITERAL(10, 175, 6) // "cancel"

    },
    "rtabmap::ExportCloudsDialog\0configChanged\0"
    "\0restoreDefaults\0loadSettings\0"
    "saveSettings\0updateReconstructionFlavor\0"
    "selectDistortionModel\0selectCamProjMask\0"
    "updateMLSGrpVisibility\0cancel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__ExportCloudsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void rtabmap::ExportCloudsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExportCloudsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->configChanged(); break;
        case 1: _t->restoreDefaults(); break;
        case 2: _t->loadSettings(); break;
        case 3: _t->saveSettings(); break;
        case 4: _t->updateReconstructionFlavor(); break;
        case 5: _t->selectDistortionModel(); break;
        case 6: _t->selectCamProjMask(); break;
        case 7: _t->updateMLSGrpVisibility(); break;
        case 8: _t->cancel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExportCloudsDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExportCloudsDialog::configChanged)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject rtabmap::ExportCloudsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_rtabmap__ExportCloudsDialog.data,
    qt_meta_data_rtabmap__ExportCloudsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rtabmap::ExportCloudsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::ExportCloudsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__ExportCloudsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int rtabmap::ExportCloudsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void rtabmap::ExportCloudsDialog::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
