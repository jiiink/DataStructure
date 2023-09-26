// vector 구조의 수행시간 측정하는 함수  O( f(N) )를 살펴보는 코드
// 2020년 추석 전전날 아침에 조환규가 만듬.
// 2021년 5월 6일, 롯데가 어린이날 시합에서 개망신 당한 다음 날.
// 2021년 5월 11일, 함수형으로 고침

/*  2021.5.6 comments
   STL에서 사용하는 sorting algorithm은 IntroSort 알고리즘이다. 이것은
   3개의 알고리즘, QuickSort, HeapSort and InsertionSort이다.
   기본적으로는 QuickSort이 사용되는데 pivot은 median-of-3를 사용해서 뽑는다.
   만일 QuickSort가 pivoting에 최악이 예상되면
   즉 N*log N이상 걸릴 것이라고 예상되면 worst case O(N log N)인 HeapSort을 사용하고
   Quick 단계의 크기가 충분히 적을 경우에는 더 이상 divide하지 않고
   InsertionSort( )로 그 작은 단위를 Conquer하여 처리한다. 대개 20개 정도이다.
*/

#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <string>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 8       // 크기를 2배씩  늘임.
long    N[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000, 3200000, 6400000, 12800000 } ;
vector  <float>    V[ Lsize ] ;
int     Gindex ;

void vector_sort( vector <float> This ){
     sort( This.begin(), This.end() ) ;
}


double Time_Check( string MSG, function <void ( vector <float>)> target, vector <float> This  ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double> sec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target( This );  // 측정할 함수
	myend   = chrono::system_clock::now() ;
	sec = myend - mybegin ;

    tsec = sec.count() ;
    return( tsec ) ;
}


void set_vector(){    // 실험용 float vector 배열을 만듬.
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution   <> unidist(0, 1); // [0,1] 사이의 random


    float fval ;
    for(int lindex =0 ; lindex < Lsize ; lindex++) {
        for(long i=0; i < N[lindex] ; i++){
            fval = unidist(e2) ;
            cout << fval << endl ;
            V[ lindex ].push_back( fval ) ;
        }
        printf(" \n Size of float vector[%2d]= %8d",  lindex, N[lindex] ) ;
    } // end of for i
} // end of set_vector( )

int main(){

    int lx ;  // control parameter
    double tpass, prepass, tratio ;
    string msg ;
    set_vector( ) ;

    printf("\n Vector[N] sorting 시간 \n") ;


    for( Gindex=0 ; Gindex <= Lsize-1; Gindex++ ){
         msg="vector[" + to_string(Gindex) + "] sorting: " ;
         tpass = Time_Check( msg,  vector_sort, V[Gindex] ) ;
         if( Gindex == 0 ) prepass = tpass ;
         tratio = tpass / prepass ;
         printf("\n N=%10d, Time=%7.3f,  ratio= %5.3f", N[Gindex], tpass, tratio ) ;
         prepass = tpass ;
    }

	return 0;
}
