/********************************************************************************
** Form generated from reading UI file 'removewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEWINDOW_H
#define UI_REMOVEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QDialogButtonBox *ConformBox;
    QLineEdit *NameLineEdit;
    QLabel *Blank_Label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RemoveWindow)
    {
        if (RemoveWindow->objectName().isEmpty())
            RemoveWindow->setObjectName(QStringLiteral("RemoveWindow"));
        RemoveWindow->resize(600, 226);
        centralwidget = new QWidget(RemoveWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 10, 391, 20));
        ConformBox = new QDialogButtonBox(centralwidget);
        ConformBox->setObjectName(QStringLiteral("ConformBox"));
        ConformBox->setEnabled(true);
        ConformBox->setGeometry(QRect(430, 140, 156, 23));
        ConformBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        NameLineEdit = new QLineEdit(centralwidget);
        NameLineEdit->setObjectName(QStringLiteral("NameLineEdit"));
        NameLineEdit->setGeometry(QRect(110, 80, 381, 20));
        Blank_Label = new QLabel(centralwidget);
        Blank_Label->setObjectName(QStringLiteral("Blank_Label"));
        Blank_Label->setGeometry(QRect(110, 120, 281, 31));
        RemoveWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RemoveWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 21));
        RemoveWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(RemoveWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        RemoveWindow->setStatusBar(statusbar);

        retranslateUi(RemoveWindow);

        QMetaObject::connectSlotsByName(RemoveWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RemoveWindow)
    {
        RemoveWindow->setWindowTitle(QApplication::translate("RemoveWindow", "MainWindow", 0));
        label->setText(QApplication::translate("RemoveWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Enter the name of the customer you wish to Remove:</span></p></body></html>", 0));
        Blank_Label->setText(QApplication::translate("RemoveWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class RemoveWindow: public Ui_RemoveWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEWINDOW_H
