/********************************************************************************
** Form generated from reading UI file 'salespitch.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALESPITCH_H
#define UI_SALESPITCH_H

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

class Ui_SalesPitch
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *SalesPitch)
    {
        if (SalesPitch->objectName().isEmpty())
            SalesPitch->setObjectName(QStringLiteral("SalesPitch"));
        SalesPitch->resize(400, 300);
        verticalLayout = new QVBoxLayout(SalesPitch);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(SalesPitch);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(SalesPitch);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        retranslateUi(SalesPitch);

        QMetaObject::connectSlotsByName(SalesPitch);
    } // setupUi

    void retranslateUi(QDialog *SalesPitch)
    {
        SalesPitch->setWindowTitle(QApplication::translate("SalesPitch", "Dialog", 0));
        label->setText(QApplication::translate("SalesPitch", "The internet is dangerous. We're here to help.", 0));
        textBrowser->setHtml(QApplication::translate("SalesPitch", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Cyber Dragons LLC is a company with 22 years of experience in the field of cyber security.  </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">We have wide experience in threat detection, encryption, fraud prevention, privacy analysis, compliance, and education and training.  </p>\n"
"<p style=\"-qt-paragraph-type:empt"
                        "y; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">We have consistantly placed in the top 50 cyber security firms nationally as ranked by industry groups and are active in the cyber security community, have published over 100 white papers on evolving issues, and partner with a number of Fortune 500 companies. </p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class SalesPitch: public Ui_SalesPitch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESPITCH_H
