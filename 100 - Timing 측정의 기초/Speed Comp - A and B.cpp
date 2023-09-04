
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace chrono;

using in_secs = duration<double>;

// 수행시간 비교하기
array <int,1000000>  myarray ;  // 크기 때문에 할 수 없이 Global

int main() {
    system_clock time;
    in_secs diff_time;
    int N = 1000000 ;

    // 데이터 준비하기 --------- 100만개 크기의 vector를 뒤집기(reversing) ---------
    vector<int>  list myvec ;



    for(int i=1; i<= N ; ++i) myvec.push_back(i);
    // A 시간측정
    auto tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           reverse( myvec.begin(), myvec.end() ) ; // 10번 뒤집기
           //cout << "\n " << i << " myvec.front( ) = " << myvec.front( ) ;
       }
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n A Time : " << diff_time.count() << endl;

    // B 준비하기 --------- 100만개 크기의 vector를 뒤집기(reversing) ---------
    vector<int>  myvec ;
    for(int i=1; i<= N ; ++i) myvec.push_back(i);
    // B 시간측정
    auto tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           reverse( myvec.begin(), myvec.end() ) ; // 10번 뒤집기
           //cout << "\n " << i << " myvec.front( ) = " << myvec.front( ) ;
       }
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n A Time : " << diff_time.count() << endl;

    return 0;

} // end of main()
