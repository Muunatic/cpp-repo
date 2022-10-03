#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	int bayar;
	cout << "Masukan pembayaran: ";
	cin >> bayar;
	
	if (bayar < 100000) {
		cout << "Pembayaran: " << bayar;
	} else if (bayar >= 100000 && bayar < 200000) {
		cout << "Pembayaran: " << bayar*90/100;
	} else if (bayar >= 200000 && bayar <= 300000) {
		cout << "Pembayaran: " << bayar*80/100;
	} else {
		cout << "Error!";
	}
	
	return 0;
	
}
