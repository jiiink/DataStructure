#include <bits/stdc++.h>
#include <iostream>
#define  N  10

using namespace std ;

void show_array(  array< array<int, 3>, 10> Q ){ // self-explanatory
    int i,j,k ;
    i = j = 0 ;
    for( auto U : Q ){
        for( auto v : U ) {
            printf(" %3d", v) ;
            j++ ;
        }
        printf("\n") ;
        i++; j=0 ;
    }
} // end of showit( )


array <array <int,3>, 10 > A {{ // EXTRA BRACES
  { 1, 16, 63},
  {11, 32, 50},
  { 3, 11,  7},
  {60, 32, 53},
  { 7, 16, 43},
  {56, 32,  6},
  {75,  3, 60},
  {46, 35, 99},
  { 7, 54, 82},
}};



int main(){

    sort( A.begin(), A.end() ) ;  // 만능 소팅 ...
    show_array( A ) ;


}

