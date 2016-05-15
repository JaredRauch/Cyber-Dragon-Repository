/********************************************************************************
** Form generated from reading UI file 'orderproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERPRODUCT_H
#define UI_ORDERPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrderProduct
{
public:
    QLabel *label;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label_4;

    void setupUi(QDialog *OrderProduct)
    {
        if (OrderProduct->objectName().isEmpty())
            OrderProduct->setObjectName(QStringLiteral("OrderProduct"));
        OrderProduct->resize(400, 300);
        label = new QLabel(OrderProduct);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 371, 71));
        QFont font;
        font.setPointSize(19);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        layoutWidget_2 = new QWidget(OrderProduct);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(120, 210, 92, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        lineEdit_5 = new QLineEdit(layoutWidget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_4->addWidget(lineEdit_5);

        layoutWidget = new QWidget(OrderProduct);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 210, 101, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_3->addWidget(lineEdit_4);

        layoutWidget_3 = new QWidget(OrderProduct);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 150, 351, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget_3);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        layoutWidget_4 = new QWidget(OrderProduct);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(210, 210, 161, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        lineEdit_6 = new QLineEdit(layoutWidget_4);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_5->addWidget(lineEdit_6);

        layoutWidget_5 = new QWidget(OrderProduct);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(20, 180, 351, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget_5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_5);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget_5);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout->addWidget(lineEdit_3);

        comboBox = new QComboBox(OrderProduct);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(40, 70, 161, 21));
        pushButton = new QPushButton(OrderProduct);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 252, 351, 31));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        label_4 = new QLabel(OrderProduct);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, -10, 301, 211));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/assets/assets/drag.png")));
        label_4->setScaledContents(true);
        label_4->raise();
        label->raise();
        layoutWidget_2->raise();
        layoutWidget->raise();
        layoutWidget_3->raise();
        layoutWidget_4->raise();
        layoutWidget_5->raise();
        comboBox->raise();
        pushButton->raise();

        retranslateUi(OrderProduct);

        QMetaObject::connectSlotsByName(OrderProduct);
    } // setupUi

    void retranslateUi(QDialog *OrderProduct)
    {
        OrderProduct->setWindowTitle(QApplication::translate("OrderProduct", "Dialog", 0));
        label->setText(QApplication::translate("OrderProduct", "<html><head/><body><p align=\"center\">Order Products:</p></body></html>", 0));
        label_6->setText(QApplication::translate("OrderProduct", "State:", 0));
        label_5->setText(QApplication::translate("OrderProduct", "City:", 0));
        label_2->setText(QApplication::translate("OrderProduct", "Company", 0));
        label_7->setText(QApplication::translate("OrderProduct", "Zip Code:", 0));
        label_3->setText(QApplication::translate("OrderProduct", "Street:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("OrderProduct", "Basic Security", 0)
         << QApplication::translate("OrderProduct", "Advanced Security", 0)
         << QApplication::translate("OrderProduct", "Training", 0)
         << QApplication::translate("OrderProduct", "Basic Maintenance", 0)
         << QApplication::translate("OrderProduct", "Yearly Training", 0)
        );
        pushButton->setText(QApplication::translate("OrderProduct", "Submit", 0));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OrderProduct: public Ui_OrderProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERPRODUCT_H
