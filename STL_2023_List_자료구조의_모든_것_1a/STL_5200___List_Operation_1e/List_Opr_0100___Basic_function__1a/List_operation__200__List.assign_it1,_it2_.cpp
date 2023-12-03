
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std ;

int main () {

    list<int> first {21, 22, 23, 24, 25, 26, 27, 28, 29, 30 };
    list<int> second, third;

    second.assign ( ++first.begin(), --first.end());
    third.assign ( {77, 2, 16} );
    allout("List first[]= ", first ) ;
    allout("List second[]= ", second ) ;
    allout("List first[]= ", third ) ;
    return 0;
}
