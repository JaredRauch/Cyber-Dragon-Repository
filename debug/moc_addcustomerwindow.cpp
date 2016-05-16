/****************************************************************************
** Meta object code from reading C++ file 'addcustomerwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../addcustomerwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addcustomerwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddCustomerWindow_t {
    QByteArrayData data[12];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddCustomerWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddCustomerWindow_t qt_meta_stringdata_AddCustomerWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AddCustomerWindow"
QT_MOC_LITERAL(1, 18, 11), // "SetCustomer"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "customer"
QT_MOC_LITERAL(4, 40, 8), // "streetAd"
QT_MOC_LITERAL(5, 49, 6), // "cityAd"
QT_MOC_LITERAL(6, 56, 3), // "Zip"
QT_MOC_LITERAL(7, 60, 23), // "on_rejectButton_clicked"
QT_MOC_LITERAL(8, 84, 23), // "on_acceptButton_clicked"
QT_MOC_LITERAL(9, 108, 31), // "on_not_interested_radio_clicked"
QT_MOC_LITERAL(10, 140, 32), // "on_some_interested_radio_clicked"
QT_MOC_LITERAL(11, 173, 32) // "on_very_interested_radio_clicked"

    },
    "AddCustomerWindow\0SetCustomer\0\0customer\0"
    "streetAd\0cityAd\0Zip\0on_rejectButton_clicked\0"
    "on_acceptButton_clicked\0"
    "on_not_interested_radio_clicked\0"
    "on_some_interested_radio_clicked\0"
    "on_very_interested_radio_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddCustomerWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   53,    2, 0x08 /* Private */,
       8,    0,   54,    2, 0x08 /* Private */,
       9,    0,   55,    2, 0x08 /* Private */,
      10,    0,   56,    2, 0x08 /* Private */,
      11,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddCustomerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddCustomerWindow *_t = static_cast<AddCustomerWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetCustomer((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: _t->on_rejectButton_clicked(); break;
        case 2: _t->on_acceptButton_clicked(); break;
        case 3: _t->on_not_interested_radio_clicked(); break;
        case 4: _t->on_some_interested_radio_clicked(); break;
        case 5: _t->on_very_interested_radio_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddCustomerWindow::*_t)(QString , QString , QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddCustomerWindow::SetCustomer)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject AddCustomerWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_AddCustomerWindow.data,
      qt_meta_data_AddCustomerWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddCustomerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddCustomerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddCustomerWindow.stringdata0))
        return static_cast<void*>(const_cast< AddCustomerWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int AddCustomerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void AddCustomerWindow::SetCustomer(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
