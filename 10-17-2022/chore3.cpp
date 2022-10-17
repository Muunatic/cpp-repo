#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
    int i, j, n, cnt;
    n = 1;
    cout << "Enter Number of Rows : ";
    cin >> cnt;
    cout << endl;
    
    for (i = 0; i < cnt; i++) {
    	
        for (j = 0; j <= i; j++) {
            cout << n <<" ";
			n++;
        }
        
		cout << endl;
    }
    
	return 0;
	
}
