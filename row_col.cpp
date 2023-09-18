// 수행시간 측정하는 함수
// > g++ thisfile.cpp std=C14++

#include <bits/stdc++.h>
#include <iostream>
#define   N  20000 // 이만까지 가능? Local이면 700까지 가능.

using namespace std ;
int A[ N ][ N ] ;  // global 변수의 최대크기는 5억



void row_first(){
	for ( long i = 0; i < N; ++i )	{
          for ( long j = 0; j < N; ++j )	{
		    A[i][j] =i+j+i*j ;
          }
	}
}

void col_first(){
	for ( long i = 0; i < N; ++i )	{
          for ( long j = 0; j < N; ++j )	{
		    A[j][i] =i+j+i*j ;
          }
	}
}

// 시간을 측정할 함수는 반드시 void fun( ) 로 만들어야 합니다.
//  잡다부리한 parameter 넣으면 안됩니데이....

double Time_Check( string MSG, function <void ( )> target ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double> sec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target();  // 측정할 함수
	myend   = chrono::system_clock::now() ;
	sec = myend - mybegin ;

    tsec = sec.count() ;
    cout << "\n" << MSG << ": " << tsec << endl;
    return( tsec ) ;
} // end of Time_Check( ) by Zoh 2020. 추석 전전날 아침에


int main(){

    cout << "\n 원소 갯수 N = " << N << "\n " ;

    Time_Check("row-wise 2D array scanning",   row_first ) ;
    Time_Check("col-wise 2D array scanning",   col_first ) ;


	return 0;
}  // end of main( )