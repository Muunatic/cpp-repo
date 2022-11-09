#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int a, b;
    cin >> a;
    cin >> b;

    if (a %2 == 0 && b %2 == 0) {
        cout << "Genap" << a - b;
    } else if (a %2 != 0 && b %2 != 0) {
        cout << "Ganjil" << a / b;
    } else {
        cout << "Bilangan pertama" << " " << a << "Bilangan kedua" << " " << b;
    }

    return 0;
}