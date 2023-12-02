// 수행시간 측정하는 함수
// > g++ thisfile.cpp std=C14++

#include <iostream>
#include <chrono>
#include <cmath>
#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <vector>
#include <array>
#include <list>

using namespace std ;


#define N 500000  // 50 만개 반드시 밖에서 global로  잡하야 한다.
array <long, N>  myarray ;
int   carray[N] ;

void C_style_insert(){
	for ( long i = 0; i < N; ++i )	{
		carray[i]=i ;
	}
}

void array_insert(){
	for ( long i = 0; i < N; ++i )	{
		myarray[i]=i ;
	}
}

void vector_insert(){
    vector <long >  myvector ;
	for ( long i = 0; i < N; ++i )	{
		myvector.push_back( i ) ;
	}
}

void vector_front(){
    vector <long >  myvector ;
	for ( long i = N; i >= 0 ; i-- )	{
		myvector.insert( myvector.begin(), i ) ;
	}
}

void list_end(){
    list <long >  mylist ;
	for ( long i = N; i >= 0 ; i-- )	{
		mylist.insert( mylist.end(), i ) ;
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

    Time_Check("c-style[i]     insert",   C_style_insert ) ;
    Time_Check("array<int>     insert",   array_insert   ) ;
    Time_Check("vector.end()   insert",   vector_insert  ) ;
    Time_Check("List.end()     insert",   list_end       ) ;
    Time_Check("vector.front() insert",   vector_front   ) ;

	return 0;
}  // end of main( )
