/********************************************************************************
** Form generated from reading UI file 'addcustomerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCUSTOMERWINDOW_H
#define UI_ADDCUSTOMERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddCustomerWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *Customer_Label;
    QLineEdit *NameLineEdit;
    QLabel *label_3;
    QLabel *Street_Label;
    QLabel *City_Label;
    QLabel *label_2;
    QLabel *Zip_Label;
    QLineEdit *StreetLineEdit;
    QLineEdit *CityLineEdit;
    QComboBox *statecomboBox;
    QLineEdit *ZipLineEdit;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *acceptButton;
    QPushButton *rejectButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddCustomerWindow)
    {
        if (AddCustomerWindow->objectName().isEmpty())
            AddCustomerWindow->setObjectName(QStringLiteral("AddCustomerWindow"));
        AddCustomerWindow->resize(707, 389);
        centralwidget = new QWidget(AddCustomerWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 10, 251, 20));
        Customer_Label = new QLabel(centralwidget);
        Customer_Label->setObjectName(QStringLiteral("Customer_Label"));
        Customer_Label->setGeometry(QRect(10, 80, 121, 21));
        NameLineEdit = new QLineEdit(centralwidget);
        NameLineEdit->setObjectName(QStringLiteral("NameLineEdit"));
        NameLineEdit->setGeometry(QRect(140, 80, 541, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 150, 51, 16));
        Street_Label = new QLabel(centralwidget);
        Street_Label->setObjectName(QStringLiteral("Street_Label"));
        Street_Label->setGeometry(QRect(50, 190, 81, 16));
        City_Label = new QLabel(centralwidget);
        City_Label->setObjectName(QStringLiteral("City_Label"));
        City_Label->setGeometry(QRect(50, 220, 31, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 250, 31, 16));
        Zip_Label = new QLabel(centralwidget);
        Zip_Label->setObjectName(QStringLiteral("Zip_Label"));
        Zip_Label->setGeometry(QRect(50, 280, 31, 16));
        StreetLineEdit = new QLineEdit(centralwidget);
        StreetLineEdit->setObjectName(QStringLiteral("StreetLineEdit"));
        StreetLineEdit->setGeometry(QRect(140, 190, 471, 20));
        CityLineEdit = new QLineEdit(centralwidget);
        CityLineEdit->setObjectName(QStringLiteral("CityLineEdit"));
        CityLineEdit->setGeometry(QRect(140, 220, 331, 20));
        statecomboBox = new QComboBox(centralwidget);
        statecomboBox->setObjectName(QStringLiteral("statecomboBox"));
        statecomboBox->setGeometry(QRect(140, 250, 69, 22));
        ZipLineEdit = new QLineEdit(centralwidget);
        ZipLineEdit->setObjectName(QStringLiteral("ZipLineEdit"));
        ZipLineEdit->setGeometry(QRect(140, 280, 113, 20));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(490, 309, 201, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        acceptButton = new QPushButton(horizontalLayoutWidget);
        acceptButton->setObjectName(QStringLiteral("acceptButton"));
        acceptButton->setEnabled(true);

        horizontalLayout->addWidget(acceptButton);

        rejectButton = new QPushButton(horizontalLayoutWidget);
        rejectButton->setObjectName(QStringLiteral("rejectButton"));

        horizontalLayout->addWidget(rejectButton);

        AddCustomerWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddCustomerWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 707, 21));
        AddCustomerWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AddCustomerWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AddCustomerWindow->setStatusBar(statusbar);

        retranslateUi(AddCustomerWindow);

        QMetaObject::connectSlotsByName(AddCustomerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AddCustomerWindow)
    {
        AddCustomerWindow->setWindowTitle(QApplication::translate("AddCustomerWindow", "MainWindow", 0));
        label->setText(QApplication::translate("AddCustomerWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Please enter the information below</span></p></body></html>", 0));
        Customer_Label->setText(QApplication::translate("AddCustomerWindow", "Customer Entity Name:", 0));
        label_3->setText(QApplication::translate("AddCustomerWindow", "Address:", 0));
        Street_Label->setText(QApplication::translate("AddCustomerWindow", "Street Address:", 0));
        City_Label->setText(QApplication::translate("AddCustomerWindow", "City:", 0));
        label_2->setText(QApplication::translate("AddCustomerWindow", "State:", 0));
        Zip_Label->setText(QApplication::translate("AddCustomerWindow", "Zip:", 0));
        statecomboBox->clear();
        statecomboBox->insertItems(0, QStringList()
         << QApplication::translate("AddCustomerWindow", "AL", 0)
         << QApplication::translate("AddCustomerWindow", "AK", 0)
         << QApplication::translate("AddCustomerWindow", "AZ", 0)
         << QApplication::translate("AddCustomerWindow", "AR", 0)
         << QApplication::translate("AddCustomerWindow", "CA", 0)
         << QApplication::translate("AddCustomerWindow", "CO", 0)
         << QApplication::translate("AddCustomerWindow", "CT", 0)
         << QApplication::translate("AddCustomerWindow", "DE", 0)
         << QApplication::translate("AddCustomerWindow", "FL", 0)
         << QApplication::translate("AddCustomerWindow", "GA", 0)
         << QApplication::translate("AddCustomerWindow", "HI", 0)
         << QApplication::translate("AddCustomerWindow", "ID", 0)
         << QApplication::translate("AddCustomerWindow", "IL", 0)
         << QApplication::translate("AddCustomerWindow", "IN", 0)
         << QApplication::translate("AddCustomerWindow", "IA", 0)
         << QApplication::translate("AddCustomerWindow", "KS", 0)
         << QApplication::translate("AddCustomerWindow", "KY", 0)
         << QApplication::translate("AddCustomerWindow", "LA", 0)
         << QApplication::translate("AddCustomerWindow", "ME", 0)
         << QApplication::translate("AddCustomerWindow", "MD", 0)
         << QApplication::translate("AddCustomerWindow", "MA", 0)
         << QApplication::translate("AddCustomerWindow", "MI", 0)
         << QApplication::translate("AddCustomerWindow", "MN", 0)
         << QApplication::translate("AddCustomerWindow", "MS", 0)
         << QApplication::translate("AddCustomerWindow", "MO", 0)
         << QApplication::translate("AddCustomerWindow", "MT", 0)
         << QApplication::translate("AddCustomerWindow", "NE", 0)
         << QApplication::translate("AddCustomerWindow", "NV", 0)
         << QApplication::translate("AddCustomerWindow", "NH", 0)
         << QApplication::translate("AddCustomerWindow", "NJ", 0)
         << QApplication::translate("AddCustomerWindow", "NM", 0)
         << QApplication::translate("AddCustomerWindow", "NY", 0)
         << QApplication::translate("AddCustomerWindow", "NC", 0)
         << QApplication::translate("AddCustomerWindow", "ND", 0)
         << QApplication::translate("AddCustomerWindow", "OH", 0)
         << QApplication::translate("AddCustomerWindow", "OK", 0)
         << QApplication::translate("AddCustomerWindow", "OR", 0)
         << QApplication::translate("AddCustomerWindow", "PA", 0)
         << QApplication::translate("AddCustomerWindow", "RI", 0)
         << QApplication::translate("AddCustomerWindow", "SC", 0)
         << QApplication::translate("AddCustomerWindow", "SD", 0)
         << QApplication::translate("AddCustomerWindow", "TN", 0)
         << QApplication::translate("AddCustomerWindow", "TX", 0)
         << QApplication::translate("AddCustomerWindow", "UT", 0)
         << QApplication::translate("AddCustomerWindow", "VT", 0)
         << QApplication::translate("AddCustomerWindow", "VA", 0)
         << QApplication::translate("AddCustomerWindow", "WA", 0)
         << QApplication::translate("AddCustomerWindow", "WV", 0)
         << QApplication::translate("AddCustomerWindow", "WI", 0)
         << QApplication::translate("AddCustomerWindow", "WY", 0)
        );
        acceptButton->setText(QApplication::translate("AddCustomerWindow", "OK", 0));
        rejectButton->setText(QApplication::translate("AddCustomerWindow", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AddCustomerWindow: public Ui_AddCustomerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCUSTOMERWINDOW_H
