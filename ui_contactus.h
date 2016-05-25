/********************************************************************************
** Form generated from reading UI file 'contactus.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACTUS_H
#define UI_CONTACTUS_H

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

class Ui_ContactUs
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *ContactUs)
    {
        if (ContactUs->objectName().isEmpty())
            ContactUs->setObjectName(QStringLiteral("ContactUs"));
        ContactUs->resize(400, 300);
        verticalLayout = new QVBoxLayout(ContactUs);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ContactUs);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(ContactUs);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        retranslateUi(ContactUs);

        QMetaObject::connectSlotsByName(ContactUs);
    } // setupUi

    void retranslateUi(QDialog *ContactUs)
    {
        ContactUs->setWindowTitle(QApplication::translate("ContactUs", "Dialog", 0));
        label->setText(QApplication::translate("ContactUs", "Contact us!", 0));
        textBrowser->setHtml(QApplication::translate("ContactUs", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">iCyberSecurity is heaquartered on the campus of Saddleback College. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Hours of operation are 9:00 AM - 5:00 PM, Monday-Friday.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-inde"
                        "nt:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Business inqueries:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">(949) 582-4500</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">icybersecurity@saddleback.edu</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">28000 Marguerite Parkway<br />Mission Viejo, California 92692<br /></span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ContactUs: public Ui_ContactUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACTUS_H
