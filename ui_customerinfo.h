/********************************************************************************
** Form generated from reading UI file 'customerinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERINFO_H
#define UI_CUSTOMERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerInfo
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *nameLabel;
    QTableWidget *tableWidget;
    QLabel *addressLabel;
    QLabel *interestLabel;
    QLabel *isKeyLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CustomerInfo)
    {
        if (CustomerInfo->objectName().isEmpty())
            CustomerInfo->setObjectName(QStringLiteral("CustomerInfo"));
        CustomerInfo->resize(576, 384);
        centralwidget = new QWidget(CustomerInfo);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 551, 321));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 549, 319));
        nameLabel = new QLabel(scrollAreaWidgetContents);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(0, 0, 551, 16));
        nameLabel->setAlignment(Qt::AlignCenter);
        tableWidget = new QTableWidget(scrollAreaWidgetContents);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 81, 551, 241));
        addressLabel = new QLabel(scrollAreaWidgetContents);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));
        addressLabel->setGeometry(QRect(0, 20, 551, 41));
        addressLabel->setAlignment(Qt::AlignCenter);
        interestLabel = new QLabel(scrollAreaWidgetContents);
        interestLabel->setObjectName(QStringLiteral("interestLabel"));
        interestLabel->setGeometry(QRect(0, 60, 281, 21));
        interestLabel->setAlignment(Qt::AlignCenter);
        isKeyLabel = new QLabel(scrollAreaWidgetContents);
        isKeyLabel->setObjectName(QStringLiteral("isKeyLabel"));
        isKeyLabel->setGeometry(QRect(290, 60, 261, 21));
        isKeyLabel->setAlignment(Qt::AlignCenter);
        scrollArea->setWidget(scrollAreaWidgetContents);
        CustomerInfo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CustomerInfo);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 576, 25));
        CustomerInfo->setMenuBar(menubar);
        statusbar = new QStatusBar(CustomerInfo);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CustomerInfo->setStatusBar(statusbar);

        retranslateUi(CustomerInfo);

        QMetaObject::connectSlotsByName(CustomerInfo);
    } // setupUi

    void retranslateUi(QMainWindow *CustomerInfo)
    {
        CustomerInfo->setWindowTitle(QApplication::translate("CustomerInfo", "MainWindow", 0));
        nameLabel->setText(QString());
        addressLabel->setText(QString());
        interestLabel->setText(QString());
        isKeyLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CustomerInfo: public Ui_CustomerInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERINFO_H
