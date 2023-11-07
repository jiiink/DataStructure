#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

int simhash2(unsigned int x, int M) {
    x = x*x + 12345 ;
    if( x < 0 ) return(-1) ;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    return x%M;
}


int main() {
    system_clock time;
    duration<double> diff_time;


    vector  <int>          ex1{1,2,3} ;
    set     <int>          ex2{1,2,3} ;
    list    <int>          ex3{1,2,3} ;
    multiset<int>          ex4{1,2,3} ;
    array   <int, 100000>  ex5{1,2,3} ;
    deque   <int>          ex6{1,2,3} ;
    int N = 100000, rval ;

    auto tbegin = time.now();
        for(int i=0; i< N ; ++i) {
            rval = simhash2(i, 100000) ;
            ex1.push_back( rval ) ;
            ex2.insert   ( rval ) ;
            ex3.push_back( rval ) ;
            ex4.insert   ( rval ) ;
            ex5[i]=        rval ;
            ex6.push_back( rval ) ;
        }
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "Number of Steps = " << N << endl ;
    cout << "Time set, vector ÁØºñ : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex1.begin(), ex1.end(), simhash2(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for unsorted vector.find()  : " << diff_time.count() << endl;

    sort( ex1.begin(), ex1.end()) ; // 일단 sort를 한 다음
    tbegin = time.now();
           for(int i=0; i< N/10 ; ++i) find( ex1.begin(), ex1.end(), simhash2(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for sorted vector.find()  : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex3.begin(), ex3.end(), simhash2(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for unsorted list.find()  : " << diff_time.count() << endl;

    ex3.sort( ) ; // List를 먼저 sort( )를 시킨 다음에 find( ) 실시
    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex3.begin(), ex3.end(), simhash2(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for sorted list.find()  : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) ex2.find( simhash2(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for set.find()  : " << diff_time.count() << endl;


    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) ex4.find( simhash2(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for multiset.find()  : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex5.begin(), ex5.end(), simhash2(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for unsorted array<int,N>  : " << diff_time.count() << endl;

    sort( ex5.begin(), ex5.end() ) ;
    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex5.begin(), ex5.end(), simhash2(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for sorted array<int,N>  : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex6.begin(), ex6.end(), simhash2(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for deque<int>  : " << diff_time.count() << endl;

    return 0;

} // end of main()
