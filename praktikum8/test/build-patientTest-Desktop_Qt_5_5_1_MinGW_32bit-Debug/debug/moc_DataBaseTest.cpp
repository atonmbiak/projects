/****************************************************************************
** Meta object code from reading C++ file 'DataBaseTest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../patientTest/DataBaseTest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataBaseTest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DataBaseTest_t {
    QByteArrayData data[12];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataBaseTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataBaseTest_t qt_meta_stringdata_DataBaseTest = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DataBaseTest"
QT_MOC_LITERAL(1, 13, 12), // "initTestCase"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "init"
QT_MOC_LITERAL(4, 32, 22), // "createTablePatientTest"
QT_MOC_LITERAL(5, 55, 14), // "addPatientTest"
QT_MOC_LITERAL(6, 70, 15), // "readPatientTest"
QT_MOC_LITERAL(7, 86, 17), // "changePatientTest"
QT_MOC_LITERAL(8, 104, 18), // "readAllPatientTest"
QT_MOC_LITERAL(9, 123, 19), // "addPatientBenchmark"
QT_MOC_LITERAL(10, 143, 7), // "cleanup"
QT_MOC_LITERAL(11, 151, 15) // "cleanupTestCase"

    },
    "DataBaseTest\0initTestCase\0\0init\0"
    "createTablePatientTest\0addPatientTest\0"
    "readPatientTest\0changePatientTest\0"
    "readAllPatientTest\0addPatientBenchmark\0"
    "cleanup\0cleanupTestCase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataBaseTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

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

       0        // eod
};

void DataBaseTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DataBaseTest *_t = static_cast<DataBaseTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->init(); break;
        case 2: _t->createTablePatientTest(); break;
        case 3: _t->addPatientTest(); break;
        case 4: _t->readPatientTest(); break;
        case 5: _t->changePatientTest(); break;
        case 6: _t->readAllPatientTest(); break;
        case 7: _t->addPatientBenchmark(); break;
        case 8: _t->cleanup(); break;
        case 9: _t->cleanupTestCase(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DataBaseTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_DataBaseTest.data,
      qt_meta_data_DataBaseTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DataBaseTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataBaseTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DataBaseTest.stringdata0))
        return static_cast<void*>(const_cast< DataBaseTest*>(this));
    return QObject::qt_metacast(_clname);
}

int DataBaseTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
