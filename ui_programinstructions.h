/********************************************************************************
** Form generated from reading UI file 'programinstructions.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRAMINSTRUCTIONS_H
#define UI_PROGRAMINSTRUCTIONS_H

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

class Ui_ProgramInstructions
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *ProgramInstructions)
    {
        if (ProgramInstructions->objectName().isEmpty())
            ProgramInstructions->setObjectName(QStringLiteral("ProgramInstructions"));
        ProgramInstructions->resize(400, 300);
        verticalLayout = new QVBoxLayout(ProgramInstructions);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ProgramInstructions);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(ProgramInstructions);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        retranslateUi(ProgramInstructions);

        QMetaObject::connectSlotsByName(ProgramInstructions);
    } // setupUi

    void retranslateUi(QDialog *ProgramInstructions)
    {
        ProgramInstructions->setWindowTitle(QApplication::translate("ProgramInstructions", "Dialog", 0));
        label->setText(QApplication::translate("ProgramInstructions", "How to use our program", 0));
        textBrowser->setHtml(QApplication::translate("ProgramInstructions", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">All pamphlet information is located on the main page. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">On the bottom of the main page are customer testimonial access and submission, the ability to order pamphlets, and the ability to order product for non current customers. </p>\n"
"<p style=\"-qt-paragraph-type:empty"
                        "; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The main window login screen contains customer login access, which allows current customers to order more products. Login details are the customer name in lower case. Example: <span style=\" font-weight:600;\">Username</span> = cia  <span style=\" font-weight:600;\">Password</span> = cia</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Admin only login access is found in the file menu, along with contact information. The login details for admins are: <span style=\" font-weight:600;\">Username</span> = admin  <span style=\" font-wei"
                        "ght:600;\">Password</span> = pass</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ProgramInstructions: public Ui_ProgramInstructions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRAMINSTRUCTIONS_H
