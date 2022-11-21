#include <iostream>
using namespace std;

void initial() {
    cout << "## Selection Sort ##" << endl;
    cout << "====================" << endl;
    cout << endl;
}

tampilArray(int n, int arr[]) {
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
    int i, temp, minIndeks, j, k, jumlahdata;

    cout << "Masukan bilangan pada array" << endl;
    for (k = 1; k <= index_arr; k++) {
        cout << "Bilangan ke " << k << ": ";
        cin >> array_bil[k-1];
    }

    for (i = 0; i < index_arr-1; i++) {
        minIndeks = i;

        for (j = (i + 1); j < index_arr; j++) {
            if (array_bil[minIndeks] > array_bil[j]) {
                minIndeks = j;
            }
        }

        temp = array_bil[i];
        array_bil[i] = array_bil[minIndeks];
        array_bil[minIndeks] = temp;
    }

    cout << "Berapa jumlah data yang ingin ditampilkan: ";
    cin >> jumlahdata;

    tampilArray(jumlahdata, array_bil);

    return 0;
}