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

#define N  200000  // Ƚ��

int main() {
    system_clock time;
    in_secs diff_time;

    auto tbegin = time.now();
    intvec ex1{1,2,3};
    for(int i=0; i< N ; ++i)
        ex1.insert(ex1.begin(), i);
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "Number of Steps = " << N << endl ;
    cout << "Time for vector.begin() : " << diff_time.count() << endl;

    tbegin = time.now();
    for(int i=0; i< N ; ++i)
        ex1.push_back(i);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for vector.back()  : " << diff_time.count() << endl;


    tbegin = time.now();
    intlist ex2{1,2,3};
    for(int i=0; i< N ; ++i)
        ex2.insert(ex2.begin(), i);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for list.begin()   : " << diff_time.count() << endl;


    tbegin = time.now();
    for(int i=0; i< N ; ++i)
        ex2.push_back(i);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Time for list.back()    : " << diff_time.count()  << endl;

    return 0;

} // end of main()
