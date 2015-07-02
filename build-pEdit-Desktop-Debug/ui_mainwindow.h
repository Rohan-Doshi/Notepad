/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionQuit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionView_Help;
    QAction *actionAbout_QtPad;
    QAction *actionFIND;
    QAction *actionReplace;
    QAction *actionGoto_Line;
    QWidget *centralWidget;
    QPlainTextEdit *txtedit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QMenu *menuFIND;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QPushButton *btnfindprev;
    QPushButton *btnfindnext;
    QLineEdit *txtfind;
    QDockWidget *dockWidget_2;
    QWidget *dockWidgetContents_2;
    QLineEdit *txtreplace1;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *txtreplace2;
    QPushButton *btnreplaceprev;
    QPushButton *btnreplacenext;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(953, 369);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/editcopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon3);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/image/editpaste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon4);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/image/editcut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon5);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/image/editundo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon6);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/image/editredo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon7);
        actionView_Help = new QAction(MainWindow);
        actionView_Help->setObjectName(QStringLiteral("actionView_Help"));
        actionAbout_QtPad = new QAction(MainWindow);
        actionAbout_QtPad->setObjectName(QStringLiteral("actionAbout_QtPad"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/image/qt-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_QtPad->setIcon(icon8);
        actionFIND = new QAction(MainWindow);
        actionFIND->setObjectName(QStringLiteral("actionFIND"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/image/search_b.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFIND->setIcon(icon9);
        actionReplace = new QAction(MainWindow);
        actionReplace->setObjectName(QStringLiteral("actionReplace"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/image/replace.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReplace->setIcon(icon10);
        actionGoto_Line = new QAction(MainWindow);
        actionGoto_Line->setObjectName(QStringLiteral("actionGoto_Line"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        txtedit = new QPlainTextEdit(centralWidget);
        txtedit->setObjectName(QStringLiteral("txtedit"));
        txtedit->setGeometry(QRect(0, 10, 711, 231));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 953, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuFIND = new QMenu(menuBar);
        menuFIND->setObjectName(QStringLiteral("menuFIND"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(250);
        sizePolicy.setVerticalStretch(250);
        sizePolicy.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy);
        dockWidget->setMinimumSize(QSize(73, 50));
        dockWidget->setMaximumSize(QSize(350, 200));
        dockWidget->setBaseSize(QSize(250, 250));
        dockWidget->setLayoutDirection(Qt::LeftToRight);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        btnfindprev = new QPushButton(dockWidgetContents);
        btnfindprev->setObjectName(QStringLiteral("btnfindprev"));
        btnfindprev->setGeometry(QRect(230, 0, 41, 26));
        btnfindnext = new QPushButton(dockWidgetContents);
        btnfindnext->setObjectName(QStringLiteral("btnfindnext"));
        btnfindnext->setGeometry(QRect(270, 0, 41, 26));
        txtfind = new QLineEdit(dockWidgetContents);
        txtfind->setObjectName(QStringLiteral("txtfind"));
        txtfind->setGeometry(QRect(2, 0, 231, 27));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(4), dockWidget);
        dockWidget_2 = new QDockWidget(MainWindow);
        dockWidget_2->setObjectName(QStringLiteral("dockWidget_2"));
        sizePolicy.setHeightForWidth(dockWidget_2->sizePolicy().hasHeightForWidth());
        dockWidget_2->setSizePolicy(sizePolicy);
        dockWidget_2->setMinimumSize(QSize(73, 50));
        dockWidget_2->setMaximumSize(QSize(525, 200));
        dockWidget_2->setBaseSize(QSize(200, 200));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        txtreplace1 = new QLineEdit(dockWidgetContents_2);
        txtreplace1->setObjectName(QStringLiteral("txtreplace1"));
        txtreplace1->setGeometry(QRect(60, 0, 171, 27));
        label = new QLabel(dockWidgetContents_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 61, 21));
        label_2 = new QLabel(dockWidgetContents_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 0, 31, 21));
        txtreplace2 = new QLineEdit(dockWidgetContents_2);
        txtreplace2->setObjectName(QStringLiteral("txtreplace2"));
        txtreplace2->setGeometry(QRect(280, 0, 151, 27));
        btnreplaceprev = new QPushButton(dockWidgetContents_2);
        btnreplaceprev->setObjectName(QStringLiteral("btnreplaceprev"));
        btnreplaceprev->setGeometry(QRect(430, 0, 41, 26));
        btnreplacenext = new QPushButton(dockWidgetContents_2);
        btnreplacenext->setObjectName(QStringLiteral("btnreplacenext"));
        btnreplacenext->setGeometry(QRect(470, 0, 41, 26));
        dockWidget_2->setWidget(dockWidgetContents_2);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(4), dockWidget_2);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuFIND->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuHelp->addAction(actionView_Help);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_QtPad);
        menuFIND->addAction(actionFIND);
        menuFIND->addAction(actionReplace);
        menuFIND->addAction(actionGoto_Line);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFIND);
        mainToolBar->addAction(actionReplace);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAbout_QtPad);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionNew->setText(QApplication::translate("MainWindow", "New ", 0));
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", 0));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "Save", 0));
#endif // QT_NO_TOOLTIP
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0));
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0));
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0));
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0));
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0));
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+Z", 0));
        actionView_Help->setText(QApplication::translate("MainWindow", "View Help", 0));
        actionView_Help->setShortcut(QApplication::translate("MainWindow", "F1", 0));
        actionAbout_QtPad->setText(QApplication::translate("MainWindow", "About QtPad", 0));
        actionFIND->setText(QApplication::translate("MainWindow", "Find", 0));
        actionFIND->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0));
        actionReplace->setText(QApplication::translate("MainWindow", "Replace", 0));
        actionReplace->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0));
        actionGoto_Line->setText(QApplication::translate("MainWindow", "Goto Line", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuFIND->setTitle(QApplication::translate("MainWindow", "Tools", 0));
        btnfindprev->setText(QApplication::translate("MainWindow", "<", 0));
        btnfindnext->setText(QApplication::translate("MainWindow", ">", 0));
        label->setText(QApplication::translate("MainWindow", "Replace", 0));
        label_2->setText(QApplication::translate("MainWindow", "with", 0));
        btnreplaceprev->setText(QApplication::translate("MainWindow", "<", 0));
        btnreplacenext->setText(QApplication::translate("MainWindow", ">", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
