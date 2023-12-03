
#include <array>
#include <iostream>
using namespace std ;

int main() {

	array<int, 5> arr1 = { 11, 12, 13, 14, 15 };

	cout << arr1.at(2)   << endl;
	cout << arr1.front() << endl;
	cout << arr1.back()  << endl;

	int* pData = arr1.data();
	cout << "pData[3] ="  << pData[3] << endl;

	return 0;
}


