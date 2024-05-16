#ifndef ADMINCRUD_H
#define ADMINCRUD_H

#include <QString>
#include <QDate>

// Struktur data untuk informasi pasien
struct Patient {
    QString name;
    int age;
    QDate dateEntered;
    QString status;
};

class AdminCRUD {
private:
    static const int MAX_PATIENTS = 100; // Maksimum jumlah pasien
    Patient patients[MAX_PATIENTS]; // Array untuk menyimpan data pasien
    int numPatients; // Jumlah pasien yang ada

public:
    // Konstruktor
    AdminCRUD();

    // Fungsi untuk menambahkan pasien
    bool addPatient(const QString &name, int age, const QDate &dateEntered, const QString &status);

    // Fungsi untuk mencari pasien berdasarkan nama
    Patient* searchPatientByName(const QString &name);

    // Fungsi untuk menghapus pasien berdasarkan nama
    bool deletePatient(const QString &name);

    // Fungsi untuk menampilkan semua pasien
    void displayAllPatients();

    // Fungsi untuk mengupdate data pasien berdasarkan nama
    bool updatePatient(const QString &name, int newAge, const QDate &newDateEntered, const QString &newStatus);
};

#endif // ADMINCRUD_H
