/********************************************************************************
** Form generated from reading UI file 'serviceoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVICEOPTIONS_H
#define UI_SERVICEOPTIONS_H

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

class Ui_ServiceOptions
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *ServiceOptions)
    {
        if (ServiceOptions->objectName().isEmpty())
            ServiceOptions->setObjectName(QStringLiteral("ServiceOptions"));
        ServiceOptions->resize(400, 328);
        verticalLayout = new QVBoxLayout(ServiceOptions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ServiceOptions);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(ServiceOptions);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        retranslateUi(ServiceOptions);

        QMetaObject::connectSlotsByName(ServiceOptions);
    } // setupUi

    void retranslateUi(QDialog *ServiceOptions)
    {
        ServiceOptions->setWindowTitle(QApplication::translate("ServiceOptions", "Dialog", 0));
        label->setText(QApplication::translate("ServiceOptions", "Service Options:", 0));
        textBrowser->setHtml(QApplication::translate("ServiceOptions", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Basic security assessments: Appropriate for any reasonable business, our most basic package includes vulnerability assessment/penetration testing, network design, forsenic data analysis, malware analysis, and cyber policy assessment. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Price range: $5,000-$15,000</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Advanced security needs: For companies with more at stake, our advanced services tailor to financial, medical, and large retail operations. These services include 24/7 monitoring of company networks, weekly audits of proceedures, daily checks hunting for threats, client specific threat intelligence, perimeter and host based defense, malware analysis, and network anomaly analysis.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Price range: $25,000 with $2,000/month subscription</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Training: The weakest point of any security system"
                        " will always be the human element. Our training services focus employees on key sources of loss for firms. Techniques will focus on identity verification, advanced programming methodologies, wireless exploits, proper procedures for maintaining physical security of company data, and maintenance of secure systems.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Price range: $2,000-$4,500 per person</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ServiceOptions: public Ui_ServiceOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVICEOPTIONS_H
