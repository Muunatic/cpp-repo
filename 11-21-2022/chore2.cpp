#include <iostream>
using namespace std;

// deklarasi prosedur
void luasLingkaran(float r, float *luas) {
    // isi kode prosedur
    *luas = 3.14 * r * r;
}

int main(int argc, char **argv) {
    float r, luas;
    cout << "Masukkan nilai jari-jari = ";
    cin >> r;

    luasLingkaran(r, &luas);

    cout << "Hasil luas = " << luas;

    return 0;
}