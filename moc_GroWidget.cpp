/****************************************************************************
** Meta object code from reading C++ file 'GroWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "GroWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GroWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GroWidget_t {
    QByteArrayData data[10];
    char stringdata[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GroWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GroWidget_t qt_meta_stringdata_GroWidget = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 14),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 3),
QT_MOC_LITERAL(4, 30, 5),
QT_MOC_LITERAL(5, 36, 12),
QT_MOC_LITERAL(6, 49, 5),
QT_MOC_LITERAL(7, 55, 17),
QT_MOC_LITERAL(8, 73, 11),
QT_MOC_LITERAL(9, 85, 11)
    },
    "GroWidget\0messageFromGro\0\0msg\0clear\0"
    "updatePixmap\0image\0handleStateChange\0"
    "passMessage\0std::string\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GroWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06,
       1,    1,   49,    2, 0x26,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x08,
       7,    0,   55,    2, 0x08,
       8,    2,   56,    2, 0x08,
       8,    1,   61,    2, 0x28,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,    3,    4,
    QMetaType::Void, 0x80000000 | 9,    3,

       0        // eod
};

void GroWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GroWidget *_t = static_cast<GroWidget *>(_o);
        switch (_id) {
        case 0: _t->messageFromGro((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->messageFromGro((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->updatePixmap((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 3: _t->handleStateChange(); break;
        case 4: _t->passMessage((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 5: _t->passMessage((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GroWidget::*_t)(QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GroWidget::messageFromGro)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject GroWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GroWidget.data,
      qt_meta_data_GroWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *GroWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GroWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GroWidget.stringdata))
        return static_cast<void*>(const_cast< GroWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int GroWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GroWidget::messageFromGro(QString _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
