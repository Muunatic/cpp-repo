#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    int parameter, salary, time, result;
    string name;

    cout << "Masukan nama: ";
    getline(cin, name);
    cout << "Masukan parameter: ";
    cin >> parameter;
    cout << "Masukan jam kerja: ";
    cin >> time;

    switch(parameter) {
        case 1:
            salary = 5000;
        break;
        case 2:
            salary = 10000;
        break;
        case 3:
            salary = 20000;
        break;
        default:
            cout << "Invalid!";
        break;
    }

    salary = time * salary;

    if ((time - 24) > 0) {
        salary = salary + ((time - 24)*4000);
    } else {
        cout << "Waktu kerja kurang";
        exit(0);   
    }

    cout << endl;
    cout << name << " " << "menerima upah sebesar Rp." << salary << " " << "perminggu";
    cout << endl;

	return 0;
	
}