#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace chrono;

using intvec = vector<int>;
using intlist = list<int>;
using in_secs = duration<double,milli>;


int main() {
    system_clock time;
    in_secs diff_time;
    int N = 200000 ;

    auto tbegin = time.now();
    auto tend   = time.now();

    intvec ex1{1,2,3};


    tbegin = time.now();
    for(int i=0; i< N ; ++i){
         ex1.insert( ex1.begin() , i);
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Number of Steps = " << N << endl ;
    cout << "Time for ex1.insert( begin() , i); : " << diff_time.count() << endl;

    tbegin = time.now();
    for(int i=0; i< N ; ++i)
        ex1.insert( ex1.end(), i);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for ex1.insert( end(), i)  : " << diff_time.count() << endl;


    tbegin = time.now();
    intlist ex2{1,2,3};
    auto lit = ex2.begin();
    advance( lit, (int)N/2 ) ;
    for(int i=0; i< N ; ++i){
        ex2.insert(lit, i);
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for list.insert( middle, i);   : " << diff_time.count() << endl;


    tbegin = time.now();
    for(int i=0; i< N ; ++i)
        ex2.push_back(i);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for list.push_back()    : " << diff_time.count()  << endl;

    return 0;

} // end of main()
