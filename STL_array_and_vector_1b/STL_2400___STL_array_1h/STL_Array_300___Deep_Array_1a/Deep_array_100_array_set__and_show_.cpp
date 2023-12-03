#include <bits/stdc++.h>
using namespace std ;


void show_array(  array< array<int, 3>, 5> Q ){ // self-explanatory
    int i,j,k ;
    i = j = 0 ;
    for( auto U : Q ){
        for( auto v : U ) {
            printf("\n i,j=%2d,%2d, val=%3d", i, j, v) ;
            j++ ;
        }
        i++; j=0 ;
    }
} // end of showit( )

void set_array( array< array<int, 3>, 5> &Q ){
    int i,j,k ;
    i = j = 0 ;
    for( auto &U : Q ){
        for( auto &v : U ) {
            v = 10*i + j ;
            j++ ;
        }
        i++; j=0 ;
    }
} // end of showit( )

int main() {

    array< array<int, 3>, 5> stlarray ;

    set_array ( stlarray ) ;
    show_array( stlarray ) ;

    cout << "\n 실험이 끝났습니다. \n" ;
}
