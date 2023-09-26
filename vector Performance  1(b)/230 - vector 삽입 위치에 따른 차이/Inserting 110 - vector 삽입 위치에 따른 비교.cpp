#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <chrono>
#define  N 200000

using namespace std;
using namespace chrono;

using in_secs = duration<double,milli>;


int main() {
    system_clock time;
    in_secs diff_time;
    chrono::system_clock::time_point tbegin, tend ;


    cout << "Number of Steps = " << N << endl ;
    vector<int> vec ;

    tbegin = time.now();
    for(int i=0; i< N ; ++i)
        vec.insert( vec.end(), i);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n> Time for vec.insert( end(), i)    : " << diff_time.count() << endl;

    vec.clear();
    tbegin = time.now();
    for(int i=0; i< N ; ++i)
        vec.push_back( i);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for vec.push_back( i)        : " << diff_time.count() << endl;

    vec.clear();
    tbegin = time.now();
    for(int i=0; i< N ; ++i){
         vec.insert( vec.begin()+vec.size()/2 , i);
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for vec.insert( middle(),i)  : " << diff_time.count() << endl;

    vec.clear();
    tbegin = time.now();
    for(int i=0; i< N ; ++i){
         vec.insert( vec.begin() , i);
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "> Time for vec.insert( begin(), i)  : " << diff_time.count() << endl;

    return 0;


} // end of main()
