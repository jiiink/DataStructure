#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(void) {
	fstream myfile;
	myfile.open("test.txt", ios::in);

	if (myfile.is_open()) {
		int number;
		myfile >> number;

		cout << number << endl;

		string strArr[number];
		int intArr[number];

		for (int i=0; i<number; i++) {
			myfile >> strArr[i] >> intArr[i];
		}

		for (int i=0; i<number; i++) {
			cout << strArr[i] << " " << intArr[i] << endl;
		}
	}

	myfile.close();
	return 0;
}