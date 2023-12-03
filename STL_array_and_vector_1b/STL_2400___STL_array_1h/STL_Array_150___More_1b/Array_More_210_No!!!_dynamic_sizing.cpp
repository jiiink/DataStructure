#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<< " " << w<<", "

using namespace std ;

int main() {

    int N = 100 ;

    dynarray<int> arr(N); //  C++11에서 허용을 했는데. 지금은 쓰면 안됨


	int x, n;
	cout << "Enter the number of items:" << "\n";
	cin >>n;
	int *arr = new int(n);
	cout << "Enter " << n << " items" << endl;
	for (x = 0; x < n; x++) {
		cin >> arr[x];
	}
	cout << "You entered: ";
	for (x = 0; x < n; x++) {
		cout << arr[x] << " ";
	}
	return 0;
}

} // end of main( )



