/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSales_Pitch;
    QAction *actionConcept_of_operations;
    QAction *actionService_options;
    QAction *actionMaintenance_plan;
    QAction *actionGuarantee_Policy;
    QAction *actionCustomer_Testimonials;
    QAction *actionRequest_Pamphlet;
    QAction *actionOrder_Products;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label_validation;
    QPushButton *pushButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_logout;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuCustomer;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(745, 465);
        actionSales_Pitch = new QAction(MainWindow);
        actionSales_Pitch->setObjectName(QStringLiteral("actionSales_Pitch"));
        actionConcept_of_operations = new QAction(MainWindow);
        actionConcept_of_operations->setObjectName(QStringLiteral("actionConcept_of_operations"));
        actionService_options = new QAction(MainWindow);
        actionService_options->setObjectName(QStringLiteral("actionService_options"));
        actionMaintenance_plan = new QAction(MainWindow);
        actionMaintenance_plan->setObjectName(QStringLiteral("actionMaintenance_plan"));
        actionGuarantee_Policy = new QAction(MainWindow);
        actionGuarantee_Policy->setObjectName(QStringLiteral("actionGuarantee_Policy"));
        actionCustomer_Testimonials = new QAction(MainWindow);
        actionCustomer_Testimonials->setObjectName(QStringLiteral("actionCustomer_Testimonials"));
        actionRequest_Pamphlet = new QAction(MainWindow);
        actionRequest_Pamphlet->setObjectName(QStringLiteral("actionRequest_Pamphlet"));
        actionOrder_Products = new QAction(MainWindow);
        actionOrder_Products->setObjectName(QStringLiteral("actionOrder_Products"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(490, 0, 251, 151));
        label_validation = new QLabel(groupBox);
        label_validation->setObjectName(QStringLiteral("label_validation"));
        label_validation->setGeometry(QRect(20, 80, 121, 31));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 80, 81, 21));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 196, 48));
        formLayout = new QFormLayout(widget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_username = new QLabel(widget);
        label_username->setObjectName(QStringLiteral("label_username"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_username);

        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_username);

        label_password = new QLabel(widget);
        label_password->setObjectName(QStringLiteral("label_password"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_password);

        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_password);

        pushButton_logout = new QPushButton(centralWidget);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(630, 80, 81, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 745, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuCustomer = new QMenu(menuBar);
        menuCustomer->setObjectName(QStringLiteral("menuCustomer"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuCustomer->menuAction());
        menuCustomer->addAction(actionSales_Pitch);
        menuCustomer->addAction(actionConcept_of_operations);
        menuCustomer->addAction(actionService_options);
        menuCustomer->addAction(actionMaintenance_plan);
        menuCustomer->addAction(actionGuarantee_Policy);
        menuCustomer->addAction(actionCustomer_Testimonials);
        menuCustomer->addAction(actionRequest_Pamphlet);
        menuCustomer->addAction(actionOrder_Products);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionSales_Pitch->setText(QApplication::translate("MainWindow", "Sales Pitch", 0));
        actionConcept_of_operations->setText(QApplication::translate("MainWindow", "Concept of Operations", 0));
        actionService_options->setText(QApplication::translate("MainWindow", "Service Options", 0));
        actionMaintenance_plan->setText(QApplication::translate("MainWindow", "Maintenance Plan", 0));
        actionGuarantee_Policy->setText(QApplication::translate("MainWindow", "Guarantee Policy", 0));
        actionCustomer_Testimonials->setText(QApplication::translate("MainWindow", "Customer Testimonials", 0));
        actionRequest_Pamphlet->setText(QApplication::translate("MainWindow", "Request Pamphlet", 0));
        actionOrder_Products->setText(QApplication::translate("MainWindow", "Order Products", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Login", 0));
        label_validation->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*Invalid Credentials</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Login", 0));
        label_username->setText(QApplication::translate("MainWindow", "Username: ", 0));
        label_password->setText(QApplication::translate("MainWindow", "Password:", 0));
        pushButton_logout->setText(QApplication::translate("MainWindow", "Logout", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuCustomer->setTitle(QApplication::translate("MainWindow", "Customer", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
