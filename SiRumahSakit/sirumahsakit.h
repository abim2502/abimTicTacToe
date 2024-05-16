#ifndef SIRUMAHSAKIT_H
#define SIRUMAHSAKIT_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include "admin.h" // Include admin window header
#include "pasien.h"

QT_BEGIN_NAMESPACE
namespace Ui { class SiRumahSakit; }
QT_END_NAMESPACE

class SiRumahSakit : public QMainWindow
{
    Q_OBJECT

public:
    SiRumahSakit(QWidget *parent = nullptr);
    ~SiRumahSakit();

private slots:
    void on_loginButton_clicked(); // Deklarasi slot untuk tombol login

private:
    Ui::SiRumahSakit *ui;
    AdminWindow *adminWindow; // Pointer ke instance admin window
    PasienWindow *pasienWindow;
};

#endif // SIRUMAHSAKIT_H
