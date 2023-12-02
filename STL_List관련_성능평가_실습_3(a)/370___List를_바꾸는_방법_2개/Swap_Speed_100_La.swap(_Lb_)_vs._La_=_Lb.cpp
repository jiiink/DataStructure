
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace chrono;

using in_secs = duration<double,milli>;


int main() {
    system_clock time ;
    in_secs diff_time ;
    int N = 10000000 ;  // 1000만개의 원소

    // 데이터 준비하기 ------------
    auto tbegin = time.now() ;
    auto tend   = time.now() ;

    list<int>  la, lb, lc,ld ;
    tbegin = time.now();
    for(int i ; i < N ; i++) {
            la.push_back(i) ;
            lb.push_back(i+1) ;
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n la[], lb[]를 만드는 시간 : " << diff_time.count() << endl;

    // A 시간측정
    tbegin = time.now();
        lc = la  ;  // list를 object로 copy하기
        la = lb  ;
        lb = lc  ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n lc=la; la-lb; lb=lc Time : " << diff_time.count() << endl;


    // B 시간측정
    tbegin = time.now();
        la.swap( lb ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n\n la.swap( lb ) Time : " << diff_time.count() << endl;

    return 0;

} // end of main()
