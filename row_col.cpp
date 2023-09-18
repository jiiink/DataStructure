// ����ð� �����ϴ� �Լ�
// > g++ thisfile.cpp std=C14++

#include <bits/stdc++.h>
#include <iostream>
#define   N  20000 // �̸����� ����? Local�̸� 700���� ����.

using namespace std ;
int A[ N ][ N ] ;  // global ������ �ִ�ũ��� 5��



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

// �ð��� ������ �Լ��� �ݵ�� void fun( ) �� ������ �մϴ�.
//  ��ٺθ��� parameter ������ �ȵ˴ϵ���....

double Time_Check( string MSG, function <void ( )> target ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double> sec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target();  // ������ �Լ�
	myend   = chrono::system_clock::now() ;
	sec = myend - mybegin ;

    tsec = sec.count() ;
    cout << "\n" << MSG << ": " << tsec << endl;
    return( tsec ) ;
} // end of Time_Check( ) by Zoh 2020. �߼� ������ ��ħ��


int main(){

    cout << "\n ���� ���� N = " << N << "\n " ;

    Time_Check("row-wise 2D array scanning",   row_first ) ;
    Time_Check("col-wise 2D array scanning",   col_first ) ;


	return 0;
}  // end of main( )