/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCustomer_Testimonials;
    QAction *actionRequest_Pamphlet;
    QAction *actionOrder_Products;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLabel *label_validation;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_logout;
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QLabel *label_4;
    QTextBrowser *textBrowser_4;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuCustomer;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1144, 664);
        actionCustomer_Testimonials = new QAction(MainWindow);
        actionCustomer_Testimonials->setObjectName(QStringLiteral("actionCustomer_Testimonials"));
        actionRequest_Pamphlet = new QAction(MainWindow);
        actionRequest_Pamphlet->setObjectName(QStringLiteral("actionRequest_Pamphlet"));
        actionOrder_Products = new QAction(MainWindow);
        actionOrder_Products->setObjectName(QStringLiteral("actionOrder_Products"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(900, 0, 231, 111));
        label_validation = new QLabel(groupBox);
        label_validation->setObjectName(QStringLiteral("label_validation"));
        label_validation->setGeometry(QRect(20, 80, 121, 31));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 80, 81, 21));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 196, 48));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_username = new QLabel(layoutWidget);
        label_username->setObjectName(QStringLiteral("label_username"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_username);

        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_username);

        label_password = new QLabel(layoutWidget);
        label_password->setObjectName(QStringLiteral("label_password"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_password);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_password);

        pushButton_logout = new QPushButton(centralWidget);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(1040, 80, 81, 23));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, -10, 491, 91));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(380, 60, 291, 21));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::HLine);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 70, 151, 31));
        QFont font;
        font.setPointSize(18);
        font.setBold(false);
        font.setUnderline(true);
        font.setWeight(50);
        label_2->setFont(font);
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 110, 441, 251));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 370, 151, 31));
        label_3->setFont(font);
        textBrowser_2 = new QTextBrowser(centralWidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(20, 410, 421, 181));
        textBrowser_3 = new QTextBrowser(centralWidget);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(480, 120, 621, 221));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(700, 80, 181, 31));
        label_4->setFont(font);
        textBrowser_4 = new QTextBrowser(centralWidget);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(480, 380, 621, 181));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(680, 340, 231, 31));
        label_5->setFont(font);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(910, 570, 171, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 570, 171, 31));
        MainWindow->setCentralWidget(centralWidget);
        pushButton_logout->raise();
        label->raise();
        line->raise();
        label_2->raise();
        textBrowser->raise();
        label_3->raise();
        textBrowser_2->raise();
        textBrowser_3->raise();
        label_4->raise();
        textBrowser_4->raise();
        label_5->raise();
        groupBox->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1144, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuCustomer = new QMenu(menuBar);
        menuCustomer->setObjectName(QStringLiteral("menuCustomer"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuCustomer->menuAction());
        menuCustomer->addAction(actionCustomer_Testimonials);
        menuCustomer->addAction(actionRequest_Pamphlet);
        menuCustomer->addAction(actionOrder_Products);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionCustomer_Testimonials->setText(QApplication::translate("MainWindow", "Customer Testimonials", 0));
        actionRequest_Pamphlet->setText(QApplication::translate("MainWindow", "Request Pamphlet", 0));
        actionOrder_Products->setText(QApplication::translate("MainWindow", "Order Products", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Login", 0));
        label_validation->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*Invalid Credentials</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Login", 0));
        label_username->setText(QApplication::translate("MainWindow", "Username: ", 0));
        label_password->setText(QApplication::translate("MainWindow", "Password:", 0));
        pushButton_logout->setText(QApplication::translate("MainWindow", "Logout", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">iCyberSecurity</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("MainWindow", "Information", 0));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Cyber Dragons LLC is a company with 22 years of experience in the field of cyber security.  </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">We have wide experience in threat detection, encryption, fraud prevention, privacy analysis"
                        ", compliance, and education and training.  </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">We have consistantly placed in the top 50 cyber security firms nationally as ranked by industry groups and are active in the cyber security community, have published over 100 white papers on evolving issues, and partner with a number of Fortune 500 companies. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">CyberDragons employs a team of 5"
                        " security professionals with unique perspectives and areas of experience. With years of experience and research, CyberDragons offers preventative diagnostics services to help your company maintain the integrity of its commitment to customer data security. CyberDragons has relationships with hardware vendors to help obtain the most guaranteed secure firewalls, access badges, server hardware, and security cameras. We provide proven techniques to maintain total onsite physical security, while maintaining continuous access monitoring through your cloud. </span></p></body></html>", 0));
        label_3->setText(QApplication::translate("MainWindow", "Gaurantee", 0));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">iCyberSecurity: CyberDragons guarantees that our services will be carried out to the highest quality and will refund for any justifiably subpar service. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Threat prevention can fail for"
                        " a number of reasons, in technology disruptions and yet undiscovered, fundamental problems with any of a variety of components. CyberDragons will never be responsible for the failures of other parties software problems, but it will carefully document its process, and will financially compensate clients if a failure is demonstrably ours. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">This assures our clients that we share in their risk, </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">taking threats as seriously as they do. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">It's our task to make your adversaries</span></p>\n"
"<p style=\" margin-top:0px; mar"
                        "gin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\"> our adversaries. </span></p></body></html>", 0));
        textBrowser_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Basic security assessments: Appropriate for any reasonable business, our most basic package includes vulnerability assessment/penetration testing, network design, forsenic data analysis, malware analysis, and cyber policy assessment. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Price range: $5,000-$15,000</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-lef"
                        "t:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Advanced security needs: For companies with more at stake, our advanced services tailor to financial, medical, and large retail operations. These services include 24/7 monitoring of company networks, weekly audits of proceedures, daily checks hunting for threats, client specific threat intelligence, perimeter and host based defense, malware analysis, and network anomaly analysis.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Price range: $25,000 with $2,000/month subscription</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\""
                        "><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Training: The weakest point of any security system will always be the human element. Our training services focus employees on key sources of loss for firms. Techniques will focus on identity verification, advanced programming methodologies, wireless exploits, proper procedures for maintaining physical security of company data, and maintenance of secure systems.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Price range: $2,000-$4,500 per person</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("MainWindow", "Service Options", 0));
        textBrowser_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Any of our services will focus on maintaining security, whether it be establishing self maintaining proceedures with our basic package, with 24/7 monitoring in our advance packages, or in instilling lasting knowledge in employees through our training classes. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right"
                        ":0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Additional maintenance options may be appropriate though.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Advanced network maintenance: Daily audits of network traffic on a case by case basis, this level of protection ensures that access to your most vital information will always be monitored, using techniques employed by the DoD and NSA. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Price: $10,000/month</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;"
                        " -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Yearly training: Our 5 day course updates employees on the latest cybersecurity treats and trends.  </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Price $1,500/person</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("MainWindow", "Maintanance Plan", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Order Now!", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Request Pamphlet", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuCustomer->setTitle(QApplication::translate("MainWindow", "Customer", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
