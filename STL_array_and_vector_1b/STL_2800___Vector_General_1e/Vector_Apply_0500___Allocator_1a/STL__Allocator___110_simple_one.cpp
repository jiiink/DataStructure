#include <bits/stdc++.h>
using namespace std;

int main() {

	allocator<int> myAllocator;  //정수 형식을 만드는 배당자이다.

	int* arr = myAllocator.allocate(5); 	// 5개의 정수 공간을 만들어서 그 주소를 arr로 준다.
	myAllocator.construct(arr  , 111 ); 	    // arr[0]을  111로 채운다.
	myAllocator.construct(arr+4, 444 ); 	    // arr[4]을  444로 채운다.
	arr[3] = 310;


	cout << "arr[0] = " << arr[0] << endl;
	cout << "arr[1] = " << arr[1] << endl;
	cout << "arr[2] = " << arr[2] << endl;
	cout << "arr[3] = " << arr[3] << endl;
	cout << "arr[4] = " << arr[4] << endl;

	myAllocator.deallocate(arr, 5); 	// deallocate space for five ints

	return 0;
}
