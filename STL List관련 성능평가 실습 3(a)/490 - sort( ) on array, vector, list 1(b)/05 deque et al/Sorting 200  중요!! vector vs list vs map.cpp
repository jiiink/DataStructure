#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;
using namespace chrono;

#define Lsize 6

long  N[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000, 3200000 } ;
vector  <float>         V[ Lsize ] ;
list    <float>         L[ Lsize ] ;
map     <float,int>     M[ Lsize ]  ;
int   Gindex ;

void vector_sort( ){
     sort( V[Gindex].begin(),  V[Gindex].end() ) ;
}
void list_sort( ){
     L[Gindex].sort( ) ;
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
    cout << MSG << ": " << tsec << endl;
    return( tsec ) ;
} // end of Time_Check( ) by Zoh 2020. 추석 전전날 아침에


void set_data(){
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution   <> dist(0, 10);

    float fval ;
    for(int lindex =0 ; lindex < Lsize ; lindex++) {
        for(long i=0; i < N[lindex] ; i++){
            fval = dist(e2) ;
            V[ lindex ].push_back( fval ) ;
            L[ lindex ].push_back( fval ) ;
        }
    } // end of for i

}

void set_map( int Index  ){
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution   <> dist(0, 10);

    float fval ;
    for(long i=0; i < N[ Index ] ; i++){
            fval = dist(e2) ;
            M[ Index ][fval]= i ;
    } // end of for i
}

int main(){
    system_clock time;
    duration<double,milli> diff_time;
    string msg ;

    set_data() ;

    cout << "\n\n All vectors are prepared( ) \n\n" ;

    for(Gindex = 0 ; Gindex < Lsize ; Gindex++) {
       msg = "> vector with " + to_string( N[Gindex]) + " :" ;
       Time_Check(msg ,  vector_sort, Gindex ) ;
    }

    cout << "\n\n All lists are prepared( ) \n\n" ;

    for(Gindex = 0 ; Gindex < Lsize ; Gindex++) {
       msg = "> list with " + to_string( N[Gindex]) + " :" ;
       Time_Check(msg ,  list_sort, Gindex ) ;
    }

    cout << "\n\n All map[] are prepared( ) \n\n" ;
    auto tbegin = time.now();auto tend = time.now();
    for(Gindex = 0 ; Gindex < Lsize ; Gindex++) {
       tbegin = time.now( );
          set_map( Gindex ) ;
       tend = time.now( ) ;
       diff_time = tend - tbegin;
       cout << "> Time for map " << N[Gindex] << " : " << diff_time.count() << endl;
    }


     return 0;
}
