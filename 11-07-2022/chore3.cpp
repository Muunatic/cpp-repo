#include <iostream>
using namespace std;

int main(int argc, char **argv) {
    int i, n;
    n = 10;
    for (i = n; i > 0; i--) {
        i = i - 1;
        cout << i << endl;
    }

    return 0;
}