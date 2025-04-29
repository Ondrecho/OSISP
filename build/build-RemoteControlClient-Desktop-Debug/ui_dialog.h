/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *IP_label;
    QLineEdit *IP_lineEdit;
    QLabel *IP_label_2;
    QLineEdit *password_lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(307, 151);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 287, 131));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        IP_label = new QLabel(layoutWidget);
        IP_label->setObjectName("IP_label");

        formLayout->setWidget(0, QFormLayout::LabelRole, IP_label);

        IP_lineEdit = new QLineEdit(layoutWidget);
        IP_lineEdit->setObjectName("IP_lineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, IP_lineEdit);

        IP_label_2 = new QLabel(layoutWidget);
        IP_label_2->setObjectName("IP_label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, IP_label_2);

        password_lineEdit = new QLineEdit(layoutWidget);
        password_lineEdit->setObjectName("password_lineEdit");

        formLayout->setWidget(1, QFormLayout::FieldRole, password_lineEdit);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(2, QFormLayout::FieldRole, buttonBox);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        IP_label->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:704;\">IP \321\201\320\265\321\200\320\262\320\265\321\200\320\260</span></p></body></html>", nullptr));
        IP_lineEdit->setText(QCoreApplication::translate("Dialog", "127.0.0.1", nullptr));
        IP_label_2->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-weight:704;\">\320\237\320\260\321\200\320\276\320\273\321\214</span></p></body></html>", nullptr));
        password_lineEdit->setText(QCoreApplication::translate("Dialog", "qwerty", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
