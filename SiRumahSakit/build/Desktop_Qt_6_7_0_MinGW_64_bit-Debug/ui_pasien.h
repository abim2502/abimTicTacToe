/********************************************************************************
** Form generated from reading UI file 'pasien.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASIEN_H
#define UI_PASIEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PasienWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *namaLineEdit;
    QDateEdit *tanggalMasukDateEdit;
    QPushButton *pushButtonTambah;
    QLabel *label_2;
    QTableView *tableView;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *umurSpinBox;
    QPushButton *pushButton;
    QLabel *label_6;
    QLineEdit *gejalaLineEdit;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PasienWindow)
    {
        if (PasienWindow->objectName().isEmpty())
            PasienWindow->setObjectName("PasienWindow");
        PasienWindow->resize(1568, 885);
        centralwidget = new QWidget(PasienWindow);
        centralwidget->setObjectName("centralwidget");
        namaLineEdit = new QLineEdit(centralwidget);
        namaLineEdit->setObjectName("namaLineEdit");
        namaLineEdit->setGeometry(QRect(620, 120, 231, 24));
        tanggalMasukDateEdit = new QDateEdit(centralwidget);
        tanggalMasukDateEdit->setObjectName("tanggalMasukDateEdit");
        tanggalMasukDateEdit->setGeometry(QRect(620, 260, 231, 25));
        pushButtonTambah = new QPushButton(centralwidget);
        pushButtonTambah->setObjectName("pushButtonTambah");
        pushButtonTambah->setGeometry(QRect(920, 120, 80, 24));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(390, 120, 121, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(470, 310, 481, 301));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(680, 30, 101, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("STKaiti")});
        font1.setPointSize(16);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(390, 210, 121, 31));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(390, 260, 211, 31));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        umurSpinBox = new QSpinBox(centralwidget);
        umurSpinBox->setObjectName("umurSpinBox");
        umurSpinBox->setGeometry(QRect(620, 210, 81, 25));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1180, 720, 93, 29));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(390, 160, 121, 31));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gejalaLineEdit = new QLineEdit(centralwidget);
        gejalaLineEdit->setObjectName("gejalaLineEdit");
        gejalaLineEdit->setGeometry(QRect(620, 160, 231, 24));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(-10, 0, 1591, 831));
        label_7->setPixmap(QPixmap(QString::fromUtf8("E:/tubessda/bcrumahsakit.jpg")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(1180, 30, 81, 81));
        label_8->setPixmap(QPixmap(QString::fromUtf8("E:/tubessda/logo.png")));
        label_8->setScaledContents(true);
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(630, -70, 191, 271));
        label_5->setPixmap(QPixmap(QString::fromUtf8("E:/tubessda/lataradmin.png")));
        label_5->setScaledContents(true);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(1170, 120, 101, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(11);
        label_9->setFont(font2);
        PasienWindow->setCentralWidget(centralwidget);
        label_7->raise();
        label_5->raise();
        namaLineEdit->raise();
        tanggalMasukDateEdit->raise();
        pushButtonTambah->raise();
        label_2->raise();
        tableView->raise();
        label->raise();
        label_3->raise();
        label_4->raise();
        umurSpinBox->raise();
        pushButton->raise();
        label_6->raise();
        gejalaLineEdit->raise();
        label_8->raise();
        label_9->raise();
        menubar = new QMenuBar(PasienWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1568, 26));
        PasienWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(PasienWindow);
        statusbar->setObjectName("statusbar");
        PasienWindow->setStatusBar(statusbar);

        retranslateUi(PasienWindow);

        QMetaObject::connectSlotsByName(PasienWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PasienWindow)
    {
        PasienWindow->setWindowTitle(QCoreApplication::translate("PasienWindow", "MainWindow", nullptr));
        pushButtonTambah->setText(QCoreApplication::translate("PasienWindow", "Daftar", nullptr));
        label_2->setText(QCoreApplication::translate("PasienWindow", "Nama Pasien", nullptr));
        label->setText(QCoreApplication::translate("PasienWindow", "PASIEN", nullptr));
        label_3->setText(QCoreApplication::translate("PasienWindow", "Umur Pasien", nullptr));
        label_4->setText(QCoreApplication::translate("PasienWindow", "Tanggal Pasien Periksa", nullptr));
        pushButton->setText(QCoreApplication::translate("PasienWindow", "Kembali", nullptr));
        label_6->setText(QCoreApplication::translate("PasienWindow", "Gejala", nullptr));
        label_7->setText(QString());
        label_8->setText(QString());
        label_5->setText(QString());
        label_9->setText(QCoreApplication::translate("PasienWindow", "MITRA JAYA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PasienWindow: public Ui_PasienWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASIEN_H
