#include <iostream>
using namespace std;


void UcapanSelamat(string nilai, string nama, int usia){
    cout << "Nama anda " << nama << " anda berusia " << usia << " anda lulus dengan nilai " << nilai << endl;
    cout << "Mari liburan" << endl;
    cout << "Sampai Jumpa" << endl;
}

int main(int argc, char** argv) {
    string nama, nilai;
    int usia;
    
    cout << "Masukan Nama = ";
    cin >> nama;
    cout << "Masukan Usia = ";
    cin >> usia;
    cout << "Masukkan Nilai = ";
    cin >> nilai;
    if (nilai == "a") {
        UcapanSelamat(nilai, nama, usia);
    } else if (nilai == "b") {
        UcapanSelamat(nilai, nama, usia);
    } else if (nilai == "c") {
        UcapanSelamat(nilai, nama, usia);
    } else if (nilai == "d") {
        UcapanSelamat(nilai, nama, usia);
    } else {
        cout << "Invalid" << endl;
    }
    
    return 0;
}