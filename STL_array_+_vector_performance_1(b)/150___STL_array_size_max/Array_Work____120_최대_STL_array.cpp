#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace chrono;

using in_secs = duration<double>;
#define N 12000

array< array<int   ,N>, N > Siray ;
array< array<double,N>, N > Sdray ;


int main() {

    system_clock time;
    in_secs diff_time;
    system_clock::time_point tbegin, tend ;

    tbegin = time.now();
    for(int i=0 ; i<N ; i++ ){
         if(i%1000 == 0) cout << "\n  i="<< i ;
         for(int j=0 ; j<N ; j++ ){
                Siray[i][j] = i + j;
         }
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n 이중 Loop N Siary[i] 처리 시간: " << diff_time.count() << endl;


    tbegin = time.now();
    for(int i=0 ; i<N ; i++ ){
         if(i%1000 == 0) cout << "\n  i="<< i ;
         for(int j=0 ; j<N ; j++ ){
                Sdray[i][j] = (double)i + (double)j;
         }
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n 이중 Loop N Sdary[i] 처리 시간: " << diff_time.count() << endl;



} // end of main( )
