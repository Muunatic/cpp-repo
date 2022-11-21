#include <iostream>
using namespace std;

void initial() {
    cout << "## Binary Search ##" << endl;
    cout << "===================" << endl;
    cout << endl;
}

int main(int argc, char** argv) {
    initial();

    int index_arr;
    cout << "Masukan indeks array: ";
    cin >> index_arr;
    
    int i, j, n, bil_cari, k;
    int array_bil[index_arr];
    bool ketemu;
    i = 0;
    j = 9;
    ketemu = false;
    
    cout << "Masukan bilangan pada array" << endl;
    for (n = 1; n <= index_arr; n++) {
        cout << "Bilangan ke " << n << ": ";
        cin >> array_bil[n];
    }

    cout << "Masukan bilangan yang ingin anda cari: "<< endl;
    cin >> bil_cari;
    while ((ketemu == false) && (i <= j)) {
        k = (int)(i + j) / 2;
        
        if (array_bil[k] == bil_cari) {
            ketemu = true;
        } else {
            if (array_bil[k] > bil_cari) {
                j = k - 1;
            } else {
                i = k + 1;
            }
        }
    }

    if (ketemu == true) {
        cout << "Data ditemukan" << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }
    
    return 0;
}