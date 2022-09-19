#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int a = 5678;

    int A = a/1000;
    int B = ((a - A * 1000) / 100);
    int C = ((a - A * 1000 - B * 100)/10);
    int D = ((a - A * 1000 - B * 100 - C * 10));

    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
    cout << D << endl;

    return 0;

}
