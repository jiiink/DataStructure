#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;


int main() {

    list< int > La = {  1,  2,  3,  4,  5,  6,  7,  8,  9, 10 } ;      // create list of ints
    list< int >::iterator it1, it2 ;

    mout("Before La[]= ", La) ;
    it1 = La.begin() ;   advance( it1, +2 ) ;
    it2 = La.end()   ;   advance( it2, -3 ) ;
    La.erase( it1, it2 ) ;

    mout("After La[]= ", La) ;



    return 0;
}
