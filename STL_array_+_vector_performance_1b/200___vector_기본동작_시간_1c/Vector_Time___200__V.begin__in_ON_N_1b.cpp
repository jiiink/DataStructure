#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <string>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 5      // 크기를 2배씩  늘임.
long    N[ Lsize ] = { 10000, 20000, 40000, 80000, 160000 } ;
vector  <float>    V[ Lsize ] ;
int     Gindex ;

void insert_begin( ){
     int Ln  ;
     Ln = N[ Gindex] ;
     for (int i=0; i< Ln ; i++) {
          V[Gindex].insert( V[Gindex].begin(), i );
     }
}

double Time_Check( string MSG, function <void ( )> target, int w ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double, milli> sec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target( );  // 측정할 함수
	myend   = chrono::system_clock::now() ;
	sec = myend - mybegin ;

    tsec = sec.count() ;
    return( tsec ) ;
}


int main(){

    int lx ;  // control parameter
    double tpass, prepass, tratio ;
    string msg ;

    for( Gindex=0 ; Gindex <= Lsize-1; Gindex++ ){
         msg="vector[" + to_string(Gindex) + "] sorting: " ;
         tpass = Time_Check( msg,  insert_begin, Gindex ) ;
         if( Gindex == 0 ) prepass = tpass ;
         tratio = tpass / prepass ;
         printf("\n N=%10d, Time=%10.3f,  ratio= %10.3f", N[Gindex], tpass, tratio ) ;
         prepass = tpass ;

    }


	return 0;
}
