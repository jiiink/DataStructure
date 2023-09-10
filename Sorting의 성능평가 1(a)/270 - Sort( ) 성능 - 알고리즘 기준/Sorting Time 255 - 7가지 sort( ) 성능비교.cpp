#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <string>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 6      // 크기를 2배씩  늘임.
long    N[ Lsize ] = { 1000, 2000, 8000, 16000, 32000, 64000 } ;
vector  <float>    V[ Lsize ] ;
int     Gindex ;

void bubble_sort( vector<float> &X ) {
    int i, j; float ftemp ;
    for (i = 0; i <  X.size(); i++)
         for (j = 0; j <  X.size() - i - 1; j++)
            if ( X[j] > X[j + 1]){
                    ftemp=X[j]; X[j]=X[j+1]; X[j+1]= ftemp ;}
}

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

void New_quick_sort( vector<float> &array, int low, int high) {
  if ( high - low > 1000 ) {
    int pi = partition( array, low, high);
    New_quick_sort( array, low   , pi - 1);
    New_quick_sort( array, pi + 1, high  );
  } else  { // 잘라진 subfile의 크기가  10 이하이면 직접 sort
      sort( array.begin()+low, array.begin()+high+1 ) ;
  }
}

void MergeSortedIntervals(vector<float>& v, int s, int m, int e) {
	vector<int> temp;
	int i, j; 	i = s; 	j = m + 1;
	while (i <= m && j <= e) {
		if (v[i] <= v[j]) { temp.push_back(v[i]);	++i; 		}
		else { temp.push_back(v[j]); ++j; 	}
	}

	while (i <= m) { temp.push_back(v[i]); 	++i; 	}
	while (j <= e) { temp.push_back(v[j]); 	++j; 	}
	for (int i = s; i <= e; ++i) 	v[i] = temp[i - s];
}

void MergeSort(vector<float>& v, int s, int e) {
	if (s < e) {
		int m = (s + e) / 2;
		MergeSort(v, s, m);
		MergeSort(v, m + 1, e);
		MergeSortedIntervals(v, s, m, e);
	}
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
        printf(" \n Size of float vetor[%2d]=%8d",  lindex, N[lindex] ) ;
    } // end of for i
} // end of set_vector( )

int main(){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> sec ;
    double tsec ;

    set_vector( ) ;

    cout.precision(5);

    printf("\n\n Insert_sort( )를 사용한 sorting 시간") ;
    for(int i=0 ; i <= Lsize-1; i++ ){
         random_shuffle(V[i].begin(), V[i].end()) ;
         mybegin = chrono::system_clock::now();
            insert_sort( V[i] ) ;
       	 myend   = chrono::system_clock::now() ;
	     sec = myend - mybegin ;
	     tsec = sec.count() ;
	     printf("\n size= %7d, time= %12.4f", N[i], tsec );

    }

    printf("\n\n bubble_sort( )를 사용한 sorting 시간") ;
    for(int i=0 ; i <= Lsize-1; i++ ){
         random_shuffle(V[i].begin(), V[i].end()) ;
         mybegin = chrono::system_clock::now();
            bubble_sort( V[i] ) ;
       	 myend   = chrono::system_clock::now() ;
	     sec = myend - mybegin ;
	     tsec = sec.count() ;
	     printf("\n size= %7d, time= %12.4f", N[i], tsec );

    }

    printf("\n\n Select_sort( )를 사용한 sorting 시간") ;
    for(int i=0 ; i <= Lsize-1; i++ ){
         mybegin = chrono::system_clock::now();
            select_sort( V[i] ) ;
       	 myend   = chrono::system_clock::now() ;
	     sec = myend - mybegin ;
	     tsec = sec.count() ;
         printf("\n size= %7d, time= %12.4f", N[i], tsec );
    }


    printf("\n\n Quick sort( )를 사용한 sorting 시간") ;
    for(int i=0 ; i <= Lsize-1; i++ ){
         random_shuffle(V[i].begin(), V[i].end()) ;
         mybegin = chrono::system_clock::now();
            quick_sort( V[i], 0, V[i].size()-1 ) ;
       	 myend   = chrono::system_clock::now() ;
	     sec = myend - mybegin ;
	     tsec = sec.count() ;
   	     printf("\n size= %7d, time= %12.4f", N[i], tsec );
    }

    printf("\n\n 개선된 Quick sort( )를 사용한 sorting 시간") ;
    for(int i=0 ; i <= Lsize-1; i++ ){
         random_shuffle(V[i].begin(), V[i].end()) ;
         mybegin = chrono::system_clock::now();
            New_quick_sort( V[i], 0, V[i].size()-1 ) ;
       	 myend   = chrono::system_clock::now() ;
	     sec = myend - mybegin ;
	     tsec = sec.count() ;
   	     printf("\n size= %7d, time= %12.4f", N[i], tsec );
    }

    printf("\n\n Recursive Merge sort( )를 사용한 sorting 시간") ;
    for(int i=0 ; i <= Lsize-1; i++ ){
         random_shuffle(V[i].begin(), V[i].end()) ;
         mybegin = chrono::system_clock::now();
           MergeSort( V[i], 0, V[i].size()-1 ) ;
       	 myend   = chrono::system_clock::now() ;
	     sec = myend - mybegin ;
	     tsec = sec.count() ;
   	     printf("\n size= %7d, time= %12.4f", N[i], tsec );
    }



    printf("\n\n Generic sort( )를 사용한 sorting 시간") ;
        for(int i=0 ; i <= Lsize-1; i++ ){
        random_shuffle(V[i].begin(), V[i].end()) ;
         mybegin = chrono::system_clock::now();
            sort( V[i].begin(), V[i].end()  ) ;
       	 myend   = chrono::system_clock::now() ;
	     sec = myend - mybegin ;
	     tsec = sec.count() ;
         printf("\n size= %7d, time= %12.4f", N[i], tsec );
    }


	return 0;
}
