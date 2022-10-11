/****************************************************************************
** Meta object code from reading C++ file 'signupClass.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../signupClass.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'signupClass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_signupClass_t {
    uint offsetsAndSizes[12];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[13];
    char stringdata5[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_signupClass_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_signupClass_t qt_meta_stringdata_signupClass = {
    {
        QT_MOC_LITERAL(0, 11),  // "signupClass"
        QT_MOC_LITERAL(12, 11),  // "signup_done"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 18),  // "check_duplicate_id"
        QT_MOC_LITERAL(44, 12),  // "text_changed"
        QT_MOC_LITERAL(57, 11)   // "pw_showhide"
    },
    "signupClass",
    "signup_done",
    "",
    "check_duplicate_id",
    "text_changed",
    "pw_showhide"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_signupClass[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    0,   39,    2, 0x0a,    2 /* Public */,
       4,    0,   40,    2, 0x0a,    3 /* Public */,
       5,    0,   41,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject signupClass::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_signupClass.offsetsAndSizes,
    qt_meta_data_signupClass,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_signupClass_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<signupClass, std::true_type>,
        // method 'signup_done'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'check_duplicate_id'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'text_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pw_showhide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void signupClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<signupClass *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signup_done(); break;
        case 1: _t->check_duplicate_id(); break;
        case 2: _t->text_changed(); break;
        case 3: _t->pw_showhide(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *signupClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *signupClass::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_signupClass.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int signupClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
