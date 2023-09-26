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
    list<double> mylist ;
    deque<double> mydeq ;


    for(int i=1; i<= N ; ++i) mylist.push_back( (double)i*i);
    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : mylist ) w = w + (float)i ;
      }
    tend = time.now();
    Milsec milgap = duration_cast<Milsec>(tend -tbegin);

    diff_time = tend - tbegin;
    cout << "\n Range-based mylist[] scan: " << milgap.count() << endl;

    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto j = mylist.begin() ; j != mylist.end() ; j++)
            *j = *j + (float)i ;
       }
    tend = time.now();
    milgap = duration_cast<Milsec>(tend -tbegin);
    cout << "\n begin-end for-loop scan mylist[] : " << milgap.count() << endl;


    for(int i=1; i<= N-1 ; ++i) mydeq.push_back( (double)i ) ;
    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : mydeq ) w = w + (double)i ;
      }
    tend = time.now();
    milgap = duration_cast<Milsec>(tend -tbegin);
    cout << "\n Range-based scan mydeq[]: " << milgap.count() << endl;


    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto j = mydeq.begin() ; j != mydeq.end() ; j++)
            *j = *j + (double)i ;
       }
    tend = time.now();
    milgap = duration_cast<Milsec>(tend -tbegin);
    cout << "\n begin-end for-loop scan mydeq[]: " << milgap.count() << endl;




} // end of main()
