#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <chrono>
#include <set>

using namespace std;
using namespace chrono;

using intvec  = vector<int>;
using intlist = list<int>;
using intset  = set<int>;
using in_secs = duration<double>;

int simhash2(unsigned int x, int M) {
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

    intvec ex1{1,2,3};
    auto tbegin = time.now();
        for(int i=0; i< N ; ++i) ex1.insert(ex1.begin(), i);
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "Number of Steps = " << N << endl ;
    cout << "Time for insert at vector.begin() : " << diff_time.count() << endl;

    ex1.clear( ) ;
    tbegin = time.now();
          for(int i=0; i< N ; ++i) ex1.push_back(i);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for vector.back()  : " << diff_time.count() << endl;



    intset ex2{1,2,3};
    tbegin = time.now();
          for(int i=0; i< N ; ++i) ex2.insert(i);
    tend  = time.now();
    diff_time = tend - tbegin;
    cout << "Time for -worst- increasing set.insert( ) : " << diff_time.count() << endl;

    ex2.clear() ;

    tbegin = time.now();
          for(int i=N; i > 0; --i) ex2.insert(i);
    tend  = time.now();
    diff_time = tend - tbegin;
    cout << "Time for -best- decreasing set.insert( ) : " << diff_time.count() << endl;


    intset ex3{1,2,3};
    tbegin = time.now();
           for(int i=0; i< N ; ++i) ex3.insert( simhash2(i, 1000) ) ;
    tend  = time.now();
    diff_time = tend - tbegin;
    cout << "Time for hashed value - set.insert( ) : : " << diff_time.count()  << endl;

    return 0;

} // end of main()
