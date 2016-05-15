/********************************************************************************
** Form generated from reading UI file 'requestpamphlet.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REQUESTPAMPHLET_H
#define UI_REQUESTPAMPHLET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RequestPamphlet
{
public:
    QLabel *label_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;

    void setupUi(QDialog *RequestPamphlet)
    {
        if (RequestPamphlet->objectName().isEmpty())
            RequestPamphlet->setObjectName(QStringLiteral("RequestPamphlet"));
        RequestPamphlet->resize(399, 247);
        label_4 = new QLabel(RequestPamphlet);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 10, 321, 61));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        layoutWidget = new QWidget(RequestPamphlet);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 140, 101, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_3->addWidget(lineEdit_4);

        layoutWidget_2 = new QWidget(RequestPamphlet);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(120, 140, 92, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        lineEdit_5 = new QLineEdit(layoutWidget_2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_4->addWidget(lineEdit_5);

        layoutWidget_3 = new QWidget(RequestPamphlet);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(220, 140, 141, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        lineEdit_6 = new QLineEdit(layoutWidget_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_5->addWidget(lineEdit_6);

        layoutWidget1 = new QWidget(RequestPamphlet);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 80, 351, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        layoutWidget2 = new QWidget(RequestPamphlet);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 110, 351, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout->addWidget(lineEdit_3);

        pushButton = new QPushButton(RequestPamphlet);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(14, 192, 351, 31));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton->setFont(font1);
        layoutWidget->raise();
        layoutWidget->raise();
        label_4->raise();
        layoutWidget->raise();
        layoutWidget_2->raise();
        layoutWidget_3->raise();
        pushButton->raise();

        retranslateUi(RequestPamphlet);

        QMetaObject::connectSlotsByName(RequestPamphlet);
    } // setupUi

    void retranslateUi(QDialog *RequestPamphlet)
    {
        RequestPamphlet->setWindowTitle(QApplication::translate("RequestPamphlet", "Dialog", 0));
        label_4->setText(QApplication::translate("RequestPamphlet", "<html><head/><body><p align=\"center\">Request Pamphlet</p></body></html>", 0));
        label_5->setText(QApplication::translate("RequestPamphlet", "City:", 0));
        label_6->setText(QApplication::translate("RequestPamphlet", "State:", 0));
        label_7->setText(QApplication::translate("RequestPamphlet", "Zip Code:", 0));
        label_2->setText(QApplication::translate("RequestPamphlet", "Company", 0));
        label_3->setText(QApplication::translate("RequestPamphlet", "Street:", 0));
        pushButton->setText(QApplication::translate("RequestPamphlet", "Send Pamphlet", 0));
    } // retranslateUi

};

namespace Ui {
    class RequestPamphlet: public Ui_RequestPamphlet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTPAMPHLET_H
