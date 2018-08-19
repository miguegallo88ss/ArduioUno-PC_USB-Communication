/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout_2;
    QAction *actionExit;
    QAction *baud_9600;
    QAction *baud_300;
    QAction *baud_1200;
    QAction *baud_2400;
    QAction *baud_4800;
    QAction *baud_19200;
    QAction *baud_38400;
    QAction *baud_57600;
    QAction *baud_115200;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuBud_Rate;
    QMenu *menuView;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(636, 474);
        actionAbout_2 = new QAction(MainWindow);
        actionAbout_2->setObjectName(QStringLiteral("actionAbout_2"));
        QIcon icon;
        icon.addFile(QStringLiteral("resource/quation_symbol.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_2->setIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/rec/resource/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        baud_9600 = new QAction(MainWindow);
        baud_9600->setObjectName(QStringLiteral("baud_9600"));
        baud_300 = new QAction(MainWindow);
        baud_300->setObjectName(QStringLiteral("baud_300"));
        baud_1200 = new QAction(MainWindow);
        baud_1200->setObjectName(QStringLiteral("baud_1200"));
        baud_2400 = new QAction(MainWindow);
        baud_2400->setObjectName(QStringLiteral("baud_2400"));
        baud_4800 = new QAction(MainWindow);
        baud_4800->setObjectName(QStringLiteral("baud_4800"));
        baud_19200 = new QAction(MainWindow);
        baud_19200->setObjectName(QStringLiteral("baud_19200"));
        baud_38400 = new QAction(MainWindow);
        baud_38400->setObjectName(QStringLiteral("baud_38400"));
        baud_57600 = new QAction(MainWindow);
        baud_57600->setObjectName(QStringLiteral("baud_57600"));
        baud_115200 = new QAction(MainWindow);
        baud_115200->setObjectName(QStringLiteral("baud_115200"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 636, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuBud_Rate = new QMenu(menuFile);
        menuBud_Rate->setObjectName(QStringLiteral("menuBud_Rate"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/rec/resource/bud_rate.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        menuBud_Rate->setIcon(icon2);
        menuBud_Rate->setSeparatorsCollapsible(false);
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(menuBud_Rate->menuAction());
        menuFile->addAction(actionAbout_2);
        menuFile->addAction(actionExit);
        menuBud_Rate->addSeparator();
        menuBud_Rate->addAction(baud_300);
        menuBud_Rate->addAction(baud_1200);
        menuBud_Rate->addAction(baud_2400);
        menuBud_Rate->addAction(baud_4800);
        menuBud_Rate->addAction(baud_9600);
        menuBud_Rate->addAction(baud_19200);
        menuBud_Rate->addAction(baud_38400);
        menuBud_Rate->addAction(baud_57600);
        menuBud_Rate->addAction(baud_115200);
        menuView->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout_2->setText(QApplication::translate("MainWindow", "About", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        baud_9600->setText(QApplication::translate("MainWindow", "9600", nullptr));
        baud_300->setText(QApplication::translate("MainWindow", "300", nullptr));
        baud_1200->setText(QApplication::translate("MainWindow", "1200", nullptr));
        baud_2400->setText(QApplication::translate("MainWindow", "2400", nullptr));
        baud_4800->setText(QApplication::translate("MainWindow", "4800", nullptr));
        baud_19200->setText(QApplication::translate("MainWindow", "19200", nullptr));
        baud_38400->setText(QApplication::translate("MainWindow", "38400", nullptr));
        baud_57600->setText(QApplication::translate("MainWindow", "57600", nullptr));
        baud_115200->setText(QApplication::translate("MainWindow", "115200", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuBud_Rate->setTitle(QApplication::translate("MainWindow", "Baud Rate", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
