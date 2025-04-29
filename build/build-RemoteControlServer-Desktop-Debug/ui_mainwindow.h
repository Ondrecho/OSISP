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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *information_groupBox;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *hostName_label;
    QLabel *hostName;
    QLabel *clientIP_label;
    QLabel *clientIP;
    QFormLayout *formLayout_2;
    QLabel *password_label;
    QLineEdit *password_lineEdit;
    QPushButton *turn_on_pushButton;
    QPushButton *turn_off_pushButton;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(326, 251);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../pictures/icons/server.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        information_groupBox = new QGroupBox(centralwidget);
        information_groupBox->setObjectName("information_groupBox");
        verticalLayout_2 = new QVBoxLayout(information_groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        hostName_label = new QLabel(information_groupBox);
        hostName_label->setObjectName("hostName_label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Mono")});
        font.setPointSize(14);
        hostName_label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, hostName_label);

        hostName = new QLabel(information_groupBox);
        hostName->setObjectName("hostName");

        formLayout->setWidget(0, QFormLayout::FieldRole, hostName);

        clientIP_label = new QLabel(information_groupBox);
        clientIP_label->setObjectName("clientIP_label");
        clientIP_label->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, clientIP_label);

        clientIP = new QLabel(information_groupBox);
        clientIP->setObjectName("clientIP");

        formLayout->setWidget(1, QFormLayout::FieldRole, clientIP);


        verticalLayout_2->addLayout(formLayout);


        verticalLayout->addWidget(information_groupBox);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        password_label = new QLabel(centralwidget);
        password_label->setObjectName("password_label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu Mono")});
        font1.setBold(true);
        password_label->setFont(font1);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, password_label);

        password_lineEdit = new QLineEdit(centralwidget);
        password_lineEdit->setObjectName("password_lineEdit");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, password_lineEdit);


        verticalLayout->addLayout(formLayout_2);

        turn_on_pushButton = new QPushButton(centralwidget);
        turn_on_pushButton->setObjectName("turn_on_pushButton");
        turn_on_pushButton->setAcceptDrops(false);
        turn_on_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(87, 227, 137)"));

        verticalLayout->addWidget(turn_on_pushButton);

        turn_off_pushButton = new QPushButton(centralwidget);
        turn_off_pushButton->setObjectName("turn_off_pushButton");
        turn_off_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(237, 51, 59)"));

        verticalLayout->addWidget(turn_off_pushButton);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 326, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        information_groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\272\320\273\320\270\320\265\320\275\321\202\320\265:", nullptr));
        hostName_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">\320\230\320\274\321\217 \321\205\320\276\321\201\321\202\320\260:</span></p></body></html>", nullptr));
        hostName->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">...</p></body></html>", nullptr));
        clientIP_label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">IP \320\272\320\273\320\270\320\265\320\275\321\202\320\260:</span></p></body></html>", nullptr));
        clientIP->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">...</p></body></html>", nullptr));
        password_label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        password_lineEdit->setText(QCoreApplication::translate("MainWindow", "qwerty", nullptr));
        turn_on_pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\320\272\320\273\321\216\321\207\320\270\321\202\321\214", nullptr));
        turn_off_pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\272\320\273\321\216\321\207\320\270\321\202\321\214", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
