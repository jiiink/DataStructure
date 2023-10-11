#include <bits/stdc++.h>
using namespace std;

int main() {

    list<int> ml = { 11, 12, 13, 15, 16 };

    auto it = ml.begin() ;
    int msize ;

    msize = ml.size() ;

    cout << "\n 1.     advance(it, 0 ) = " << *it ;
    advance(it, 2 ) ;
    cout << "\n 2.     advance(it, 2 ) = " << *it ;
    advance(it, 5 ) ;
    cout << "\n 3.     advance(it, 5 ) = " << *it ;
    advance(it, 10 ) ;
    cout << "\n 3.     advance(it, 10 ) = " << *it ;



} // end of main()
