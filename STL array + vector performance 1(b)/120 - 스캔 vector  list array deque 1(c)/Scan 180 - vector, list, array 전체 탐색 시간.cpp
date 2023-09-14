#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace chrono;

using in_secs = duration<double>;

// 수행시간 비교하기
array<int,1000000>  myarray ; // 큰 array는 global로 선언해야 함. 안그러면 뒤진다. ...
typedef duration<double, milli> Milsec ;

int main() {
    system_clock time;
    in_secs diff_time;
    int N = 1000000 ;  // 1 mega 개의 원소를 scanning

    system_clock::time_point tbegin, tend ;

    vector<int>  myvec ;
    for(int i=1; i<= N ; ++i) myvec.push_back(i);
    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : myvec ) w = w + i ;
           //cout << "\n " << i << " myvec.front( ) = " << myvec.front( ) ;
       }
    tend = time.now();
    Milsec milgap = duration_cast<Milsec>(tend -tbegin);

    diff_time = tend - tbegin;
    cout << "\n Time for 10번 scanning( myvec[ ]): " << milgap.count() << endl;

    list<int>  mylist ;
    for(int i=1; i<= N ; ++i) mylist.push_back(i);
    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : mylist ) w = w + i ;
           //cout << "\n " << i << " mylist.front( ) = " << mylist.front( ) ;
       }
    tend = time.now();
    milgap = duration_cast<Milsec>(tend -tbegin);
    cout << "\n Time for 10번 scanning( mylist[ ]): " << milgap.count() << endl;



    for(int i=1; i<= N ; ++i) myarray[i-1]= i;
    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : myarray ) w = w + i ;
           //cout << "\n " << i << " myarray.front( ) = " << myarray.front( ) ;
       }
    tend = time.now();
    milgap = duration_cast<Milsec>(tend -tbegin);
    cout << "\n Time for 10번 scanning( myarray ): " << milgap.count() << endl;

    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto j = myarray.begin() ; j != myarray.end() ; j++)
            *j = *j + i ;
       }
    tend = time.now();
    milgap = duration_cast<Milsec>(tend -tbegin);
    cout << "\n Time for 10번 for looping ( myarray ): " << milgap.count() << endl;


    deque<int> mydeq ;
    for(int i=1; i<= N ; ++i) mydeq.push_back(i);
    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : mydeq ) w = w + i ;
           //cout << "\n " << i << " mydeq.front( ) = " << mydeq.front( ) ;
       }
    tend = time.now();
    milgap = duration_cast<Milsec>(tend -tbegin);
    cout << "\n Time for 10번 scanning( mydeque ):  " << milgap.count() << endl;
    return 0;

} // end of main()
