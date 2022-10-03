#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int jam;
	
	cout << "Masukan jam: ";
	cin >> jam;

	if (jam < 12) {
		cout << "Gaji sebesar 100.000";
	} else if (jam == 12) {
		cout << "Gaji sebesar 200.000";
	} else {
		cout << "Gaji sebesar 300.000";
	}
	
	return 0;
	
}
