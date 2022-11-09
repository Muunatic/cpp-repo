#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int cari, i, n;
    int bilangan[3];
    int indeks;
    int awal, tujuan, penampung;
    bool ketemu = false;

    cout << "Masukan jumlah indeks = ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Input elemen array di indeks ke-" << i << " ";
        cin >> bilangan[i];
    }

    for (i = 0; i < n; i++) {
        cout << bilangan[i] << " ";
    }

    cout << "Masukan indeks yang akan ditukar ";
    cin >> awal;
    cout << "Masukan indeks tujuan ";
    cin >> tujuan;

    penampung = bilangan[awal];
    bilangan[awal] = bilangan[tujuan];
    bilangan[tujuan] = penampung;

    for (i = 0; i < n; i++) {
        cout << bilangan[i] << " ";
    }

    return 0;
}