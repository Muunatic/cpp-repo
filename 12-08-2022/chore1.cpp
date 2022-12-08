#include <iostream>
#include <fstream>
#include <string>
using namespace std;
typedef struct {
    string nim;
    string nama;
    string nilai;
} nilaiMatkul;

int main(int argc, char** argv) {
    // Record Variable
    nilaiMatkul record;
    fstream arsipMatkul;
    
    // Process
    arsipMatkul.open("db.dat", ios::in);
    cout << "Isi arsip beruntun adalah: " << endl;
    arsipMatkul >> record.nim >> record.nama >> record.nilai;
    
    if (record.nim == "XXXXXX") {
        cout << "Arsip kosong" << endl;
    } else {
        do {
            cout << "NIM: " << record.nim << endl;
            cout << "Nama: " << record.nama << endl;
            cout << "Nilai: " << record.nilai << endl;
            arsipMatkul >> record.nim >> record.nama >> record.nilai;
        } while (record.nim != "XXXXXX");
    }
    
    
    return 0;
}
