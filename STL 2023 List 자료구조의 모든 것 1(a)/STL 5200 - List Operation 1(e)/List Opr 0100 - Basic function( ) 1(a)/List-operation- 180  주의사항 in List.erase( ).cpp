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

    advance( it1, +7 ) ;
    //advance( it2, -2 ) ;

    it3 = La.erase( it1, it2 ) ;

    // 특정 위치부터 끝 원소까지 지울 경우에 return iterator는 last원소를 가르치킨다.
    // [8,9,10]을 지울 경우 return iterator는 11을 지시한다.
    // 만일 [8,9,10,11,12]를 지울 경우에는 last( ) 원소인 7을 지시한다.

    mout("> La.erase() 이후  La[]= ", La) ;
    cout << "\n  *it3= " << *it3 ;



    return 0;
}
