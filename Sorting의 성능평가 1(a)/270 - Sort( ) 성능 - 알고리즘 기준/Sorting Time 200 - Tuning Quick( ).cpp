#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <string>
#include <random>
using namespace std ;

#define Lsize 7      // 크기를 2배씩  늘임.
long    N[ Lsize ] = { 1000, 2000, 8000, 16000, 32000, 64000, 128000 } ;
vector  <float>           Data[ Lsize ], Iden[Lsize]  ;
vector  <pair<int,int>>  BunN[ Lsize ] ;
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


int partition( vector<float> &array, int low, int high) {
    int pivot = array[high];
    int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(array[i], array[j]);
    }
  }

  swap(array[i + 1], array[high]);
  return (i + 1);
}

void quick_sort( vector<float> &array, int low, int high) {
  if (low < high) {
    int pi = partition( array, low, high);
    quick_sort( array, low   , pi - 1);
    quick_sort( array, pi + 1, high  );
  }
}


#define BUNMAX 1000
#define RANGE   200

void set_data(){    // 실험용 float vector 배열을 만듬.
    random_device rd;
    mt19937 e2(rd());
    uniform_real_distribution   <> dist(0, 10);
    float fval ;
    int  up, down ;
    pair <int,int>  bunsu ;  // a/b 분수형태의 수를 sorting 해봄

    srand( 20221101 ) ; // seeding for rand( )

    for(int lindex =0 ; lindex < Lsize ; lindex++) {
        for(long i=0; i < N[lindex] ; i++){
            fval = dist(e2) ;

            bunsu.first   = rand()% BUNMAX ;
            bunsu.second  = rand()% BUNMAX ;
            Data[ lindex ].push_back( fval ) ;
            Iden[ lindex ].push_back( rand()%RANGE ) ;
            BunN[ lindex ].push_back( bunsu ) ; // 분수를 저장함.
        }
        printf(" \n Size of Data vector[%2d] = %8d",  lindex, N[lindex] ) ;

    } // end of for i
} // end of set_vector( )

int main(){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> sec ;
    double tsec ;
    cout << std::setprecision(2);

    set_data( ) ; // Data[ ] 만들기

    printf("\n\n Quick sort( )를 사용한 sorting 시간") ;
    for(int i=0 ; i <= Lsize-1; i++ ){
         mybegin = chrono::system_clock::now();
            quick_sort( Data[i], 0, Data[i].size()-1 ) ;
       	 myend   = chrono::system_clock::now() ;
	     sec = myend - mybegin ;
	     tsec = sec.count() ;
	     printf("\n Size= %7d, Time = %10.2f",N[i], tsec  ) ;
    }

    printf("\n\n 같은 원소가 많은 Iden배열의 Quick sort( )시간") ;
    for(int i=0 ; i <= Lsize-1; i++ ){
         mybegin = chrono::system_clock::now();
            quick_sort( Iden[i], 0, Iden[i].size()-1 ) ;
       	 myend   = chrono::system_clock::now() ;
	     sec = myend - mybegin ;
	     tsec = sec.count() ;
	     printf("\n Size= %7d, Time = %10.2f",N[i], tsec  ) ;
    }

	return 0;
}
