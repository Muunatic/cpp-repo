#include <iostream>
using namespace std;

// deklarasi prosedur
void luasLayangLayang(float d1, float d2, float setengah, float *luas){
    // isi kode prosedur
    *luas = 0.5 * d1 * d2;
}

int main(int argc, char** argv) {
    float d1, d2, setengah, luas;
    setengah = 0.5;
    cout << "Masukkan nilai diagonal1 = ";
    cin >> d1;
    cout << "Masukkan nilai diagonal2 = ";
    cin >> d2;
    
    luasLayangLayang(d1, d2, 0.5, &luas);
    
    cout << "Hasil luas = " << luas;
    
    return 0;
}