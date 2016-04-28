/****************************************************************************
** Meta object code from reading C++ file 'xframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../xframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_XFrame_t {
    QByteArrayData data[7];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XFrame_t qt_meta_stringdata_XFrame = {
    {
QT_MOC_LITERAL(0, 0, 6), // "XFrame"
QT_MOC_LITERAL(1, 7, 18), // "slotOnRemoveSubTab"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "tabIndex"
QT_MOC_LITERAL(4, 36, 16), // "slotOnDotriggerd"
QT_MOC_LITERAL(5, 53, 8), // "QAction*"
QT_MOC_LITERAL(6, 62, 6) // "action"

    },
    "XFrame\0slotOnRemoveSubTab\0\0tabIndex\0"
    "slotOnDotriggerd\0QAction*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void XFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XFrame *_t = static_cast<XFrame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotOnRemoveSubTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slotOnDotriggerd((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject XFrame::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_XFrame.data,
      qt_meta_data_XFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *XFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_XFrame.stringdata0))
        return static_cast<void*>(const_cast< XFrame*>(this));
    if (!strcmp(_clname, "XBaseIOC<IIoc>"))
        return static_cast< XBaseIOC<IIoc>*>(const_cast< XFrame*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int XFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
