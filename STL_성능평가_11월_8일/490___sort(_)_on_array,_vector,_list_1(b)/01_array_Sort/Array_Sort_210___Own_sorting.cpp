#include <bits/stdc++.h>
#include <algorithm>
using namespace std ;

void showit(  array< array<int, 5>, 6> Q ){
    int i,j,k ;
    i = j = 0 ;
    for( auto U : Q ){
        for( auto v : U ) {
            printf(" %3d", v) ;
            j++ ;
        }
        cout << "\n";
        i++; j=0 ;
    }
} // end of showit( )

bool kijoon ( array<int,5> i,  array<int,5> j) {
    return (  i[4]< j[4] ) ;
}

int main () {
    array<int,5> a = {10, 20, 31, 40, 50};
    array<int,5> b = {10, 20, 30, 40, 51};
    array<int,5> c = {50, 40, 30, 20, 10};
    array<int,5> d = { 5, 20, 30, 40, 50};
    array<int,5> e = {50,  4, 30,  0, 10};
    array<int,5> f = { 5, 10, 30, 40, 53};

    array< array<int, 5>, 6 > Urray ;

    Urray[0]=a ; Urray[1]=b ; Urray[2]=c ;
    Urray[3]=d ; Urray[4]=e ; Urray[5]=f ;

    // Urray를 정렬해서 원소를 새로 배치해 보시오.
    sort( Urray.begin(), Urray.end(), kijoon );


    showit( Urray );

    return 0;
}
