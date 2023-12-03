#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace chrono;

using intvec = vector<int>;
using intlist = list<int>;
using in_secs = duration<double>;

// 수행시간 비교하기

int main() {
    system_clock time;
    in_secs diff_time;
    int N = 200000 ;
    int tsize ;

    auto tbegin = time.now();
    intvec ex1{1,2,3};
    for(int i=0; i< N ; ++i)
        ex1.insert(ex1.begin(), i);
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "Number of Steps = " << N << endl ;
    cout << "Insertion Time at vector.begin() : " << diff_time.count() << endl;

    ex1.clear();
    tbegin = time.now();
    for(int i=0; i< N ; ++i)
        ex1.push_back(i);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Insertion Time at  vector.back()  : " << diff_time.count() << endl;

    ex1.clear();
    tbegin = time.now();
    for(int i=0; i< N ; ++i){
        tsize = ex1.size() ;
        ex1.insert( ex1.begin() + int(tsize/2) , i ) ;
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Insertion Time at  vector middle()  : " << diff_time.count() << endl;


    tbegin = time.now();
    intlist ex2{1,2,3};
    for(int i=0; i< N ; ++i)
        ex2.insert(ex2.begin(), i);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Insertion Time at  list.begin() : " << diff_time.count() << endl;


    tbegin = time.now();
    ex2 =list<int>() ; // 초기화
    for(int i=0; i< N ; ++i)
        ex2.push_back(i);
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Insertion Time at  list.back() : " << diff_time.count()  << endl;

    ex2 =list<int>() ; // 초기화
    tbegin = time.now();
    list<int>::iterator liter ;
    liter = ex2.begin() ;
    for(int i=0; i< N ; ++i){
        tsize = ex2.size() ;
        advance( liter, int(tsize/2) ) ;
        ex2.insert( liter , i ) ;
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "Insertion Time at  list middle()  : " << diff_time.count() << endl;


    return 0;

} // end of main()
