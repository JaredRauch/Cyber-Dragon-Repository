/********************************************************************************
** Form generated from reading UI file 'customerlist.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERLIST_H
#define UI_CUSTOMERLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerList
{
public:
    QWidget *centralWidget;
    QTableWidget *CustomerWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *AddButton;
    QPushButton *InfoButton;
    QPushButton *EditButton;
    QPushButton *RemoveButton;
    QPushButton *pushButton;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *CustomerList)
    {
        if (CustomerList->objectName().isEmpty())
            CustomerList->setObjectName(QStringLiteral("CustomerList"));
        CustomerList->resize(1119, 641);
        centralWidget = new QWidget(CustomerList);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        CustomerWidget = new QTableWidget(centralWidget);
        if (CustomerWidget->columnCount() < 3)
            CustomerWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        CustomerWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        CustomerWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        CustomerWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        CustomerWidget->setObjectName(QStringLiteral("CustomerWidget"));
        CustomerWidget->setGeometry(QRect(10, 10, 1091, 491));
        CustomerWidget->setRowCount(0);
        CustomerWidget->horizontalHeader()->setCascadingSectionResizes(false);
        CustomerWidget->horizontalHeader()->setDefaultSectionSize(150);
        CustomerWidget->verticalHeader()->setVisible(false);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(130, 510, 841, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        AddButton = new QPushButton(horizontalLayoutWidget);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setEnabled(true);

        horizontalLayout->addWidget(AddButton);

        InfoButton = new QPushButton(horizontalLayoutWidget);
        InfoButton->setObjectName(QStringLiteral("InfoButton"));
        InfoButton->setEnabled(false);

        horizontalLayout->addWidget(InfoButton);

        EditButton = new QPushButton(horizontalLayoutWidget);
        EditButton->setObjectName(QStringLiteral("EditButton"));
        EditButton->setEnabled(false);

        horizontalLayout->addWidget(EditButton);

        RemoveButton = new QPushButton(horizontalLayoutWidget);
        RemoveButton->setObjectName(QStringLiteral("RemoveButton"));

        horizontalLayout->addWidget(RemoveButton);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 520, 75, 23));
        CustomerList->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(CustomerList);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CustomerList->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CustomerList);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CustomerList->setStatusBar(statusBar);
        menuBar = new QMenuBar(CustomerList);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1119, 21));
        CustomerList->setMenuBar(menuBar);

        retranslateUi(CustomerList);

        QMetaObject::connectSlotsByName(CustomerList);
    } // setupUi

    void retranslateUi(QMainWindow *CustomerList)
    {
        CustomerList->setWindowTitle(QApplication::translate("CustomerList", "CustomerList", 0));
        QTableWidgetItem *___qtablewidgetitem = CustomerWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CustomerList", "Customer", 0));
        QTableWidgetItem *___qtablewidgetitem1 = CustomerWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CustomerList", "Interest Level", 0));
        QTableWidgetItem *___qtablewidgetitem2 = CustomerWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CustomerList", "Key", 0));
        AddButton->setText(QApplication::translate("CustomerList", "Add", 0));
        InfoButton->setText(QApplication::translate("CustomerList", "Information", 0));
        EditButton->setText(QApplication::translate("CustomerList", "Remove by Name", 0));
        RemoveButton->setText(QApplication::translate("CustomerList", "Remove from row selected", 0));
        pushButton->setText(QApplication::translate("CustomerList", "Refresh", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerList: public Ui_CustomerList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERLIST_H
