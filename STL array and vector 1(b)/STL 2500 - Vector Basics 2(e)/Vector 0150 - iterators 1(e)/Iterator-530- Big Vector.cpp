#include <bits/stdc++.h>
#define  N 1000000
using namespace std;

int main () {
    vector<int> myv( N )  ;

    int i = 0 ;
    // int x[N] ; // 100만개의 원소를 저장하지 못한다.


    for( auto s : myv ) {
            i++ ;
        if ( i % 10000 == 0 ) cout <<  i << " , " << s  << endl ;
    }

  return 0;
}
