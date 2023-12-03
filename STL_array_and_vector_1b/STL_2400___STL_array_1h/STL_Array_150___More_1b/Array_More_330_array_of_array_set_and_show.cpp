#include <bits/stdc++.h>
#include <iostream>
#define  N  10    // N=20000 이면 에러날껄 ?
using namespace std ;

typedef array<array<int,N>,N> Darray ;



void allset( Darray &M, int p){  // reference  &M으로 받아야 한다. 그래야 변화가 반영된다.
    for( auto &Row : M){
        for ( auto &element : Row ){
            element = p ;
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

   allset( Outer, 7) ;
   arrout( "Global: Outer 출력해보기", Outer) ;

   allset( Inner, -3) ;
   arrout( "Automatic: Inner 출력해보기", Inner) ;



return 0;
}


