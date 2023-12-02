// 자료구조 강의용 자료 2022.7 조환규
// 각종 자료구조별 검색시간 비교하기  (성공실패 모두 포함)
// 2022. 10월 11일에 2차 수정함.

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
        }
        for(int i=0; i< N ; ++i) {  // 모두 다 있는 경우
            rval = simhash2(i, 100000) ;
            Query.push_back( rval ) ;
        }
        random_shuffle( Query.begin(), Query.begin()+ N/10 ) ; // 50%는 존재, 50%는 없고.


    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << " 원소의 수 N = " << N << endl ;
    cout << " 자료 준비 시간 : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex1.begin(), ex1.end(), Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> find(vec.begin(), vec.end(), Q ) on random vector<> : " << diff_time.count() << endl;

    sort( ex1.begin(), ex1.end()) ; // 일단 sort를 한 다음
    tbegin = time.now();
           for(int i=0; i< N/10 ; ++i) find( ex1.begin(), ex1.end(), Query[i]) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> find(vec.begin(), vec.end(), Q ) on sorted vector<> :  " << diff_time.count() << endl;

    tbegin = time.now();
           for(int i=0; i< N/10 ; ++i) lower_bound( ex1.begin(), ex1.end(), Query[i]) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> lower_bound( )     : " << diff_time.count() << endl;

    tbegin = time.now();
           for(int i=0; i< N/10 ; ++i) binary_search( ex1.begin(), ex1.end(), Query[i]) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> binary_searching on sorted vecto    r : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex3.begin(), ex3.end(), Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> find( unsorted list )                 : " << diff_time.count() << endl;

    tbegin = time.now();
        ex3.sort( ) ; // List를 먼저 sort( )를 시킨 다음에 find( ) 실시
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Sorting Time for list[], ex3              : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex3.begin(), ex3.end(), Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> find( On a sorted list )      : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex5.begin(), ex5.end(), Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for unsorted array<int,N>   : " << diff_time.count() << endl;

    sort( ex5.begin(), ex5.end() ) ;
    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex5.begin(), ex5.end(), Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> find( arr,begin(), arr.end(),m ) on sorted array  : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) binary_search( ex5.begin(), ex5.end(), Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> binary_search( ) on sorted array : " << diff_time.count() << endl;


    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex6.begin(), ex6.end(), Query[i] ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> find( for unsorted deque<int>     : " << diff_time.count() << endl;

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
    cout << "> generic find( unordered_set )    : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i)
            if( ex8.find(Query[i]) != ex8.end() ) {
            }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> ex8.find( Q )    : " << diff_time.count() << endl;

    return 0;

} // end of main()
