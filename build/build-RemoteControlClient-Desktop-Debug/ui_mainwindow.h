/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionSettings;
    QAction *actionConnect_to_server;
    QAction *actionDisconnect_from_the_server;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *remoteScreen_label;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuConnection;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1920, 1080);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../pictures/icons/client.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName("actionSettings");
        actionConnect_to_server = new QAction(MainWindow);
        actionConnect_to_server->setObjectName("actionConnect_to_server");
        actionDisconnect_from_the_server = new QAction(MainWindow);
        actionDisconnect_from_the_server->setObjectName("actionDisconnect_from_the_server");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        remoteScreen_label = new QLabel(centralwidget);
        remoteScreen_label->setObjectName("remoteScreen_label");
        remoteScreen_label->setEnabled(true);

        verticalLayout->addWidget(remoteScreen_label);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1920, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        menuConnection = new QMenu(menubar);
        menuConnection->setObjectName("menuConnection");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::BottomToolBarArea, toolBar);

        menubar->addAction(menuMenu->menuAction());
        menubar->addAction(menuConnection->menuAction());
        menuMenu->addAction(actionSettings);
        menuMenu->addAction(actionExit);
        menuConnection->addAction(actionConnect_to_server);
        menuConnection->addAction(actionDisconnect_from_the_server);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        actionConnect_to_server->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\321\201\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214\321\201\321\217 \320\272 \321\201\320\265\321\200\320\262\320\265\321\200\321\203", nullptr));
        actionDisconnect_from_the_server->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\201\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214\321\201\321\217 \320\276\321\202 \321\201\320\265\321\200\320\262\320\265\321\200\320\260", nullptr));
        remoteScreen_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-style:italic;\">(\320\234\320\265\321\201\321\202\320\276 \320\264\320\273\321\217 \321\203\320\264\320\260\320\273\320\265\320\275\320\275\320\276\320\263\320\276 \321\215\320\272\321\200\320\260\320\275\320\260)</span></p></body></html>", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
        menuConnection->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\262\321\217\320\267\321\214", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
