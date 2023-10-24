// 수행시간 측정하는 함수

#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 5

long  N[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000 } ;
list  <float>    L[ Lsize ] ;
int   Gindex ;

void list_sort( ){
     L[Gindex].sort( ) ;
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
    cout << "\n" << MSG << ": " << tsec << endl;
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
            L[ lindex ].push_back( fval ) ;
        }
    cout << "\n Prepared for list[ " <<  lindex << "] >> " << N[lindex];
    } // end of for i

}

int main(){

    int lx ;  // control parameter

    set_list( ) ;
    cout << "\n All Lists are prepared( ) " ;

    Gindex = 0 ;
    Time_Check( "List[0] sorting" ,  list_sort, 0 ) ;
    Gindex = 1 ;
    Time_Check( "List[1] sorting" ,  list_sort, 1 ) ;
    Gindex = 2 ;
    Time_Check( "List[2] sorting" ,  list_sort, 2 ) ;
    Gindex = 3 ;
    Time_Check( "List[3] sorting" ,  list_sort, 3 ) ;
    Gindex = 4 ;
    Time_Check( "List[4] sorting" ,  list_sort, 4 ) ;

	return 0;
}
