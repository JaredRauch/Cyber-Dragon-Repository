/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminLogin
{
public:
    QGroupBox *groupBox;
    QLabel *label_validation;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_logout;
    QPushButton *pushButton;

    void setupUi(QDialog *adminLogin)
    {
        if (adminLogin->objectName().isEmpty())
            adminLogin->setObjectName(QStringLiteral("adminLogin"));
        adminLogin->resize(300, 181);
        groupBox = new QGroupBox(adminLogin);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 231, 111));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        label_validation = new QLabel(groupBox);
        label_validation->setObjectName(QStringLiteral("label_validation"));
        label_validation->setGeometry(QRect(20, 80, 121, 31));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        label_validation->setFont(font1);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 196, 48));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_username = new QLabel(layoutWidget);
        label_username->setObjectName(QStringLiteral("label_username"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_username);

        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_username);

        label_password = new QLabel(layoutWidget);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_password);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_password);

        pushButton_logout = new QPushButton(groupBox);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(140, 80, 81, 23));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 80, 81, 21));

        retranslateUi(adminLogin);
        QObject::connect(lineEdit_password, SIGNAL(returnPressed()), pushButton, SLOT(click()));

        QMetaObject::connectSlotsByName(adminLogin);
    } // setupUi

    void retranslateUi(QDialog *adminLogin)
    {
        adminLogin->setWindowTitle(QApplication::translate("adminLogin", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("adminLogin", "Admin Login", 0));
        label_validation->setText(QApplication::translate("adminLogin", "<html><head/><body><p><span style=\" color:#ff0000;\">*Invalid Credentials</span></p></body></html>", 0));
        label_username->setText(QApplication::translate("adminLogin", "Username: ", 0));
        label_password->setText(QApplication::translate("adminLogin", "Password:", 0));
        pushButton_logout->setText(QApplication::translate("adminLogin", "Logout", 0));
        pushButton->setText(QApplication::translate("adminLogin", "Login", 0));
    } // retranslateUi

};

namespace Ui {
    class adminLogin: public Ui_adminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
