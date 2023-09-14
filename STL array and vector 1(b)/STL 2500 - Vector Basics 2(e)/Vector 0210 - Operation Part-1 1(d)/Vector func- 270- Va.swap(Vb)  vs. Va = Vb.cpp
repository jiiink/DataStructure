
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace chrono;

using in_secs = duration<double>;


int main() {
    system_clock time;
    in_secs diff_time;
    int N = 10000000 ;  // 1000만개의 원소
    vector<int> va, vb, vc, vd ;

    // 데이터 준비하기 ------------
    for(int i ; i < N ; i++) {
            va.push_back(i) ;
            vb.push_back(i+1) ;
    }


    // A 시간측정
    auto tbegin = time.now();
        vc = va  ;  // list를 object로 copy하기
        va = vb  ;
        vb = vc  ;
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n vc = va Time : " << diff_time.count() << endl;


    // B 시간측정
    tbegin = time.now();
        va.swap( vb ) ;
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n va.swap( vb ) Time : " << diff_time.count() << endl;

    return 0;

} // end of main()
