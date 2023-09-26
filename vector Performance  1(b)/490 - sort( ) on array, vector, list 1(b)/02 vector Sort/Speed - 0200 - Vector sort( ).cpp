// vector 구조의 수행시간 측정하는 함수  O( f(N) )를 살펴보는 코드
// 2020년 추석 전전날 아침에 조환규가 만듬.
// 2021년 5월 6일, 롯데가 어린이날 시합에서 개망신 당한 다음 날.

#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <string>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 6       // 크기를 2배씩  늘임.
long    N[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000, 3200000 } ;
vector  <float>    V[ Lsize ] ;
int     Gindex ;

void vector_sort( ){
     sort( V[Gindex].begin(),  V[Gindex].end() ) ;
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
    return( tsec ) ;
}


void set_vector(){    // 실험용 float vector 배열을 만듬.
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution   <> dist(0, 10);


    float fval ;
    for(int lindex =0 ; lindex < Lsize ; lindex++) {
        for(long i=0; i < N[lindex] ; i++){
            fval = dist(e2) ;
            V[ lindex ].push_back( fval ) ;
        }
    cout << "\n 실험용 float vecotr[ ]를 준비함. 갯수는 =  " <<  lindex << ", " << N[lindex];
    } // end of for i
} // end of set_vector( )

int main(){

    int lx ;  // control parameter
    double tpass ;
    string msg ;
    set_vector( ) ;

    for( Gindex=0 ; Gindex <= Lsize-1; Gindex++ ){
         msg="vector[" + to_string(Gindex) + "] sorting: " ;
         tpass = Time_Check( msg,  vector_sort, Gindex ) ;
         printf("\n N=%8d, Time=%10.5f", N[Gindex], tpass ) ;

    }


	return 0;
}
