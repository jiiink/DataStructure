#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <chrono>
#define  N 100000

using namespace std;
using namespace chrono;

using in_secs = duration<double,milli>;


int main() {
    system_clock time;
    in_secs diff_time;

    auto tbegin = time.now();
    auto tend   = time.now();


    cout << "Number of Steps = " << N << endl ;
    list <int> mlist ;

    tbegin = time.now();
    for(int i=0; i< N ; ++i)
        mlist.insert( mlist.end(), i);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n> Time for mlist.insert( end(), i)    : " << diff_time.count() << endl;

    mlist.clear();
    tbegin = time.now();
    for(int i=0; i< N ; ++i)
        mlist.push_back( i);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for mlist.push_back( i)        : " << diff_time.count() << endl;

    mlist.clear();
    tbegin = time.now();
    auto lit = mlist.begin() ;
    for(int i=0; i< N ; ++i){
          advance( lit, mlist.size()/2 ) ;
          mlist.insert( lit  , i);
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for  mlist.insert( middle(),i)  : " << diff_time.count() << endl;

    mlist.clear();
    tbegin = time.now();
    lit = mlist.begin() ;
    for(int i=0; i< N ; ++i){
          if(i%2) lit++ ;
          mlist.insert( lit  , i);
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for  mlist.insert( lit++,i)     : " << diff_time.count() << endl;

    mlist.clear();
    tbegin = time.now();
    for(int i=0; i< N ; ++i){
          mlist.insert(  mlist.begin() , i);
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for  mlist.insert( begin(), i)  : " << diff_time.count() << endl;

    return 0;


} // end of main()
