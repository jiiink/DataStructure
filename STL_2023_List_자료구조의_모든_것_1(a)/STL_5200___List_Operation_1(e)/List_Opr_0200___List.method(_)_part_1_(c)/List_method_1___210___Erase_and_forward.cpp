#include <bits/stdc++.h>
using namespace std;

#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;

int main( ) {

    list<int> ml= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    myout("1. ml[] = ", ml ) ;

    auto it = ml.begin() ;
    it = ml.erase( it ) ;
    myout("2. ml[] = ", ml ) ;

    advance(it, 2) ;
    cout << "\n *it= " << *it ;
    it = ml.erase( it ) ;
    myout("3. ml[] = ", ml ) ;

    cout << "\n *it= " << *it ;
    it = ml.erase( it ) ;
    it = ml.erase( it ) ;
    it = ml.erase( it ) ;
    myout("4. ml[] = ", ml ) ;


    // ml.erase( it ) ;  // error ¹ß»ý, lost iterator, it
    // ml.erase( it ) ;
    // myout("6. ml[] = ", ml ) ;
}
