#include <bits/stdc++.h>
using namespace std;


int main()  {

	allocator<string> myAllocator;
    string* mystr = myAllocator.allocate(10);

	// construct these 3 strings
	myAllocator.construct(mystr,     "Geeks-");
	myAllocator.construct(mystr + 1,   "for-");
	myAllocator.construct(mystr + 2, "Peeks-");

	cout << "\n Before: " << mystr[0] << mystr[1] << mystr[2];


	myAllocator.destroy(mystr);
	myAllocator.destroy(mystr + 1);
	myAllocator.destroy(mystr + 2);
	cout << "\n After: " << mystr[0] << mystr[1] << mystr[2];

	myAllocator.deallocate(mystr, 3);
	// cout << "\n After3: " << mystr[0] << mystr[1] << mystr[2];
}
