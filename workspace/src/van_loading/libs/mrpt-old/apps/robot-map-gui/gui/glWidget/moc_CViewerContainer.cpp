/****************************************************************************
** Meta object code from reading C++ file 'CViewerContainer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CViewerContainer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CViewerContainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CViewerContainer_t {
    QByteArrayData data[32];
    char stringdata0[373];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CViewerContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CViewerContainer_t qt_meta_stringdata_CViewerContainer = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CViewerContainer"
QT_MOC_LITERAL(1, 17, 15), // "selectedChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "std::vector<size_t>"
QT_MOC_LITERAL(4, 54, 3), // "idx"
QT_MOC_LITERAL(5, 58, 16), // "deleteRobotPoses"
QT_MOC_LITERAL(6, 75, 14), // "moveRobotPoses"
QT_MOC_LITERAL(7, 90, 4), // "dist"
QT_MOC_LITERAL(8, 95, 17), // "showPoseDirection"
QT_MOC_LITERAL(9, 113, 6), // "size_t"
QT_MOC_LITERAL(10, 120, 3), // "yaw"
QT_MOC_LITERAL(11, 124, 5), // "pitch"
QT_MOC_LITERAL(12, 130, 4), // "roll"
QT_MOC_LITERAL(13, 135, 18), // "showAllObservation"
QT_MOC_LITERAL(14, 154, 2), // "is"
QT_MOC_LITERAL(15, 157, 15), // "changedSelected"
QT_MOC_LITERAL(16, 173, 28), // "std::vector<CRobotPose::Ptr>"
QT_MOC_LITERAL(17, 202, 10), // "robotPoses"
QT_MOC_LITERAL(18, 213, 15), // "updatePanelInfo"
QT_MOC_LITERAL(19, 229, 5), // "index"
QT_MOC_LITERAL(20, 235, 14), // "changeZoomInfo"
QT_MOC_LITERAL(21, 250, 4), // "zoom"
QT_MOC_LITERAL(22, 255, 16), // "changeAzimuthDeg"
QT_MOC_LITERAL(23, 272, 3), // "deg"
QT_MOC_LITERAL(24, 276, 18), // "changeElevationDeg"
QT_MOC_LITERAL(25, 295, 11), // "zoomChanged"
QT_MOC_LITERAL(26, 307, 1), // "d"
QT_MOC_LITERAL(27, 309, 15), // "updateMouseInfo"
QT_MOC_LITERAL(28, 325, 1), // "x"
QT_MOC_LITERAL(29, 327, 1), // "y"
QT_MOC_LITERAL(30, 329, 20), // "updateAzimuthDegrees"
QT_MOC_LITERAL(31, 350, 22) // "updateElevationDegrees"

    },
    "CViewerContainer\0selectedChanged\0\0"
    "std::vector<size_t>\0idx\0deleteRobotPoses\0"
    "moveRobotPoses\0dist\0showPoseDirection\0"
    "size_t\0yaw\0pitch\0roll\0showAllObservation\0"
    "is\0changedSelected\0std::vector<CRobotPose::Ptr>\0"
    "robotPoses\0updatePanelInfo\0index\0"
    "changeZoomInfo\0zoom\0changeAzimuthDeg\0"
    "deg\0changeElevationDeg\0zoomChanged\0d\0"
    "updateMouseInfo\0x\0y\0updateAzimuthDegrees\0"
    "updateElevationDegrees"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CViewerContainer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       5,    1,   92,    2, 0x06 /* Public */,
       6,    2,   95,    2, 0x06 /* Public */,
       8,    4,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  109,    2, 0x0a /* Public */,
      15,    1,  112,    2, 0x08 /* Private */,
      18,    1,  115,    2, 0x08 /* Private */,
      20,    1,  118,    2, 0x08 /* Private */,
      22,    1,  121,    2, 0x08 /* Private */,
      24,    1,  124,    2, 0x08 /* Private */,
      25,    1,  127,    2, 0x08 /* Private */,
      25,    1,  130,    2, 0x08 /* Private */,
      27,    2,  133,    2, 0x08 /* Private */,
      30,    1,  138,    2, 0x08 /* Private */,
      31,    1,  141,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPointF,    4,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,   10,   11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Float,   21,
    QMetaType::Void, QMetaType::Float,   23,
    QMetaType::Void, QMetaType::Float,   23,
    QMetaType::Void, QMetaType::Double,   26,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   28,   29,
    QMetaType::Void, QMetaType::Double,   23,
    QMetaType::Void, QMetaType::Double,   23,

       0        // eod
};

void CViewerContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CViewerContainer *_t = static_cast<CViewerContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedChanged((*reinterpret_cast< const std::vector<size_t>(*)>(_a[1]))); break;
        case 1: _t->deleteRobotPoses((*reinterpret_cast< const std::vector<size_t>(*)>(_a[1]))); break;
        case 2: _t->moveRobotPoses((*reinterpret_cast< const std::vector<size_t>(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 3: _t->showPoseDirection((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 4: _t->showAllObservation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->changedSelected((*reinterpret_cast< const std::vector<CRobotPose::Ptr>(*)>(_a[1]))); break;
        case 6: _t->updatePanelInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->changeZoomInfo((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->changeAzimuthDeg((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 9: _t->changeElevationDeg((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->zoomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->zoomChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->updateMouseInfo((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 13: _t->updateAzimuthDegrees((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->updateElevationDegrees((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CViewerContainer::*_t)(const std::vector<size_t> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CViewerContainer::selectedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CViewerContainer::*_t)(const std::vector<size_t> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CViewerContainer::deleteRobotPoses)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CViewerContainer::*_t)(const std::vector<size_t> & , const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CViewerContainer::moveRobotPoses)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CViewerContainer::*_t)(size_t , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CViewerContainer::showPoseDirection)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject CViewerContainer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CViewerContainer.data,
      qt_meta_data_CViewerContainer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CViewerContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CViewerContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CViewerContainer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CViewerContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void CViewerContainer::selectedChanged(const std::vector<size_t> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CViewerContainer::deleteRobotPoses(const std::vector<size_t> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CViewerContainer::moveRobotPoses(const std::vector<size_t> & _t1, const QPointF & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CViewerContainer::showPoseDirection(size_t _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
