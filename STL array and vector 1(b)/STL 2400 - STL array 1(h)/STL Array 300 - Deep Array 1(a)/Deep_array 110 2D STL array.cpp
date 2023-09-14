#include <bits/stdc++.h>
using namespace std ;

#define N 10000

array< array<int,   N>, N > Intarray ;
array< array<double,N>, N > Douarray ;

int main() {

    int i,j,k ;


    i = j = k = 0 ;
    for( auto &U : Intarray ){
            i++;
            for( auto &w : U ){
                w = 100*i + j;
                ++j ;
            }
    }

    cout << "\n 실험이 끝났습니다. \n" ;
} // end of main( )
