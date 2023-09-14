#include <bits/stdc++.h>
using namespace std ;

#define N 12000

int    Intarray[N][N] ;
double Douarray[N][N] ;

int main() {

    int i,j,k ;


    i = j = k = 0 ;
    for( i=0 ; i<N ; i++ ){
         if(i%1000 == 0) cout << "\n i="<< i ;
         for( j = 0 ; j < N ; j++ ){
                Intarray[i][j] = 100*i + j;
         }
    }

    cout << "\n 실험이 끝났습니다. \n" ;
} // end of main( )
