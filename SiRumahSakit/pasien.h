#ifndef PASIEN_H
#define PASIEN_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QDate>

namespace Ui {
class PasienWindow;
}

struct Pasient {
    QString nomor;
    QString nama;
    QString gejala;
    int umur;
    QDate tanggalMasuk;
    QString status;
};

class PasienWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PasienWindow(QWidget *parent = nullptr);
    ~PasienWindow();

private slots:
    void on_pushButtonTambah_clicked();
    void on_pushButtonUpdate_clicked();
    void on_pushButtonCari_clicked();

    void on_pushButton_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::PasienWindow *ui;
    static const int MAX_PATIENTS = 100;
    Pasient dataPasien[MAX_PATIENTS];
    int jumlahPasien = 0;
    QStandardItemModel *model;

    void tampilkanData();
    int linearSearch(const QString& namaCari);
};

#endif // PASIEN_H
