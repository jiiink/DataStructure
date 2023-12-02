//
// 각종 자료구조별 검색시간 비교하기  (성공실패 모두 포함)
// 2022. 11월 11일에 3차 수정함.

#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

int   simseed = 12345 ;

int simhash2(unsigned int x, int M) {
    x = x*x + simseed  ;
    if( x < 0 ) return(-1) ;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    return x%M;
}

int main() {
    system_clock time;
    duration<double, milli> diff_time;
    int fail=0 ;

    vector          <int>          ex1 ;
    set             <int>          ex2 ;
    list            <int>          ex3 ;
    multiset        <int>          ex4 ;
    array           <int, 100000>  ex5 ;
    deque           <int>          ex6 ;
    unordered_set   <int>          ex7 ;
    map             <int,int>      ex8 ; // map[], 실제로는 red-black tree
    vector          <int>          Query;

    int N = 100000, rval ;
    int M = 100000 ; // random number 범위 N=M이면 약 50%가 find 성공

    auto tbegin = time.now();
        for(int i=0; i< N ; ++i) {
            rval = simhash2(i, 100000) ;
            ex1.push_back( rval ) ;
            ex2.insert   ( rval ) ;
            ex3.push_back( rval ) ;
            ex4.insert   ( rval ) ;
            ex5[i]=        rval ;
            ex6.push_back( rval ) ;
            ex7.insert   ( rval ) ;
            ex8[i]   =     rval   ;   // map[ ]
            Query.push_back( i ) ;  // find( )에서 사용할 데이터
        }
        random_shuffle( Query.begin(), Query.end() ) ; // 50%는 존재, 50%는 없고.


    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << " 원소의 수 N = " << N << endl ;
    cout << " 자료 준비 시간 : " << diff_time.count() << endl;

    fail = 0 ;
    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) {
            auto it1 = find( ex1.begin(), ex1.end(), Query[i] ) ;
            if( it1 == ex1.end()) fail++;
          }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> find( random vector[]  )         : " << diff_time.count() <<" fail= " << fail <<endl;


    tbegin = time.now();
            sort( ex1.begin(), ex1.end()) ; // 일단 sort를 한 다음
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Sorting Time for ex1[]           : " << diff_time.count() << endl;

    tbegin = time.now();
           for(int i=0; i< N/10 ; ++i) find( ex1.begin(), ex1.end(), Query[i]) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> find( on sorted vector[]  )       :  " << diff_time.count() << endl;

    fail = 0 ;
    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) {
            if( count( ex1.begin(), ex1.end(), Query[i] ) == 0 ) fail++;
          }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Using count for find(   )        : " << diff_time.count() <<" fail= " << fail <<endl;




    tbegin = time.now();
           for(int i=0; i< N/10 ; ++i) lower_bound( ex1.begin(), ex1.end(), Query[i]) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> lower_bound( on sorted vector[] ) : " << diff_time.count() << endl;

    tbegin = time.now();
           for(int i=0; i< N/10 ; ++i) binary_search( ex1.begin(), ex1.end(), Query[i]) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> binary_search( sorted vector[] )  : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex3.begin(), ex3.end(), Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> find( unsorted list[ ] )          : " << diff_time.count() << endl;

    tbegin = time.now();
        ex3.sort( ) ; // List를 먼저 sort( )를 시킨 다음에 find( ) 실시
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for sort( list[], ex3 )     : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex3.begin(), ex3.end(), Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> generic find( On a sorted list )  : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex5.begin(), ex5.end(), Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for unsorted array<int,N>    : " << diff_time.count() << endl;

    sort( ex5.begin(), ex5.end() ) ;
    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex5.begin(), ex5.end(), Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> find(  sorted array, Q )          : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) binary_search( ex5.begin(), ex5.end(), Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> binary_search( ) on sorted array : " << diff_time.count() << endl;


    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex6.begin(), ex6.end(), Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> find( unsorted deque<int>   )  : " << diff_time.count() << endl;

    sort( ex6.begin(), ex6.end() ) ;
    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex6.begin(), ex6.end(), Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> find ( sorted deque<int>  )    : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) ex2.find( Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for set.find()             : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) ex4.find( Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for multiset.find()        : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) ex7.find( Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for unordered_set.find( )   : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex7.begin(), ex7.end(), Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> generic find( unordered_set )    : " << diff_time.count() << " fail= " << fail << endl;

    tbegin = time.now();
    fail=0 ;
          for(int i=0; i< N/10 ; ++i)
            if( ex8.find(Query[i]) != ex8.end() ) { fail++ ;   }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> map ex8.find( Q )              : " << diff_time.count() << endl;

    return 0;

} // end of main()
