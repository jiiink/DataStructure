#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <string>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 8       // 크기를 2배씩  늘임.
long    N[ Lsize ] = { 1000000, 2000000, 4000000, 8000000, 16000000, 32000000, 64000000, 128000000 } ;
vector  <float>    V[ Lsize ] ;
vector  <float>    U[ Lsize ] ;
int     Gindex ;


double Time_Check( string MSG, function <void ( )> target, int w  ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> msec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target( );  // 측정할 함수
	myend   = chrono::system_clock::now() ;
	msec = myend - mybegin ;

    tsec = msec.count() ;
    return( tsec ) ;
}

void fill_vector( ){
    float w ;
    w = 0.997 ;
    fill( V[ Gindex ].begin(), V[ Gindex ].end(),  w ) ;
}

void set_vector( ){    // 실험용 float vector 배열을 만듬.
    float w ;
    w = 0.997 ;
    for(long i=0; i < N[ Gindex ] ; i++){
            V[ Gindex ].push_back( w ) ;
    }
} // end of set_vector( )

int main(){

    int lx ;  // control parameter
    double tpass, prepass, tratio ;
    string msg ;

    printf("\n\n 크기 N에 따른 Vector[]=w 설정  시간 : V[N] \n") ;
    for( Gindex=0 ; Gindex <= Lsize-1; Gindex++ ){
         msg="vector[" + to_string(Gindex) + "] 초기화  : " ;
         tpass = Time_Check( msg,  set_vector , Gindex ) ;
         if( Gindex == 0 ) prepass = tpass ;
         tratio = tpass / prepass ;
         printf("\n N=%10d, Time=%9.3f,  ratio= %5.3f", N[Gindex], tpass, tratio ) ;
         prepass = tpass ;

    }

    printf("\n\n 크기 N에 따른 Vector.fill( w ) 시간 : V[N] \n") ;
    for( Gindex=0 ; Gindex <= Lsize-1; Gindex++ ){
         msg="vector[" + to_string(Gindex) + "] filling  : " ;
         tpass = Time_Check( msg,  fill_vector , Gindex ) ;
         if( Gindex == 0 ) prepass = tpass ;
         tratio = tpass / prepass ;
         printf("\n N=%10d, Time=%9.3f,  ratio= %5.3f", N[Gindex], tpass, tratio ) ;
         prepass = tpass ;

    }


	return 0;
}
