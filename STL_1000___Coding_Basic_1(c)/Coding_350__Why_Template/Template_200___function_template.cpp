#include <iostream>
using namespace std;

template <typename T>
T GetMax(T a, T b) {
	T result;
	result = (a > b) ? a : b;
	return (result);
}

int main() {

	cout << "1. " << GetMax <int>  (5,        6) << endl;
	cout << "2. " << GetMax <float>(3.4, 3.4113) << endl;
	cout << "3. " << GetMax <string>("ธÞ",  "ที") << endl;
	return 0;

} // end of main( )


