/********************************************************************************
** Form generated from reading UI file 'customertestimonials.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERTESTIMONIALS_H
#define UI_CUSTOMERTESTIMONIALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CustomerTestimonials
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QTextEdit *textEdit;

    void setupUi(QDialog *CustomerTestimonials)
    {
        if (CustomerTestimonials->objectName().isEmpty())
            CustomerTestimonials->setObjectName(QStringLiteral("CustomerTestimonials"));
        CustomerTestimonials->resize(662, 505);
        verticalLayout = new QVBoxLayout(CustomerTestimonials);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(CustomerTestimonials);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(CustomerTestimonials);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->verticalHeader()->setMinimumSectionSize(151);

        verticalLayout->addWidget(tableWidget);

        label_2 = new QLabel(CustomerTestimonials);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(CustomerTestimonials);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_3 = new QLabel(CustomerTestimonials);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        textEdit = new QTextEdit(CustomerTestimonials);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(CustomerTestimonials);

        QMetaObject::connectSlotsByName(CustomerTestimonials);
    } // setupUi

    void retranslateUi(QDialog *CustomerTestimonials)
    {
        CustomerTestimonials->setWindowTitle(QApplication::translate("CustomerTestimonials", "Dialog", 0));
        label->setText(QApplication::translate("CustomerTestimonials", "Testimonials:", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CustomerTestimonials", "Customer", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CustomerTestimonials", "Testimonial", 0));
        label_2->setText(QApplication::translate("CustomerTestimonials", "Customer Name:", 0));
        label_3->setText(QApplication::translate("CustomerTestimonials", "Testimonial:", 0));
    } // retranslateUi

};

namespace Ui {
    class CustomerTestimonials: public Ui_CustomerTestimonials {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERTESTIMONIALS_H
