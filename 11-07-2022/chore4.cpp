#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int r, hasil, pilihan;
    char ulang;
    float phi = 3.14;

    do {
        cout << "1. Menghitung keliling lingkaran" << endl;
        cout << "2. Menghitung luas lingkaran" << endl;
        cout << "3. Keluar program" << endl;
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << "Masukan jari jari: ";
            cin >> r;
            hasil = phi * r * 2;
            cout << hasil << endl;
            break;
        case 2:
            cout << "Masukan jari jari: ";
            cin >> r;
            hasil = phi * r * r;
            cout << hasil << endl;
            break;
        case 3:
            cout << "Terima kasih";
            exit(0);
        }

        cout << "Ingin mengulang lagi y/t? ";
        cin >> ulang;

    } while (ulang == 'y');
    
    cout << "Terima kasih";

    return 0;
}