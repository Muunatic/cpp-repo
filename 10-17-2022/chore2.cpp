#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int i, j, n;
    cout << "Enter number of rows: ";
    cin >> n;
    
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
