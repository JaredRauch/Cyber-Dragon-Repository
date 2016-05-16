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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdmin_Login;
    QAction *actionProgram_Instructions;
    QAction *actionContact_Information;
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
    QLabel *label_title;
    QFrame *line;
    QLabel *label_info;
    QTextBrowser *textBrowser;
    QLabel *label_gaurantee;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QLabel *label_serviceopt;
    QTextBrowser *textBrowser_4;
    QLabel *label_maintenance;
    QPushButton *pushButton_order;
    QPushButton *pushButton_requestpamplet;
    QPushButton *pushButton_testimonials;
    QLabel *dragonpic;
    QLabel *gaurantee;
    QLabel *label_company;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1147, 672);
        actionAdmin_Login = new QAction(MainWindow);
        actionAdmin_Login->setObjectName(QStringLiteral("actionAdmin_Login"));
        actionProgram_Instructions = new QAction(MainWindow);
        actionProgram_Instructions->setObjectName(QStringLiteral("actionProgram_Instructions"));
        actionContact_Information = new QAction(MainWindow);
        actionContact_Information->setObjectName(QStringLiteral("actionContact_Information"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(900, 0, 231, 111));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        groupBox->setFont(font);
        label_validation = new QLabel(groupBox);
        label_validation->setObjectName(QStringLiteral("label_validation"));
        label_validation->setGeometry(QRect(20, 80, 121, 31));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        label_validation->setFont(font1);
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
        label_password->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_password);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_password);

        pushButton_logout = new QPushButton(centralWidget);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));
        pushButton_logout->setGeometry(QRect(1040, 80, 81, 23));
        label_title = new QLabel(centralWidget);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(250, 10, 491, 61));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(330, 60, 391, 21));
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(3);
        line->setFrameShape(QFrame::HLine);
        label_info = new QLabel(centralWidget);
        label_info->setObjectName(QStringLiteral("label_info"));
        label_info->setGeometry(QRect(140, 70, 151, 31));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setUnderline(true);
        font2.setWeight(50);
        label_info->setFont(font2);
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 110, 441, 251));
        label_gaurantee = new QLabel(centralWidget);
        label_gaurantee->setObjectName(QStringLiteral("label_gaurantee"));
        label_gaurantee->setGeometry(QRect(140, 370, 151, 31));
        label_gaurantee->setFont(font2);
        textBrowser_2 = new QTextBrowser(centralWidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(20, 410, 421, 181));
        textBrowser_3 = new QTextBrowser(centralWidget);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(480, 120, 621, 221));
        label_serviceopt = new QLabel(centralWidget);
        label_serviceopt->setObjectName(QStringLiteral("label_serviceopt"));
        label_serviceopt->setGeometry(QRect(700, 80, 181, 31));
        label_serviceopt->setFont(font2);
        textBrowser_4 = new QTextBrowser(centralWidget);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(480, 390, 621, 181));
        label_maintenance = new QLabel(centralWidget);
        label_maintenance->setObjectName(QStringLiteral("label_maintenance"));
        label_maintenance->setGeometry(QRect(680, 350, 231, 31));
        label_maintenance->setFont(font2);
        pushButton_order = new QPushButton(centralWidget);
        pushButton_order->setObjectName(QStringLiteral("pushButton_order"));
        pushButton_order->setGeometry(QRect(910, 580, 171, 31));
        pushButton_order->setFont(font);
        pushButton_requestpamplet = new QPushButton(centralWidget);
        pushButton_requestpamplet->setObjectName(QStringLiteral("pushButton_requestpamplet"));
        pushButton_requestpamplet->setGeometry(QRect(500, 580, 171, 31));
        pushButton_requestpamplet->setFont(font);
        pushButton_testimonials = new QPushButton(centralWidget);
        pushButton_testimonials->setObjectName(QStringLiteral("pushButton_testimonials"));
        pushButton_testimonials->setGeometry(QRect(700, 580, 171, 31));
        pushButton_testimonials->setFont(font);
        dragonpic = new QLabel(centralWidget);
        dragonpic->setObjectName(QStringLiteral("dragonpic"));
        dragonpic->setGeometry(QRect(590, -40, 211, 151));
        dragonpic->setPixmap(QPixmap(QString::fromUtf8(":/assets/assets/drag.png")));
        dragonpic->setScaledContents(true);
        gaurantee = new QLabel(centralWidget);
        gaurantee->setObjectName(QStringLiteral("gaurantee"));
        gaurantee->setGeometry(QRect(320, 520, 111, 91));
        gaurantee->setPixmap(QPixmap(QString::fromUtf8(":/assets/assets/Guarantee.png")));
        gaurantee->setScaledContents(true);
        label_company = new QLabel(centralWidget);
        label_company->setObjectName(QStringLiteral("label_company"));
        label_company->setGeometry(QRect(10, 0, 171, 31));
        MainWindow->setCentralWidget(centralWidget);
        pushButton_logout->raise();
        label_title->raise();
        line->raise();
        label_info->raise();
        textBrowser->raise();
        label_gaurantee->raise();
        textBrowser_2->raise();
        textBrowser_3->raise();
        label_serviceopt->raise();
        textBrowser_4->raise();
        label_maintenance->raise();
        groupBox->raise();
        pushButton_order->raise();
        pushButton_requestpamplet->raise();
        pushButton_testimonials->raise();
        dragonpic->raise();
        gaurantee->raise();
        label_company->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1147, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionAdmin_Login);
        menuFile->addAction(actionProgram_Instructions);
        menuFile->addAction(actionContact_Information);

        retranslateUi(MainWindow);
        QObject::connect(lineEdit_password, SIGNAL(returnPressed()), pushButton, SLOT(click()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionAdmin_Login->setText(QApplication::translate("MainWindow", "Admin Login", 0));
        actionProgram_Instructions->setText(QApplication::translate("MainWindow", "Program Instructions", 0));
        actionContact_Information->setText(QApplication::translate("MainWindow", "Contact Information", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Login", 0));
        label_validation->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">*Invalid Credentials</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Login", 0));
        label_username->setText(QApplication::translate("MainWindow", "Username: ", 0));
        label_password->setText(QApplication::translate("MainWindow", "Password:", 0));
        pushButton_logout->setText(QApplication::translate("MainWindow", "Logout", 0));
        label_title->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt;\">ICyberSecurity</span></p></body></html>", 0));
        label_info->setText(QApplication::translate("MainWindow", "Information", 0));
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
        label_gaurantee->setText(QApplication::translate("MainWindow", "Guarantee", 0));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">iCyberSecurity: CyberDragons guarantees that our services will be carried out to the highest quality and will refund for any justifiably subpar service. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:8pt;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Threat prevention can fail for"
                        " a number of reasons, in technology disruptions and yet undiscovered, fundamental problems with any of a variety of components. CyberDragons will never be responsible for the failures of other parties software problems, but it will carefully document its process, and will financially compensate clients if a failure is demonstrably ours. This assures our clients that we share in their risk, taking threats as seriously as they do. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">It's our task to make your adversaries </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">our adversaries. </span></p></body></html>", 0));
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
        label_serviceopt->setText(QApplication::translate("MainWindow", "Service Options", 0));
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
        label_maintenance->setText(QApplication::translate("MainWindow", "Maintenance Plan", 0));
        pushButton_order->setText(QApplication::translate("MainWindow", "Order Now!", 0));
        pushButton_requestpamplet->setText(QApplication::translate("MainWindow", "Request Pamphlet", 0));
        pushButton_testimonials->setText(QApplication::translate("MainWindow", "Testimonials", 0));
        dragonpic->setText(QString());
        gaurantee->setText(QString());
        label_company->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt;\">Cyber Dragons</span></p></body></html>", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
