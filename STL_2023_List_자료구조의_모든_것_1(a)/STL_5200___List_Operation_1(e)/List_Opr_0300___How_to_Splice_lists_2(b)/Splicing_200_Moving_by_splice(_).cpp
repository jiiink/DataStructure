#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;


int main() {

    list< int > La = {  1,  2,  3,  4,  5,  6,  7,  8,  9, 10 } ;      // create list of ints
    list< int > Lb = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 } ;
    list< int >::iterator it1, it2 ;

    mout("Before La[]= ", La) ;
    it1 = La.begin() ;
    it2 = La.begin() ;
    advance(it1, 3) ;
    advance(it2, 6) ;
    La.splice( La.end(), La, it1, it2 );
    mout("After La[]= ", La) ;

    cout << "\n 범위가 거꾸로 될 때 주의 해야 함. \n " ;
    mout("Before Lb[]= ", Lb) ;
    it1 = Lb.begin() ;
    it2 = Lb.begin() ;
    advance(it1, 6) ;
    advance(it2, 3) ;
    La.splice( Lb.end(), Lb, it1, it2 );
    mout("After Lb[]= ", Lb) ;

    return 0;
}
