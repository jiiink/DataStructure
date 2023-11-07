#include <bits/stdc++.h>
#include <chrono>



using namespace std;
using namespace chrono;

using intvec  = vector<int>;
using intlist = list<int>;
using intset  = set<int>;
using in_secs = duration<double, milli>;

int simhash2(unsigned int x, int M) { // random number in a range [a,b]
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

    vector       <int>   ex1{1,2,3} ;
    set          <int>   ex2{1,2,3} ;
    list         <int>   ex3{1,2,3} ;
    unordered_set<int>   ex4{1,2,3} ;
    deque        <int>   ex5{1,2,3} ;

    int val ;
    auto tbegin = time.now();
        for(int i=0; i< N ; ++i) {
            val =  simhash2(i, 100000) ;
            ex1.push_back( val ) ;
            ex2.insert   ( val ) ;
            ex3.push_back( val ) ;
            ex4.insert   ( val ) ;
            ex5.push_back( val ) ;
        }
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "Number of Steps = " << N << endl ;
    cout << "데이터 준비시간 : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex1.begin(), ex1.end(), simhash3(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "unsorted vector.find()  : " << diff_time.count() << endl;

    sort( ex1.begin(), ex1.end()) ;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex1.begin(), ex1.end(), simhash3(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "sorted vector.find()  : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i)
            binary_search( ex1.begin(), ex1.end(), simhash3(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "binary_search() in sorted vector: " << diff_time.count() << endl;


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

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex5.begin(), ex5.end(), simhash3(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Unsorted deque find()   : " << diff_time.count() << endl;

    sort( ex5.begin(), ex5.end() ) ;
    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i)
             binary_search( ex5.begin(), ex5.end(), simhash3(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "binary search( ) in sorted deque find()   : " << diff_time.count() << endl;
    return 0;

} // end of main()
