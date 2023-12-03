#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 6

long  N[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000, 3200000 } ;
list  <float>    L[ Lsize ] ;
deque <float>    Q[ Lsize ] ;
int   Gindex ;

void deque_sort( ){
     sort( Q[Gindex].begin(), Q[Gindex].end() ) ;
}


double Time_Check( string MSG, function <void ( )> target, int w ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> sec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target( );  // 측정할 함수
	myend   = chrono::system_clock::now() ;
	sec = myend - mybegin ;

    tsec = sec.count() ;
    cout << MSG << ": " << tsec ;
    return( tsec ) ;
} // end of Time_Check( ) by Zoh 2020. 추석 전전날 아침에


void set_list(){
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution   <> dist(0, 10);


    float fval ;
    for(int lindex =0 ; lindex < Lsize ; lindex++) {
        for(long i=0; i < N[lindex] ; i++){
            fval = dist(e2) ;
            Q[ lindex ].push_back( fval ) ;
        }
    // cout << "\n Prepared for 크기 별 vector[ ] " <<  lindex << "] >> " << N[lindex];
    } // end of for i

}

int main(){

    string msg ;

    set_list( ) ;
    cout << "\n\n All lists are prepared( ) \n\n" ;

    for(Gindex = 0 ; Gindex < Lsize ; Gindex++) {
       msg = "\n Deque with " + to_string( N[Gindex]) + " :" ;
       Time_Check(msg ,  deque_sort, Gindex ) ;
    }


	return 0;
}
