/********************************************************************************
** Form generated from reading UI file 'maintenanceplan.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTENANCEPLAN_H
#define UI_MAINTENANCEPLAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MaintenancePlan
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *MaintenancePlan)
    {
        if (MaintenancePlan->objectName().isEmpty())
            MaintenancePlan->setObjectName(QStringLiteral("MaintenancePlan"));
        MaintenancePlan->resize(400, 300);
        verticalLayout = new QVBoxLayout(MaintenancePlan);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(MaintenancePlan);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(MaintenancePlan);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        retranslateUi(MaintenancePlan);

        QMetaObject::connectSlotsByName(MaintenancePlan);
    } // setupUi

    void retranslateUi(QDialog *MaintenancePlan)
    {
        MaintenancePlan->setWindowTitle(QApplication::translate("MaintenancePlan", "Dialog", 0));
        label->setText(QApplication::translate("MaintenancePlan", "Maintenance Plan", 0));
        textBrowser->setHtml(QApplication::translate("MaintenancePlan", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Any of our services will focus on maintaining security, whether it be establishing self maintaining proceedures with our basic package, with 24/7 monitoring in our advance packages, or in instilling lasting knowledge in employees through our training classes. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Additiona"
                        "l maintenance options may be appropriate though.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Advanced network maintenance: Daily audits of network traffic on a case by case basis, this level of protection ensures that access to your most vital information will always be monitored, using techniques employed by the DoD and NSA. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Price: $10,000/month</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Yearly tra"
                        "ining: Our 5 day course updates employees on the latest cybersecurity treats and trends.  </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Price $1,500/person</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MaintenancePlan: public Ui_MaintenancePlan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTENANCEPLAN_H
