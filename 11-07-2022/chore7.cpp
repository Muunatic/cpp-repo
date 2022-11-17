#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int i;
    cin >> i;

    if (i % 2 == 0) {
        cout << "genap" << i << endl;
    } else if (i % 2 != 0) {
        cout << "ganjil" << i << endl;
    }

    int i;

    for (i = 0; i <= 10; i++) {
        cout << i << endl;
    }

    int i, n;
    cin >> n;

    if (n < 10) {
        for (i = 0; i < n; i++) {
            cout << i << endl;
        }
    } else {
        cout << "input lebih dari 10";
    }

    int a, b;

    cout << "masukan bilangan pertama : ";
    cin >> a;

    cout << "masukan bilangan kedua : ";
    cin >> b;

    if (a % 2 != 0 && b % 2 != 0) {
        cout << "perkalian kedua bilangan tersebut adalah = " << (a * b);
    }

    else if (a % 2 == 0 && b % 2 == 0) {
        cout << "pertambahan kedua bilangan tersebut adalah = " << (a + b);
    } else {
        cout << "bilangan pertama = " << a << "\nbilangan kedua = " << b;
    }

    return 0;
}
