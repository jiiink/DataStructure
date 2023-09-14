#include <bits/stdc++.h>
#include <iostream>
#define   N  20000 // 이만까지 가능? Local이면 700까지 가능.
#define   M    800

using namespace std ;
int A[ N ][ N ] ;  // global 변수의 최대크기는 5억



int main() {

int B[M][M] ;


    for(int i=0 ; i <= N-1; i++){
        if( i% 1000 == 0 )    cout << "\n i = " << i ;
        for(int j=0 ; j <= N-1; j++){
                A[i][j] = i*j + i - j ;
        }
    }

    cout << "\n Done" ;
return 0;
}


