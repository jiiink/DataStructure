#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;


int main() {

    list< int > La = {  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12 } ;      // create list of ints
    list< int >::iterator it1, it2, it3 ;

    mout("> 주어진 La[]= ", La) ;
    it1 = La.begin() ;
    it2 = La.end()   ;

    advance( it1, +2 ) ;
    advance( it2, -3 ) ;

    it3 = La.erase( it1, it2 ) ;
           // [3,4,5,6,7]을 지움, 그 결과를 지운 원소의 끝 값으로

    mout("> La.erase( it1, it2 ) 이후  La[]= ", La) ;
    cout << "\n  *it3= " << *it3 ;

    it1 = La.erase( it3, La.end() ) ;
           // [3,4,5,6,7]을 지움, 그 결과를 지운 원소의 끝 값으로

    mout("> La.erase( it3, La.end() ) 이후  La[]= ", La) ;
    cout << "\n  *it1= " << *it1 ;

    return 0;
}
