#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include <chrono>
#define  N 200000   // 20만개 넣음

using namespace std;
using namespace chrono;

using in_secs = duration<double,milli>;


int main() {
    system_clock time;
    in_secs diff_time;

    auto tbegin = time.now();
    auto tend   = time.now();


    cout << "List, Deque, Vector의 begin()에 insert 시간 비교 \n" << N << endl ;
    list   <int> mlist ;
    deque  <int> mdeque;
    vector <int> mvec ;

    tbegin = time.now();
    for(int i=0; i< N ; ++i)
        mlist.insert( mlist.begin(), i);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for mlist.insert( L.begin(), i)   : " << diff_time.count() << endl;

    tbegin = time.now();
    for(int i=0; i< N ; ++i)
        mdeque.insert( mdeque.begin(), i ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for mdeque.insert( D.begin(), i)  : " << diff_time.count() << endl;

    tbegin = time.now();
    for(int i=0; i< N ; ++i)
        mvec.insert( mvec.begin(), i ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for mvec.insert( V.begin(), i)    : " << diff_time.count() << endl;

    mlist.clear() ;
    tbegin = time.now();
    for(int i=0; i< N ; ++i)
        mlist.insert( mlist.end(), i);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for mlist.insert( L.end() , i)    : " << diff_time.count() << endl;

    mdeque.clear( ) ;
    tbegin = time.now();
    for(int i=0; i< N ; ++i)
        mdeque.insert( mdeque.end(), i ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for mdeque.insert( D.end(), i)    : " << diff_time.count() << endl;

    mvec.clear() ;
    tbegin = time.now();
    for(int i=0; i< N ; ++i)
        mvec.insert( mvec.end(), i ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for mvec.insert( V.end(), i)      : " << diff_time.count() << endl;



    return 0;


} // end of main()
