#include <bits/stdc++.h>
using namespace std ;

typedef array< array<int, 3>, 5> Drray35 ;

void Tout( array< Drray35, 6 > Q ){
    int i,j,k ;

    i = j = k = 0 ;
    for( auto U :     Q ){
        for( auto V : U ) {
            for( auto w : V ){
                printf("\n %d %d %d,  v=%4d", i,j,k, w) ;
                k++ ;
            }
            k= 0 ; j++ ;
        }
        i++; j=0 ;
    }
} // end of Tout( )

int main() {

    int i,j,k ;

    array< Drray35, 6 > Trray ;

    i = j = k = 0 ;
    for( auto &U : Trray){
        for( auto &V : U ) {
            for( auto &w : V ){
                w = 100*i + 10*j + k ;
                k++ ;
            } k= 0 ; j++ ;
        } i++; j=0 ;
    }

    Tout( Trray ) ;

    cout << "\n 실험이 끝났습니다. \n" ;
} // end of main( )
