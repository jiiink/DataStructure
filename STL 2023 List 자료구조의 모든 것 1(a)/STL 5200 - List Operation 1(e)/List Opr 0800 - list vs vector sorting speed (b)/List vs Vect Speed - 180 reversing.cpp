
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

    // --------- 100만개 크기의 vector를 뒤집기(reversing) ---------
    vector<int>  myvec ;
    for(int i=1; i<= N ; ++i) myvec.push_back(i);
    auto tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           reverse( myvec.begin(), myvec.end() ) ; // 10번 뒤집기
           //cout << "\n " << i << " myvec.front( ) = " << myvec.front( ) ;
       }
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for 10번 reverse( myvec ) : " << diff_time.count() << endl;

    // --------- 100만개 크기의 list를 뒤집기(reversing) ---------
    list<int>  mylist ;
    for(int i=1; i<= N ; ++i) mylist.push_back(i+1);
    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           reverse( mylist.begin(), mylist.end() ) ; // 10번 뒤집기
           //cout << "\n " << i << " mylist.front( ) = " << mylist.front( ) ;
       }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for 10번 reverse( mylist ): " << diff_time.count() << endl;

    // --------- 100만개 크기의 array를 뒤집기(reversing) ---------

    for(int i=1; i<= N ; ++i) myarray[i-1]= i+2 ;

    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           reverse( myarray.begin(), myarray.end() ) ; // 10번 뒤집기
           //cout << "\n " << i << " myarray.front( ) = " << myarray[0] ;
       }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for 10번 reverse( myarray): " << diff_time.count() << endl;


    // --------- 100만개 크기의 deque를 뒤집기(reversing) ---------
    deque<int>  mydeque ;
    for(int i=1; i<= N ; ++i) mydeque.push_back(i+3);
    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           reverse( mydeque.begin(), mydeque.end() ) ; // 10번 뒤집기
           //cout << "\n " << i << " mydeque.front( ) = " << mydeque.front( ) ;
       }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for 10번 reverse( mydeque): " << diff_time.count() << endl;
    return 0;

} // end of main()
