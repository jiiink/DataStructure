
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace chrono;

using in_secs = duration<double>;

// 수행시간 비교하기
array <int,1000000>  myarray ;

int main() {
    system_clock time;
    in_secs diff_time;
    int N = 10000000 ;  // 1000만개의 원소

    // 데이터 준비하기 ------------
    list<int>  la, lb, lc,ld ;
    for(int i ; i < N ; i++) {
            la.push_back(i) ;
            lb.push_back(i) ;
    }


    // A 시간측정
    auto tbegin = time.now();
        lc = la  ;  // list를 object로 copy하기
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n lc = la : " << diff_time.count() << endl;


    // B 시간측정
    tbegin = time.now();
        ld.splice( ld.begin(), la) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n ld.splice( ld.begin(), la) Time : " << diff_time.count() << endl;

    return 0;

} // end of main()
