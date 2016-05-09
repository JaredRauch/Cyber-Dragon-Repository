/********************************************************************************
** Form generated from reading UI file 'requestpamphlet.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
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
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_3;

    void setupUi(QDialog *RequestPamphlet)
    {
        if (RequestPamphlet->objectName().isEmpty())
            RequestPamphlet->setObjectName(QStringLiteral("RequestPamphlet"));
        RequestPamphlet->resize(399, 247);
        label_4 = new QLabel(RequestPamphlet);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 10, 101, 16));
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
        layoutWidget_2->setGeometry(QRect(120, 140, 71, 22));
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
        layoutWidget_3->setGeometry(QRect(200, 140, 161, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        lineEdit_6 = new QLineEdit(layoutWidget_3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_5->addWidget(lineEdit_6);

        widget = new QWidget(RequestPamphlet);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 80, 351, 22));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        widget1 = new QWidget(RequestPamphlet);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 110, 351, 22));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(widget1);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout->addWidget(lineEdit_3);

        lineEdit_2->raise();
        lineEdit_3->raise();
        label_2->raise();
        label_3->raise();
        lineEdit_2->raise();
        label_4->raise();
        layoutWidget->raise();
        layoutWidget_2->raise();
        layoutWidget_3->raise();

        retranslateUi(RequestPamphlet);

        QMetaObject::connectSlotsByName(RequestPamphlet);
    } // setupUi

    void retranslateUi(QDialog *RequestPamphlet)
    {
        RequestPamphlet->setWindowTitle(QApplication::translate("RequestPamphlet", "Dialog", 0));
        label_4->setText(QApplication::translate("RequestPamphlet", "Request Pamphlet", 0));
        label_5->setText(QApplication::translate("RequestPamphlet", "City:", 0));
        label_6->setText(QApplication::translate("RequestPamphlet", "State:", 0));
        label_7->setText(QApplication::translate("RequestPamphlet", "Zip Code:", 0));
        label_2->setText(QApplication::translate("RequestPamphlet", "Company", 0));
        label_3->setText(QApplication::translate("RequestPamphlet", "Street:", 0));
    } // retranslateUi

};

namespace Ui {
    class RequestPamphlet: public Ui_RequestPamphlet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REQUESTPAMPHLET_H
