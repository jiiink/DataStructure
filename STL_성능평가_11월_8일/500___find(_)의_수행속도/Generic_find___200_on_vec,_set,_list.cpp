#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

using intvec  = vector<int>;
using intlist = list<int>;
using intset  = set<int>;
using in_secs = duration<double>;

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

    intvec  ex1{1,2,3} ;
    intset  ex2{1,2,3} ;
    intlist ex3{1,2,3} ;
    auto tbegin = time.now();
        for(int i=0; i< N ; ++i) {
            ex1.push_back( simhash2(i, 100000) ) ;
            ex2.insert   ( simhash2(i, 100000) ) ;
            ex3.push_back( simhash2(i, 100000) ) ;
        }
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "Number of Steps = " << N << endl ;
    cout << "Time set, vector ÁØºñ : " << diff_time.count() << endl;

    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex1.begin(), ex1.end(), simhash3(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for unsorted vector.find()  : " << diff_time.count() << endl;


    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) find( ex3.begin(), ex3.end(), simhash3(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for unsorted list.find()  : " << diff_time.count() << endl;


    tbegin = time.now();
          for(int i=0; i< N/10 ; ++i) ex2.find( simhash3(i,10000)) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for sorted set.find()  : " << diff_time.count() << endl;





    return 0;

} // end of main()
