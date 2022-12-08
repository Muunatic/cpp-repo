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
    
    // Input
    arsipMatkul.open("db.dat", ios::out);
    cout << "Tuliskan rekaman satu persatu";
    cout << endl;
    cout << "Masukan NIM: ";
    cin >> record.nim;
    
    // Process
    while(record.nim != "exit") { // Type "exit" for exit
        cout << "Masukan nama: ";
        cin >> record.nama;
        cout << "Masukan nilai: ";
        cin >> record.nilai;
        
        arsipMatkul << record.nim << " " << record.nama << " " << record.nilai << endl;
        cout << "Masukan NIM : ";
        cin >> record.nim;
    }
    
    // Output
    arsipMatkul << "XXXXXX XXXX X" << endl;
    arsipMatkul.close();
    
    return 0;
}
