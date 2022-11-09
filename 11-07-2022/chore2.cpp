#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a > b && a > c) {
        cout << "Bilangan terbesar adalah bilangan A" << " " << a;
    } else if (b > a && b > c) {
        cout << "Bilangan terbesar adalah bilangan B" << " " << b;
    } else {
        cout << "Bilangan terbesar adalah bilangan C" << " " << c;
    }

    return 0;
}