/****************************************************************************
** Meta object code from reading C++ file 'mywindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mywindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mywindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyWindow_t {
    QByteArrayData data[19];
    char stringdata[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyWindow_t qt_meta_stringdata_MyWindow = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 8),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 5),
QT_MOC_LITERAL(4, 25, 12),
QT_MOC_LITERAL(5, 38, 12),
QT_MOC_LITERAL(6, 51, 12),
QT_MOC_LITERAL(7, 64, 13),
QT_MOC_LITERAL(8, 78, 13),
QT_MOC_LITERAL(9, 92, 14),
QT_MOC_LITERAL(10, 107, 14),
QT_MOC_LITERAL(11, 122, 14),
QT_MOC_LITERAL(12, 137, 14),
QT_MOC_LITERAL(13, 152, 14),
QT_MOC_LITERAL(14, 167, 14),
QT_MOC_LITERAL(15, 182, 11),
QT_MOC_LITERAL(16, 194, 9),
QT_MOC_LITERAL(17, 204, 4),
QT_MOC_LITERAL(18, 209, 4)
    },
    "MyWindow\0msgClick\0\0clear\0menu_first_1\0"
    "menu_first_2\0menu_first_3\0menu_second_1\0"
    "menu_second_2\0menu_third_1_1\0"
    "menu_third_1_2\0menu_third_2_1\0"
    "menu_third_2_2\0menu_third_3_1\0"
    "menu_third_3_2\0menu_fourth\0menu_exit\0"
    "help\0test"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    0,  107,    2, 0x08 /* Private */,
      11,    0,  108,    2, 0x08 /* Private */,
      12,    0,  109,    2, 0x08 /* Private */,
      13,    0,  110,    2, 0x08 /* Private */,
      14,    0,  111,    2, 0x08 /* Private */,
      15,    0,  112,    2, 0x08 /* Private */,
      16,    0,  113,    2, 0x08 /* Private */,
      17,    0,  114,    2, 0x08 /* Private */,
      18,    0,  115,    2, 0x08 /* Private */,

 // slots: parameters
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

       0        // eod
};

void MyWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyWindow *_t = static_cast<MyWindow *>(_o);
        switch (_id) {
        case 0: _t->msgClick(); break;
        case 1: _t->clear(); break;
        case 2: _t->menu_first_1(); break;
        case 3: _t->menu_first_2(); break;
        case 4: _t->menu_first_3(); break;
        case 5: _t->menu_second_1(); break;
        case 6: _t->menu_second_2(); break;
        case 7: _t->menu_third_1_1(); break;
        case 8: _t->menu_third_1_2(); break;
        case 9: _t->menu_third_2_1(); break;
        case 10: _t->menu_third_2_2(); break;
        case 11: _t->menu_third_3_1(); break;
        case 12: _t->menu_third_3_2(); break;
        case 13: _t->menu_fourth(); break;
        case 14: _t->menu_exit(); break;
        case 15: _t->help(); break;
        case 16: _t->test(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MyWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MyWindow.data,
      qt_meta_data_MyWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MyWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyWindow.stringdata))
        return static_cast<void*>(const_cast< MyWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MyWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_DataThreadQ3_t {
    QByteArrayData data[1];
    char stringdata[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataThreadQ3_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataThreadQ3_t qt_meta_stringdata_DataThreadQ3 = {
    {
QT_MOC_LITERAL(0, 0, 12)
    },
    "DataThreadQ3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataThreadQ3[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DataThreadQ3::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DataThreadQ3::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DataThreadQ3.data,
      qt_meta_data_DataThreadQ3,  qt_static_metacall, 0, 0}
};


const QMetaObject *DataThreadQ3::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataThreadQ3::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataThreadQ3.stringdata))
        return static_cast<void*>(const_cast< DataThreadQ3*>(this));
    return QThread::qt_metacast(_clname);
}

int DataThreadQ3::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_DataThreadQ2_t {
    QByteArrayData data[1];
    char stringdata[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataThreadQ2_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataThreadQ2_t qt_meta_stringdata_DataThreadQ2 = {
    {
QT_MOC_LITERAL(0, 0, 12)
    },
    "DataThreadQ2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataThreadQ2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DataThreadQ2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DataThreadQ2::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DataThreadQ2.data,
      qt_meta_data_DataThreadQ2,  qt_static_metacall, 0, 0}
};


const QMetaObject *DataThreadQ2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataThreadQ2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataThreadQ2.stringdata))
        return static_cast<void*>(const_cast< DataThreadQ2*>(this));
    return QThread::qt_metacast(_clname);
}

int DataThreadQ2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_DataThreadQ4_t {
    QByteArrayData data[1];
    char stringdata[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataThreadQ4_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataThreadQ4_t qt_meta_stringdata_DataThreadQ4 = {
    {
QT_MOC_LITERAL(0, 0, 12)
    },
    "DataThreadQ4"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataThreadQ4[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void DataThreadQ4::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject DataThreadQ4::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_DataThreadQ4.data,
      qt_meta_data_DataThreadQ4,  qt_static_metacall, 0, 0}
};


const QMetaObject *DataThreadQ4::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataThreadQ4::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DataThreadQ4.stringdata))
        return static_cast<void*>(const_cast< DataThreadQ4*>(this));
    return QThread::qt_metacast(_clname);
}

int DataThreadQ4::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
