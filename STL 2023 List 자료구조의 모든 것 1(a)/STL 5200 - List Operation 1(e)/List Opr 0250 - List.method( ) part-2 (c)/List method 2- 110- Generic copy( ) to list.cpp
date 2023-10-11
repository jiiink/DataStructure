#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {

	string s = "ABC";

	list<char> chars(s.length());
	copy(s.begin(), s.end(), chars.begin());

	for (char c: chars)
		cout << c << '\n';

	return 0;
}
