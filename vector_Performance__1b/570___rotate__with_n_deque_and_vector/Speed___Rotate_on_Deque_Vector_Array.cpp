// 수행시간 측정하는 함수

#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 5
#define N     50000000   // 100만개를 사용

vector <int> Vec ;
deque  <int> Deq ;
array  <int, N> Arr ;


void Prepare( ){

    for(int i = 0 ; i < N; i++ ) {
           Vec.push_back( i+1 )  ;
           Deq.push_back( i+1 )  ;
           Arr[i]= i+1 ;
    }

}

void Vec_rotate( ){
     int tmp ;

     tmp = Vec.front() ;

     Vec.erase( Vec.begin() ) ;
     Vec.push_back( tmp ) ;
}


void Deq_rotate( ){
     int tmp ;
     tmp = Deq.front() ;

     Deq.erase( Deq.begin() ) ;
     Deq.push_back( tmp ) ;
}

void Arr_rotate( ){
     int tmp ;
     tmp = Arr.front() ;
     for(int i = 1 ; i < N; i++ ) {
           Arr[i-1] = Arr[i] ;
           Vec.push_back( i )  ;
    }
}


double Time_Check( string MSG, function <void ( )> target, int w ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double> sec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target( );  // 측정할 함수
	myend   = chrono::system_clock::now() ;
	sec = myend - mybegin ;

    tsec = sec.count() ;
    cout << "\n" << MSG << ": " << tsec << endl;
    return( tsec ) ;
} // end of Time_Check( )

int main(){

    Prepare( ) ;

    Time_Check( "Vector Rotate( ) :" ,  Vec_rotate, 0 ) ;
    cout<< Vec[0] << endl ;
    Time_Check( "Deque  Rotate( ) :" ,  Deq_rotate, 0 ) ;
    cout<< Deq[0] << endl ;
    Time_Check( "Array  Rotate( ) :" ,  Arr_rotate, 0 ) ;
    cout<< Arr[0] << endl ;
	return 0;
}
