#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace chrono;


#define  N 200000
vector<int> mvect, wvect ;
list  <int> mlist, wlist ;
using in_secs = duration<double,milli>;

void set_data() {
    for( int i=0; i< N ; ++i ){
       mvect.push_back(i) ;
       wvect.push_back(i) ;
       mlist.push_back(i) ;
       wlist.push_back(i) ;
    }
}

int main() {
    system_clock time;
    in_secs diff_time;

    int tsize ;

    set_data() ;

    auto tbegin = time.now();
    for(int i=0; i< N-1 ; ++i)
        mvect.erase(mvect.begin());
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "erase( ) at vector.begin()  : " << diff_time.count() << endl;

    tbegin = time.now();
    for(int i=0; i< N-1 ; ++i)
        wvect.erase( wvect.end()-1);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "erase( ) at vector.end()  : " << diff_time.count() << endl;

    tbegin = time.now();
    for(int i=0; i< N-1 ; ++i)
        mlist.erase( mlist.begin());
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "erase( ) at list.begin() : " << diff_time.count() << endl;

    tbegin = time.now();
    auto lend = wlist.end();
    lend-- ;
    for(int i=0; i< N-1 ; ++i)
        wlist.erase( lend--) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "erase( ) at list.end() : " << diff_time.count() << endl;

    return 0;

} // end of main()
