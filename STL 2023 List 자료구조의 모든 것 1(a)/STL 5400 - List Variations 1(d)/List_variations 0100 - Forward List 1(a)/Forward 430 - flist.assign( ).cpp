
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<":- ";for(auto w:X)cout<<w<<", "
using namespace std ;

int main () {
    forward_list<int> first;
    forward_list<int> second;

    first.assign (4,15);                           // 15 15 15 15

    second.assign (first.begin(),first.end());     // 15 15 15 15

    first.assign ( {77, 2, 16} );                  // 77 2 16

    cout << "first contains: ";
    for (int& x : first)cout << ' ' << x;
    cout << '\n';

    cout << "second contains: ";
    for (int& x : second)cout << ' ' << x;
    cout << '\n';

    return 0;
}
