#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace chrono;
using in_secs = duration<double,milli>;

#define N 200000
vector<int> myvec {1,2,3};
list  <int> mylist{1,2,3} ;

int main() {
    system_clock time;
    in_secs diff_time;

    auto tbegin = time.now(), tend=time.now();
    cout << "\n > Number of Steps = " << N << endl ;


    tbegin = time.now();
    auto vit = myvec.begin() ;
    for(int i=0; i< N ; ++i){
        myvec.insert( vit , i);
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Insert in the middle of vector.mid( ) : " << diff_time.count() << endl;

    tbegin = time.now();
    for(int i=0; i< N ; ++i){
         mylist.push_back(i);
    }

    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Insert in the middle of list.mid( )    : " << diff_time.count() << endl;


    return 0;

} // end of main()
