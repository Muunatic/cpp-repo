#include <iostream>
using namespace std;

int main() {

    // Variable
    int x;
    int y;
    int z;

    // Input
    cout << "Masukan bilangan A: ";
    cin >> x;
    cout << "Masukan bilangan B: ";
    cin >> y;
    cout << "Masukan bilangan C: ";
    cin >> z;

    // Output
    if (x > y && x > z) {
        cout << "Bilangan terbesar adalah " << x;
    } else if (x > y && x > z) {
        cout << "Bilangan terbesar adalah " << y;
    } else if (z > y && z > x) {
        cout << "Bilangan terbesar adalah " << z;
    } else {
        cout << "Terjadi Kesalahan";
    }

    return 0;
    
}
