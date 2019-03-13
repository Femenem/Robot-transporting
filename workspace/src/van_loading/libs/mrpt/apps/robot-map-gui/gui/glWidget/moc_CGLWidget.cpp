/****************************************************************************
** Meta object code from reading C++ file 'CGLWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CGLWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CGLWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CGlWidget_t {
    QByteArrayData data[23];
    char stringdata0[260];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CGlWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CGlWidget_t qt_meta_stringdata_CGlWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "CGlWidget"
QT_MOC_LITERAL(1, 10, 15), // "selectedChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 28), // "std::vector<CRobotPose::Ptr>"
QT_MOC_LITERAL(4, 56, 3), // "idx"
QT_MOC_LITERAL(5, 60, 11), // "zoomChanged"
QT_MOC_LITERAL(6, 72, 4), // "zoom"
QT_MOC_LITERAL(7, 77, 15), // "mousePosChanged"
QT_MOC_LITERAL(8, 93, 1), // "x"
QT_MOC_LITERAL(9, 95, 1), // "y"
QT_MOC_LITERAL(10, 97, 14), // "azimuthChanged"
QT_MOC_LITERAL(11, 112, 3), // "ang"
QT_MOC_LITERAL(12, 116, 16), // "elevationChanged"
QT_MOC_LITERAL(13, 133, 16), // "deleteRobotPoses"
QT_MOC_LITERAL(14, 150, 19), // "std::vector<size_t>"
QT_MOC_LITERAL(15, 170, 14), // "moveRobotPoses"
QT_MOC_LITERAL(16, 185, 4), // "dist"
QT_MOC_LITERAL(17, 190, 17), // "showPoseDirection"
QT_MOC_LITERAL(18, 208, 6), // "size_t"
QT_MOC_LITERAL(19, 215, 3), // "yaw"
QT_MOC_LITERAL(20, 219, 5), // "pitch"
QT_MOC_LITERAL(21, 225, 4), // "roll"
QT_MOC_LITERAL(22, 230, 29) // "updateSelectionWithoutSignals"

    },
    "CGlWidget\0selectedChanged\0\0"
    "std::vector<CRobotPose::Ptr>\0idx\0"
    "zoomChanged\0zoom\0mousePosChanged\0x\0y\0"
    "azimuthChanged\0ang\0elevationChanged\0"
    "deleteRobotPoses\0std::vector<size_t>\0"
    "moveRobotPoses\0dist\0showPoseDirection\0"
    "size_t\0yaw\0pitch\0roll\0"
    "updateSelectionWithoutSignals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CGlWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       7,    2,   65,    2, 0x06 /* Public */,
      10,    1,   70,    2, 0x06 /* Public */,
      12,    1,   73,    2, 0x06 /* Public */,
      13,    1,   76,    2, 0x06 /* Public */,
      15,    2,   79,    2, 0x06 /* Public */,
      17,    4,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    1,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    8,    9,
    QMetaType::Void, QMetaType::Float,   11,
    QMetaType::Void, QMetaType::Float,   11,
    QMetaType::Void, 0x80000000 | 14,    4,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QPointF,    4,   16,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Double, QMetaType::Double, QMetaType::Double,    4,   19,   20,   21,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,    4,

       0        // eod
};

void CGlWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CGlWidget *_t = static_cast<CGlWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedChanged((*reinterpret_cast< const std::vector<CRobotPose::Ptr>(*)>(_a[1]))); break;
        case 1: _t->zoomChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->mousePosChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->azimuthChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 4: _t->elevationChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 5: _t->deleteRobotPoses((*reinterpret_cast< const std::vector<size_t>(*)>(_a[1]))); break;
        case 6: _t->moveRobotPoses((*reinterpret_cast< const std::vector<size_t>(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2]))); break;
        case 7: _t->showPoseDirection((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 8: _t->updateSelectionWithoutSignals((*reinterpret_cast< const std::vector<size_t>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (CGlWidget::*_t)(const std::vector<CRobotPose::Ptr> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CGlWidget::selectedChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CGlWidget::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CGlWidget::zoomChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CGlWidget::*_t)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CGlWidget::mousePosChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CGlWidget::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CGlWidget::azimuthChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CGlWidget::*_t)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CGlWidget::elevationChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CGlWidget::*_t)(const std::vector<size_t> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CGlWidget::deleteRobotPoses)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (CGlWidget::*_t)(const std::vector<size_t> & , const QPointF & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CGlWidget::moveRobotPoses)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (CGlWidget::*_t)(size_t , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CGlWidget::showPoseDirection)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject CGlWidget::staticMetaObject = {
    { &mrpt::gui::CQtGlCanvasBase::staticMetaObject, qt_meta_stringdata_CGlWidget.data,
      qt_meta_data_CGlWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CGlWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CGlWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CGlWidget.stringdata0))
        return static_cast<void*>(this);
    return mrpt::gui::CQtGlCanvasBase::qt_metacast(_clname);
}

int CGlWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = mrpt::gui::CQtGlCanvasBase::qt_metacall(_c, _id, _a);
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
void CGlWidget::selectedChanged(const std::vector<CRobotPose::Ptr> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CGlWidget::zoomChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CGlWidget::mousePosChanged(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CGlWidget::azimuthChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CGlWidget::elevationChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CGlWidget::deleteRobotPoses(const std::vector<size_t> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CGlWidget::moveRobotPoses(const std::vector<size_t> & _t1, const QPointF & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CGlWidget::showPoseDirection(size_t _t1, double _t2, double _t3, double _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
