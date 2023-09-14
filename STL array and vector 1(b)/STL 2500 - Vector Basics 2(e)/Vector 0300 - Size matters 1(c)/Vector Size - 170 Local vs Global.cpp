// vector::size
#include <bits/stdc++.h>
using namespace std;

vector<int> outer {10, 20, 30, 40 } ;

int main () {
    vector<int> myv {100, 200, 300, -400, 2500} ;
    int i ;

    auto it = myv.begin() ;
    for( i=0 ; i < 10; i++, it++ ) {
        cout <<  i << ":- " << *it  << endl ;
    }

    cout << "Outer vector scanning \n" ;
    it = outer.begin() ;
    for( i=0 ; i < 10; i++, it++ ) {
        cout <<  i << ":- " << *it  << endl ;
    }

  return 0;
}
