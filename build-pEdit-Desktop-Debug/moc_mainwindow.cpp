/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pEdit/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata[404];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 23),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 23),
QT_MOC_LITERAL(4, 60, 22),
QT_MOC_LITERAL(5, 83, 23),
QT_MOC_LITERAL(6, 107, 24),
QT_MOC_LITERAL(7, 132, 22),
QT_MOC_LITERAL(8, 155, 23),
QT_MOC_LITERAL(9, 179, 23),
QT_MOC_LITERAL(10, 203, 26),
QT_MOC_LITERAL(11, 230, 23),
QT_MOC_LITERAL(12, 254, 23),
QT_MOC_LITERAL(13, 278, 22),
QT_MOC_LITERAL(14, 301, 22),
QT_MOC_LITERAL(15, 324, 26),
QT_MOC_LITERAL(16, 351, 25),
QT_MOC_LITERAL(17, 377, 25)
    },
    "MainWindow\0on_actionCopy_triggered\0\0"
    "on_actionOpen_triggered\0on_actionNew_triggered\0"
    "on_actionRedo_triggered\0"
    "on_actionPaste_triggered\0"
    "on_actionCut_triggered\0on_actionUndo_triggered\0"
    "on_actionSave_triggered\0"
    "on_actionSave_as_triggered\0"
    "on_actionQuit_triggered\0on_actionFIND_triggered\0"
    "on_btnfindprev_clicked\0on_btnfindnext_clicked\0"
    "on_actionReplace_triggered\0"
    "on_btnreplaceprev_clicked\0"
    "on_btnreplacenext_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08,
       3,    0,   95,    2, 0x08,
       4,    0,   96,    2, 0x08,
       5,    0,   97,    2, 0x08,
       6,    0,   98,    2, 0x08,
       7,    0,   99,    2, 0x08,
       8,    0,  100,    2, 0x08,
       9,    0,  101,    2, 0x08,
      10,    0,  102,    2, 0x08,
      11,    0,  103,    2, 0x08,
      12,    0,  104,    2, 0x08,
      13,    0,  105,    2, 0x08,
      14,    0,  106,    2, 0x08,
      15,    0,  107,    2, 0x08,
      16,    0,  108,    2, 0x08,
      17,    0,  109,    2, 0x08,

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

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_actionCopy_triggered(); break;
        case 1: _t->on_actionOpen_triggered(); break;
        case 2: _t->on_actionNew_triggered(); break;
        case 3: _t->on_actionRedo_triggered(); break;
        case 4: _t->on_actionPaste_triggered(); break;
        case 5: _t->on_actionCut_triggered(); break;
        case 6: _t->on_actionUndo_triggered(); break;
        case 7: _t->on_actionSave_triggered(); break;
        case 8: _t->on_actionSave_as_triggered(); break;
        case 9: _t->on_actionQuit_triggered(); break;
        case 10: _t->on_actionFIND_triggered(); break;
        case 11: _t->on_btnfindprev_clicked(); break;
        case 12: _t->on_btnfindnext_clicked(); break;
        case 13: _t->on_actionReplace_triggered(); break;
        case 14: _t->on_btnreplaceprev_clicked(); break;
        case 15: _t->on_btnreplacenext_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
