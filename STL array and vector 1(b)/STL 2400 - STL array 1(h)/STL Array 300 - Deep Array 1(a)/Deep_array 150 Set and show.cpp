#include <bits/stdc++.h>
using namespace std ;


int main() {

    int  i, j,  carray[10][10] ;
    array < int, 6 > { 101, 102, 103, 104, 105, 106} ;
    array< array<int, 5>, 5> stlarray  ;

    i = j = 0 ;
    for( U : stlarray){ // 값을 집어 넣음
        for( v : U ) {
             v = i + j + i*j ;
             j++ ;
        }
        i++ ;
    }

    i = j = 0 ;
    for( U : stlarray){
        for( v : U ) {
             printf("\n i,j= %2d, %2d, val=%3d", i, j, v) ;
             j++ ;
        }
        i++; j=0 ;
    }

    cout << "\n 실험이 끝났습니다. \n" ;
}
