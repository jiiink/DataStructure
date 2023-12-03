#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <string>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 6      // 크기를 2배씩  늘임.
long    N[ Lsize ] = { 1000, 2000, 8000, 16000, 32000, 64000 } ;
vector  <float>    V[ Lsize ], U[ Lsize ], W[Lsize] ;
int     Gindex ;


void insert_sort( vector<float> &X ) {
    int i, key, j;
    for (i = 1; i < X.size() ; i++) {
        key = X[i];
        j = i - 1;
        while (j >= 0 && X[j] > key)         {
            X[j + 1] = X[j];
            j = j - 1;
        }
        X[j + 1] = key;
    }
}

void select_sort( vector<float> &X ) {
    int i, j, key, t, minit ;
    float valmin ;

    for(int i=0 ; i < X.size(); i++){
        valmin = 999999.99;
        for (j = i; j < X.size() ; j++) {
            if( X[j] < valmin ) { valmin= X[j]; minit= j ; }
        }
        t = X[i] ;
        X[i] = valmin ;
        X[minit] = t ;
    }
} // end of select_sort()

void set_vector(){    // 실험용 float vector 배열을 만듬.
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution   <> dist(0, 10);


    float fval ;
    for(int lindex =0 ; lindex < Lsize ; lindex++) {
        for(long i=0; i < N[lindex] ; i++){
            fval = dist(e2) ;
            V[ lindex ].push_back( fval ) ;
            U[ lindex ].push_back( fval ) ;
        }
        printf(" \n Size of float vetor[%2d]=%8d",  lindex, N[lindex] ) ;
    } // end of for i
} // end of set_vector( )

int main(){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> sec ;
    double tsec ;

    set_vector( ) ;

    printf("\n\n Insert_sort( )를 사용한 sorting 시간") ;
    for(int i=0 ; i <= Lsize-1; i++ ){
         mybegin = chrono::system_clock::now();
            insert_sort( V[i] ) ;
       	 myend   = chrono::system_clock::now() ;
	     sec = myend - mybegin ;
	     tsec = sec.count() ;
         cout << "\n size= " << N[i] << ", time= " << tsec ;

    }

    printf("\n\n Select_sort( )를 사용한 sorting 시간") ;
    for(int i=0 ; i <= Lsize-1; i++ ){
         mybegin = chrono::system_clock::now();
            select_sort( U[i] ) ;
       	 myend   = chrono::system_clock::now() ;
	     sec = myend - mybegin ;
	     tsec = sec.count() ;
         cout << "\n size= " << N[i] << ", time= " << tsec ;

    }

    printf("\n\n Generic sort( )를 사용한 sorting 시간") ;
    for(int i=0 ; i <= Lsize-1; i++ ){
         mybegin = chrono::system_clock::now();
            sort( W[i].begin(), W[i].end() ) ;
       	 myend   = chrono::system_clock::now() ;
	     sec = myend - mybegin ;
	     tsec = sec.count() ;
         cout << "\n size= " << N[i] << ", time= " << tsec ;

    }


	return 0;
}
