#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a;
    int b;
    int c;
    int result;

    cout << "Input A: ";
    cin >> a;
    cout << "Input B: ";
    cin >> b;
    cout << "Input C: ";

    result = (-b + sqrt(b * b - 4 * a * c) / 2 * a);

    return 0;
    
}