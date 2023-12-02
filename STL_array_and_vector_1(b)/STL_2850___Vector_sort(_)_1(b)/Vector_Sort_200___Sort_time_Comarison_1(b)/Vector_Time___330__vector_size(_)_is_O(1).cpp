// 데이터 크기에 따른 수행 시간의 변화를 확인하기 위해서 가장 좋은 방법은
// 데이터의 크기를 doubling(2배씩) 늘력가면서 확인하는 것이다.


#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <string>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 6      // 크기를 2배씩, 즉 doubling 하는 것이다.
long    N[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000, 3200000 } ;
vector  <float>    V[ Lsize ] ;
int     Gindex ;


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
        printf(" \n Vector.size( ) vetor[%2d]=%8d",  lindex, N[lindex] ) ;
    } // end of for i
} // end of set_vector( )

int main(){

    int lx, vsize ;  // control parameter
    double tpass, prepass, tratio ;
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double> sec ;
    double tsec ;
    string msg ;

    set_vector( ) ;

    printf("\n Vector.size( )의 처리 시간 시간 \n") ;


    for( Gindex=0 ; Gindex <= Lsize-1; Gindex++ ){
      	mybegin = chrono::system_clock::now();
                vsize = V[Gindex].size( ) ;
	    myend   = chrono::system_clock::now() ;
        cout << "\n V["<< Gindex << "].size()= "<< vsize ;
        sec = myend - mybegin ;
        printf(", sizing time= %7.3f ", sec ) ;

    } // end of for( )

	return 0;
}
