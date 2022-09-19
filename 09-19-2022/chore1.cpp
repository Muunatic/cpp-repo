#include <iostream>
using namespace std;

int main() {

    float C;
    float F;
    float K;
    float R;

    cout << "Input C: ";
    cin >> C;

    F = ((C * 9/5) + 32);
    K = C + 273.15;
    R = C * 4/5;

    cout << F << endl;
    cout << K << endl;
    cout << R << endl;

    return 0;
    
}