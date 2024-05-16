/********************************************************************************
** Form generated from reading UI file 'sirumahsakit.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIRUMAHSAKIT_H
#define UI_SIRUMAHSAKIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SiRumahSakit
{
public:
    QWidget *centralwidget;
    QPushButton *loginButton;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *usernameLineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *passwordLineEdit;
    QLabel *label_bc;
    QLabel *label_7;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SiRumahSakit)
    {
        if (SiRumahSakit->objectName().isEmpty())
            SiRumahSakit->setObjectName("SiRumahSakit");
        SiRumahSakit->resize(1828, 872);
        SiRumahSakit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 226, 0);\n"
"background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(SiRumahSakit);
        centralwidget->setObjectName("centralwidget");
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(700, 470, 101, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(370, 50, 751, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("STKaiti")});
        font.setPointSize(18);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 0));"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(530, 140, 441, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("STKaiti")});
        font1.setPointSize(14);
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(0, 0, 0, 0))"));
        label_5->setAlignment(Qt::AlignCenter);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(610, 260, 291, 171));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 0));"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 20, 250, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        usernameLineEdit = new QLineEdit(layoutWidget);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(usernameLineEdit);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 90, 244, 29));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        passwordLineEdit = new QLineEdit(layoutWidget1);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLineEdit);

        label_bc = new QLabel(centralwidget);
        label_bc->setObjectName("label_bc");
        label_bc->setGeometry(QRect(1240, 30, 81, 81));
        label_bc->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 0));"));
        label_bc->setPixmap(QPixmap(QString::fromUtf8("E:/tubessda/logo.png")));
        label_bc->setScaledContents(true);
        label_bc->setWordWrap(false);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(-160, -40, 2071, 871));
        label_7->setPixmap(QPixmap(QString::fromUtf8("E:/tubessda/bcrumahsakit.jpg")));
        label_7->setScaledContents(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(1220, 110, 119, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(11);
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:1 rgba(0, 0, 0, 0))"));
        label_6->setAlignment(Qt::AlignCenter);
        SiRumahSakit->setCentralWidget(centralwidget);
        label_7->raise();
        loginButton->raise();
        label_4->raise();
        label_5->raise();
        groupBox->raise();
        label_bc->raise();
        label_6->raise();
        label_bc->raise();
        label_6->raise();
        menubar = new QMenuBar(SiRumahSakit);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1828, 26));
        SiRumahSakit->setMenuBar(menubar);
        statusbar = new QStatusBar(SiRumahSakit);
        statusbar->setObjectName("statusbar");
        SiRumahSakit->setStatusBar(statusbar);

        retranslateUi(SiRumahSakit);

        QMetaObject::connectSlotsByName(SiRumahSakit);
    } // setupUi

    void retranslateUi(QMainWindow *SiRumahSakit)
    {
        SiRumahSakit->setWindowTitle(QCoreApplication::translate("SiRumahSakit", "SiRumahSakit", nullptr));
        loginButton->setText(QCoreApplication::translate("SiRumahSakit", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("SiRumahSakit", "SELAMAT DATANG DI RUMAH SAKIT MITRA JAYA", nullptr));
        label_5->setText(QCoreApplication::translate("SiRumahSakit", "Silahkan masukkan username dan password", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("SiRumahSakit", "Username  :", nullptr));
        label_3->setText(QCoreApplication::translate("SiRumahSakit", "Password   :", nullptr));
        label_bc->setText(QString());
        label_7->setText(QString());
        label_6->setText(QCoreApplication::translate("SiRumahSakit", "MITRA JAYA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SiRumahSakit: public Ui_SiRumahSakit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIRUMAHSAKIT_H
