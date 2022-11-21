#include <iostream>
using namespace std;

void UcapanSelamat() {
    cout << "Selamat Anda Lulus dengan nilai" << endl;
    cout << "Mari liburan" <<endl;
    cout << "Sampai Jumpa" << endl;
}

int main(int argc, char** argv) {
    string nilai;
    cout << "Masukkan Nilai = ";
    cin >> nilai;
    if (nilai == "A") { 
        UcapanSelamat();
    } else if (nilai == "B") {
        UcapanSelamat();
    } else if (nilai == "C") {
        UcapanSelamat();
    } else if (nilai == "D") {
        UcapanSelamat();
    }

    return 0;
}