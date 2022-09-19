#include <iostream>
using namespace std;

int main() {

    float C;
    float F;
    float K;
    float R;

    cout << "Input F: ";
    cin >> F;

    C = ((F - 32) * 5/9);
    K = ((F - 32) * 5/9 + 273.15);
    R = ((F - 32) * 4/9);

    cout << C << endl;
    cout << K << endl;
    cout << R << endl;

    return 0;
    
}