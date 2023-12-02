#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace chrono;

using in_secs = duration<double>;

// 수행시간 비교하기
array<int,1000000>  myarray ;

int main() {
    system_clock time;
    in_secs diff_time;
    int N = 1000000 ;  // 10 mega 개의 원소를 scanning

    vector<int>  myvec ;
    for(int i=1; i<= N ; ++i) myvec.push_back(i);
    auto tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : myvec ) w = w + 1 ;
           cout << "\n " << i << " myvec.front( ) = " << myvec.front( ) ;
       }
    auto tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for 10번 scanning( myvec ) " << diff_time.count() << endl;

    list<int>  mylist ;
    for(int i=1; i<= N ; ++i) mylist.push_back(i);
    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : mylist ) w = w + 3 ;
           cout << "\n " << i << " mylist.front( ) = " << mylist.front( ) ;
       }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for 10번 scanning( mylist ) " << diff_time.count() << endl;



    for(int i=1; i<= N ; ++i) myarray[i-1]= i;
    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : myarray ) w = w + 4 ;
           cout << "\n " << i << " myarray.front( ) = " << myarray.front( ) ;
       }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for 10번 scanning( myarray ) " << diff_time.count() << endl;
    return 0;

} // end of main()
