/********************************************************************************
** Form generated from reading UI file 'guarantee.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUARANTEE_H
#define UI_GUARANTEE_H

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

class Ui_Guarantee
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Guarantee)
    {
        if (Guarantee->objectName().isEmpty())
            Guarantee->setObjectName(QStringLiteral("Guarantee"));
        Guarantee->resize(400, 300);
        verticalLayout = new QVBoxLayout(Guarantee);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Guarantee);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(Guarantee);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        retranslateUi(Guarantee);

        QMetaObject::connectSlotsByName(Guarantee);
    } // setupUi

    void retranslateUi(QDialog *Guarantee)
    {
        Guarantee->setWindowTitle(QApplication::translate("Guarantee", "Dialog", 0));
        label->setText(QApplication::translate("Guarantee", "Guarantee Policy", 0));
        textBrowser->setHtml(QApplication::translate("Guarantee", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">iCyberSecurity: CyberDragons guarantees that our services will be carried out to the highest quality and will refund for any justifiably subpar service. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Threat prevention can fail for a number of reasons, in technology disruptions and yet undiscovered, fundamental prob"
                        "lems with any of a variety of components. CyberDragons will never be responsible for the failures of other parties software problems, but it will carefully document its process, and will financially compensate clients if a failure is demonstrably ours. This assures our clients that we share in their risk, taking threats as seriously as they do. It's our task to make your adversaries our adversaries. </p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Guarantee: public Ui_Guarantee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUARANTEE_H
