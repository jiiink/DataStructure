#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <chrono>
#include <set>
#include <unordered_set>

// 찾는 작업에는 set이 제일 빠릅니다. 2021

using namespace std;
using namespace chrono;

using in_secs = duration<double, milli >;

int simhash2(unsigned int x, int M) {
    if( x < 0 ) return(-1) ;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    return x%M;
}

int simhash3(unsigned int x, int M) {
    x = x*x + 12345 ;
    if( x < 0 ) return(-1) ;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    return x%M;
}


int main() {
    system_clock time;
    in_secs diff_time;
    int N = 100000 ;

    vector      <int>        ex1{1,2,3} ;
    set         <int>        ex2{1,2,3} ;
    lis         t<int>       ex3{1,2,3} ;
    unordered_set<int>       ex4        ;

    int val ;
    auto tbegin = time.now();
        for(int i=0; i< N ; ++i) {
            val =  simhash2(i, 100000) ;
            ex1.push_back( val ) ;
            ex2.insert   ( val ) ;
            ex3.push_back( val ) ;
            ex4.insert   ( val ) ;
        }
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "Number of Steps = " << N << endl ;
    cout << "준비 시간 : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex1.begin(), ex1.end(), simhash3(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "unsorted vector.find()  : " << diff_time.count() << endl;


    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) ex2.find( simhash3(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "ordered set.find()  : " << diff_time.count() << endl;



    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex3.begin(), ex3.end(), simhash3(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "unsorted list.find()  : " << diff_time.count() << endl;


    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) ex4.find( simhash3(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "unordered_set.find()  : " << diff_time.count() << endl;


    return 0;

} // end of main()
