#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"

int main() {

	map< vector<string>, vector<string> > mymap = 	{
				{ { "부산", "동래구" }, {"부산대학교", "Coffee"}  },
				{ { "대전", "유성구" }, {"배재대학교", "Milk", "Sorry" }  }
	};


	for (auto entry : mymap) {  // C++11의 함수형 기능
		for ( string i : entry.first )
			    cout << i << " , ";
		cout << "\n 모든 value ===>  " ;
		for (string i : entry.second )
			    cout << i << " , ";
		cout << "\n " ;

	}
	return 0;
}

