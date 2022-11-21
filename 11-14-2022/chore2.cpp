#include <iostream>
using namespace std;

void initial() {
    cout << "## Insertion Sort ##" << endl;
    cout << "====================" << endl;
    cout << endl;
}

void tampilArray(int n, int arr[]) {
    int i;
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main(int argc, char **argv) {
    initial();

    int index_arr;
    cout << "Masukan indeks array: ";
    cin >> index_arr;

    int array_bil[index_arr];
    int i, k, j, jumlahdata, data_sisip;

    cout << "Masukan bilangan pada array" << endl;
    for (k = 1; k <= index_arr; k++) {
        cout << "Bilangan ke " << k << ": ";
        cin >> array_bil[k-1];
    }

    for (i = 1; i < index_arr; i++) {
        data_sisip = array_bil[i];
        j = i - 1;

        while ((data_sisip < array_bil[j]) && (j >= 0)) {
            array_bil[j + 1] = array_bil[j];
            j = j - 1;
        }
        array_bil[j + 1] = data_sisip;
    }

    cout << "Berapa jumlah data yang ingin ditampilkan: ";
    cin >> jumlahdata;

    tampilArray(jumlahdata, array_bil);
    
    return 0;
}