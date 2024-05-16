/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_AdminWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonTambah;
    QPushButton *pushButtonUpdate;
    QPushButton *pushButtonHapus;
    QPushButton *pushButtonCari;
    QTableView *tableView;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *namaLineEdit;
    QDateEdit *tanggalMasukDateEdit;
    QSpinBox *umurSpinBox;
    QComboBox *statusComboBox;
    QPushButton *pushButton;
    QLabel *label_bcadmin;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *ruanganlineEdit;
    QLabel *label_8;
    QLineEdit *diagnosalineEdit;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName("AdminWindow");
        AdminWindow->resize(1573, 881);
        centralwidget = new QWidget(AdminWindow);
        centralwidget->setObjectName("centralwidget");
        pushButtonTambah = new QPushButton(centralwidget);
        pushButtonTambah->setObjectName("pushButtonTambah");
        pushButtonTambah->setGeometry(QRect(990, 120, 80, 24));
        pushButtonUpdate = new QPushButton(centralwidget);
        pushButtonUpdate->setObjectName("pushButtonUpdate");
        pushButtonUpdate->setGeometry(QRect(990, 200, 80, 24));
        pushButtonHapus = new QPushButton(centralwidget);
        pushButtonHapus->setObjectName("pushButtonHapus");
        pushButtonHapus->setGeometry(QRect(990, 160, 80, 24));
        pushButtonCari = new QPushButton(centralwidget);
        pushButtonCari->setObjectName("pushButtonCari");
        pushButtonCari->setGeometry(QRect(990, 240, 80, 24));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(460, 360, 611, 301));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(450, 120, 121, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        font.setBold(false);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(450, 240, 121, 31));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(450, 280, 211, 31));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(450, 320, 121, 31));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        namaLineEdit = new QLineEdit(centralwidget);
        namaLineEdit->setObjectName("namaLineEdit");
        namaLineEdit->setGeometry(QRect(680, 120, 231, 24));
        tanggalMasukDateEdit = new QDateEdit(centralwidget);
        tanggalMasukDateEdit->setObjectName("tanggalMasukDateEdit");
        tanggalMasukDateEdit->setGeometry(QRect(680, 280, 231, 25));
        umurSpinBox = new QSpinBox(centralwidget);
        umurSpinBox->setObjectName("umurSpinBox");
        umurSpinBox->setGeometry(QRect(680, 240, 81, 25));
        statusComboBox = new QComboBox(centralwidget);
        statusComboBox->addItem(QString());
        statusComboBox->addItem(QString());
        statusComboBox->setObjectName("statusComboBox");
        statusComboBox->setGeometry(QRect(680, 320, 111, 24));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1240, 690, 93, 29));
        label_bcadmin = new QLabel(centralwidget);
        label_bcadmin->setObjectName("label_bcadmin");
        label_bcadmin->setGeometry(QRect(-20, 0, 1731, 841));
        label_bcadmin->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 0));"));
        label_bcadmin->setPixmap(QPixmap(QString::fromUtf8("E:/tubessda/bcrumahsakit.jpg")));
        label_bcadmin->setScaledContents(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(1240, 10, 79, 79));
        label_6->setPixmap(QPixmap(QString::fromUtf8("E:/tubessda/logo.png")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(450, 200, 81, 31));
        label_7->setFont(font);
        ruanganlineEdit = new QLineEdit(centralwidget);
        ruanganlineEdit->setObjectName("ruanganlineEdit");
        ruanganlineEdit->setGeometry(QRect(680, 200, 231, 26));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(450, 160, 91, 31));
        label_8->setFont(font);
        diagnosalineEdit = new QLineEdit(centralwidget);
        diagnosalineEdit->setObjectName("diagnosalineEdit");
        diagnosalineEdit->setGeometry(QRect(680, 160, 231, 26));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(1230, 90, 101, 22));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(11);
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(730, 30, 111, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(18);
        font2.setBold(true);
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:1 rgba(0, 0, 0, 0));"));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(640, -110, 271, 311));
        label->setPixmap(QPixmap(QString::fromUtf8("E:/tubessda/lataradmin.png")));
        label->setScaledContents(true);
        AdminWindow->setCentralWidget(centralwidget);
        label_bcadmin->raise();
        label->raise();
        pushButtonTambah->raise();
        pushButtonUpdate->raise();
        pushButtonHapus->raise();
        pushButtonCari->raise();
        tableView->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        namaLineEdit->raise();
        tanggalMasukDateEdit->raise();
        umurSpinBox->raise();
        statusComboBox->raise();
        pushButton->raise();
        label_6->raise();
        label_7->raise();
        ruanganlineEdit->raise();
        label_8->raise();
        diagnosalineEdit->raise();
        label_9->raise();
        label_10->raise();
        label_9->raise();
        label_6->raise();
        menubar = new QMenuBar(AdminWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1573, 26));
        AdminWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AdminWindow);
        statusbar->setObjectName("statusbar");
        AdminWindow->setStatusBar(statusbar);

        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AdminWindow)
    {
        AdminWindow->setWindowTitle(QCoreApplication::translate("AdminWindow", "MainWindow", nullptr));
        pushButtonTambah->setText(QCoreApplication::translate("AdminWindow", "Buat", nullptr));
        pushButtonUpdate->setText(QCoreApplication::translate("AdminWindow", "Perbarui", nullptr));
        pushButtonHapus->setText(QCoreApplication::translate("AdminWindow", "Hapus", nullptr));
        pushButtonCari->setText(QCoreApplication::translate("AdminWindow", "Cari", nullptr));
        label_2->setText(QCoreApplication::translate("AdminWindow", "Nama Pasien", nullptr));
        label_3->setText(QCoreApplication::translate("AdminWindow", "Umur Pasien", nullptr));
        label_4->setText(QCoreApplication::translate("AdminWindow", "Tanggal Pasien Masuk", nullptr));
        label_5->setText(QCoreApplication::translate("AdminWindow", "Status Pasien", nullptr));
        statusComboBox->setItemText(0, QCoreApplication::translate("AdminWindow", "Dirawat", nullptr));
        statusComboBox->setItemText(1, QCoreApplication::translate("AdminWindow", "Sudah Keluar", nullptr));

        pushButton->setText(QCoreApplication::translate("AdminWindow", "Kembali", nullptr));
        label_bcadmin->setText(QString());
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("AdminWindow", "Ruangan", nullptr));
        label_8->setText(QCoreApplication::translate("AdminWindow", "Diagnosa", nullptr));
        label_9->setText(QCoreApplication::translate("AdminWindow", "MITRA JAYA", nullptr));
        label_10->setText(QCoreApplication::translate("AdminWindow", "ADMIN", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
