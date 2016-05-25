/********************************************************************************
** Form generated from reading UI file 'customerpurchase.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERPURCHASE_H
#define UI_CUSTOMERPURCHASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_customerPurchase
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QTableWidget *tableWidget;

    void setupUi(QDialog *customerPurchase)
    {
        if (customerPurchase->objectName().isEmpty())
            customerPurchase->setObjectName(QStringLiteral("customerPurchase"));
        customerPurchase->resize(529, 430);
        verticalLayout = new QVBoxLayout(customerPurchase);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(customerPurchase);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        comboBox = new QComboBox(customerPurchase);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        verticalLayout->addWidget(comboBox);

        tableWidget = new QTableWidget(customerPurchase);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->horizontalHeader()->setDefaultSectionSize(200);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(customerPurchase);

        QMetaObject::connectSlotsByName(customerPurchase);
    } // setupUi

    void retranslateUi(QDialog *customerPurchase)
    {
        customerPurchase->setWindowTitle(QApplication::translate("customerPurchase", "Dialog", 0));
        label->setText(QApplication::translate("customerPurchase", "Customer Order Menu", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("customerPurchase", "Select a Product!", 0)
         << QApplication::translate("customerPurchase", "Basic Security", 0)
         << QApplication::translate("customerPurchase", "Advanced Security", 0)
         << QApplication::translate("customerPurchase", "Training", 0)
         << QApplication::translate("customerPurchase", "Basic Maintenance", 0)
         << QApplication::translate("customerPurchase", "Yearly Training", 0)
        );
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("customerPurchase", "Customer Purchase History", 0));
    } // retranslateUi

};

namespace Ui {
    class customerPurchase: public Ui_customerPurchase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERPURCHASE_H
