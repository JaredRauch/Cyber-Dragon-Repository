/********************************************************************************
** Form generated from reading UI file 'conceptofoperations.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONCEPTOFOPERATIONS_H
#define UI_CONCEPTOFOPERATIONS_H

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

class Ui_ConceptOfOperations
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *ConceptOfOperations)
    {
        if (ConceptOfOperations->objectName().isEmpty())
            ConceptOfOperations->setObjectName(QStringLiteral("ConceptOfOperations"));
        ConceptOfOperations->resize(400, 300);
        verticalLayout = new QVBoxLayout(ConceptOfOperations);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ConceptOfOperations);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textBrowser = new QTextBrowser(ConceptOfOperations);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        retranslateUi(ConceptOfOperations);

        QMetaObject::connectSlotsByName(ConceptOfOperations);
    } // setupUi

    void retranslateUi(QDialog *ConceptOfOperations)
    {
        ConceptOfOperations->setWindowTitle(QApplication::translate("ConceptOfOperations", "Dialog", 0));
        label->setText(QApplication::translate("ConceptOfOperations", "Concept of Operations", 0));
        textBrowser->setHtml(QApplication::translate("ConceptOfOperations", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">iCyberSecurity: CyberDragons employs a team of 5 security professionals with unique perspectives and areas of experience. With years of experience and research, CyberDragons offers preventative diagnostics services to help your company maintain the integrity of its commitment to customer data security. CyberDragons has relationships with hardware vendors to help obtain the most guaranteed secure firewalls, access badges, server hardware, and security cameras. We provide proven techniques to maintain total onsite physical security, while maintaining conti"
                        "nuous access monitoring through your cloud. </p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class ConceptOfOperations: public Ui_ConceptOfOperations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONCEPTOFOPERATIONS_H
