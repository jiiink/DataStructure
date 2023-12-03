#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;


int main() {

	string str = "Summer Time Killer";
	list<char> chars(str.begin(), str.end());

	for (char c: chars) {
            cout << c << '\n';
	}


	return 0;
}
