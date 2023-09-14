#include <bits/stdc++.h>
#include <iostream>
#define  N  5
using namespace std ;

typedef array<array<int,N>,N> Darray ;


void arrset( Darray &M, int p){  // reference  &M으로 받아야 한다. 그래야 변화가 반영된다.
    for( auto &Row : M){
        cout << "\n" ; // 줄바꿈.
        for ( auto &mymy  : Row ){
            mymy = p ;
        }
    }
} // end of allset( )

void arrout( string msg, Darray M){
    cout << "\n\n arrout(): " << msg << "\n" ;
    for( auto Row : M){
        cout<<"\n" ;
        for ( auto element : Row )
              cout << element << " " ;
    }
}  // end of arrout( )


Darray Outer ;

int main() {
   Darray Inner ;

   arrset( Outer, 7) ;
   arrout( "Global: Outer 출력해보기", Outer) ;

   arrset( Inner, 8) ;
   arrout( "Automatic: Inner 출력해보기", Inner) ;



return 0;
}


