#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QDate>

namespace Ui {
class AdminWindow;
}

struct Pasien {
    QString nama;
    QString diagnosa;
    QString ruangan;
    int umur;
    QDate tanggalMasuk;
    QString status;
};

class AdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();

private slots:
    void on_pushButtonTambah_clicked();
    void on_pushButtonHapus_clicked();
    void on_pushButtonUpdate_clicked();
    void on_pushButtonCari_clicked();

    void on_pushButton_clicked();

    void on_namaLineEdit_2_cursorPositionChanged(int arg1, int arg2);

    void on_namaLineEdit_cursorPositionChanged(int arg1, int arg2);

    void on_label_7_linkActivated(const QString &link);

    void on_lineEdit_cursorPositionChanged(int arg1, int arg2);

private:
    Ui::AdminWindow *ui;
    static const int MAX_PASIEN = 100;
    Pasien dataPasien[MAX_PASIEN];
    int jumlahPasien = 0;
    QStandardItemModel *model;

    void tampilkanData();
    int linearSearch(const QString& namaCari);
};

#endif // ADMIN_H
