/****************************************************************************
** Meta object code from reading C++ file 'Patient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../modules/patient/Patient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Patient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Patient_t {
    QByteArrayData data[11];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Patient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Patient_t qt_meta_stringdata_Patient = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Patient"
QT_MOC_LITERAL(1, 8, 9), // "idChanged"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 15), // "forenameChanged"
QT_MOC_LITERAL(4, 35, 17), // "familyNameChanged"
QT_MOC_LITERAL(5, 53, 18), // "DateofBirthChanged"
QT_MOC_LITERAL(6, 72, 11), // "DateofBirth"
QT_MOC_LITERAL(7, 84, 14), // "setDateofBirth"
QT_MOC_LITERAL(8, 99, 2), // "id"
QT_MOC_LITERAL(9, 102, 8), // "forename"
QT_MOC_LITERAL(10, 111, 10) // "familyName"

    },
    "Patient\0idChanged\0\0forenameChanged\0"
    "familyNameChanged\0DateofBirthChanged\0"
    "DateofBirth\0setDateofBirth\0id\0forename\0"
    "familyName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Patient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    6,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495103,
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::QString, 0x00495103,
       6, QMetaType::QDate, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Patient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Patient *_t = static_cast<Patient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->idChanged(); break;
        case 1: _t->forenameChanged(); break;
        case 2: _t->familyNameChanged(); break;
        case 3: _t->DateofBirthChanged((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        case 4: _t->setDateofBirth((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Patient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Patient::idChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Patient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Patient::forenameChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Patient::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Patient::familyNameChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (Patient::*_t)(QDate );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Patient::DateofBirthChanged)) {
                *result = 3;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Patient *_t = static_cast<Patient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->forename(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->familyName(); break;
        case 3: *reinterpret_cast< QDate*>(_v) = _t->DateofBirth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Patient *_t = static_cast<Patient *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setForename(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setFamilyName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDateofBirth(*reinterpret_cast< QDate*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Patient::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Patient.data,
      qt_meta_data_Patient,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Patient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Patient::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Patient.stringdata0))
        return static_cast<void*>(const_cast< Patient*>(this));
    return QObject::qt_metacast(_clname);
}

int Patient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Patient::idChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Patient::forenameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Patient::familyNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Patient::DateofBirthChanged(QDate _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
