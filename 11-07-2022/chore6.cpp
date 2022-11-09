#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int cari, i, n;
    int bilangan[3];
    bool ketemu = false;

    cout << "Masukan jumlah indeks";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Input elemen array di indeks ke-" << i << " ";
        cin >> bilangan[i];
    }

    cout << "Masukan bilangan yang akan dicari = ";
    cin >> cari;

    for (i = 0; i < n; i++) {
        if (bilangan[i] == cari) {
            ketemu = true;
        }
    }

    if (ketemu) {
        cout << "Data ditemukan";
    } else {
        cout << "undefined";
    }

    return 0;
}