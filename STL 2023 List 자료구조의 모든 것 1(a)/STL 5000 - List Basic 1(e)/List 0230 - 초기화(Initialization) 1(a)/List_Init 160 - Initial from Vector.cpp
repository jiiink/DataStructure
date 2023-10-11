#include <bits/stdc++.h>
using namespace std;
#include "mytool.h"

int main() {
	int arr[] = { 2, 8, 7, 5, 3, 1, 4 };
    auto array_length = end(arr) - begin(arr);


    cout << " sizeof(arr): " <<  sizeof(arr) << endl ;
    cout << " sizeof(int): " <<  sizeof(int) << endl ;
    cout << " size  (arr): " <<  array_length << endl ;

	list<int> la (arr, arr + sizeof(arr) / sizeof(int));

	dump("List Initialization for Vector:", la ) ;

	return 0;
}


