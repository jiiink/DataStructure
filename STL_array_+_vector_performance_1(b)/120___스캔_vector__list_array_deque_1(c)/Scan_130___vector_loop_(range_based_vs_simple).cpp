#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace chrono;

using in_secs = duration<double>;
#define SZ 1000000
#define N  1000000

array <int,  N >  myarray ; // 큰 array는 global로 선언해야 함. 안그러면 뒤진다. ...
vector<int>  myvec ;
list  <int>  mylist ;
deque <int>  mydeque;

typedef duration<double, milli> Milsec ;

int main() {
    system_clock time;
    in_secs diff_time;
    system_clock::time_point tbegin, tend ;

    for(int i=0 ; i< N ; ++i ) {
        myarray[i]       = i;
        myvec.push_back(  i);
        mylist.push_back( i);
        mydeque.push_back(i);
    }

    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : myvec ) w = w + i ;
           //cout << "\n " << i << " myvec.front( ) = " << myvec.front( ) ;
       }
    tend = time.now();
    Milsec milgap = duration_cast<Milsec>(tend -tbegin);
    diff_time = tend - tbegin;
    cout << "\n Range-based vector scan myvec[]: " << milgap.count() << endl;

    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto j = myvec.begin() ; j != myvec.end() ; j++)
            *j = *j + i ;
       }
    tend = time.now();
    milgap = duration_cast<Milsec>(tend -tbegin);
    cout << "\n begin-end for loop scan myvec[] : " << milgap.count() << endl;


    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : myarray ) w = w + i ;
      }
    tend = time.now();
    milgap = duration_cast<Milsec>(tend -tbegin);
    cout << "\n Range-based array scan myarray[] : " << milgap.count() << endl;


    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto j = myarray.begin() ; j != myarray.end() ; j++)
            *j = *j + i ;
       }
    tend = time.now();
    milgap = duration_cast<Milsec>(tend -tbegin);
    cout << "\n begin-end for loop scan myarray[]: " << milgap.count() << endl;

    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : mylist ) w = w + i ;
       }
    tend = time.now();
    milgap = duration_cast<Milsec>(tend -tbegin);
    cout << "\n Range-based scan  mylist[ ]    : " << milgap.count() << endl;

    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto j = mylist.begin() ; j != mylist.end() ; j++)
            *j = *j + i ;
       }
    tend = time.now();
    milgap = duration_cast<Milsec>(tend -tbegin);
    cout << "\n begin-end for loop mylist[]   : " << milgap.count() << endl;

    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto &w : mydeque ) w = w + i ;
       }
    tend = time.now();
    milgap = duration_cast<Milsec>(tend -tbegin);
    cout << "\n Range-based scan  mydeque[ ]    : " << milgap.count() << endl;

    tbegin = time.now();
      for(int i=1; i<= 10 ; ++i)  {
           for( auto j = mydeque.begin() ; j != mydeque.end() ; j++)
            *j = *j + i ;
       }
    tend = time.now();
    milgap = duration_cast<Milsec>(tend -tbegin);
    cout << "\n begin-end for loop mydeque[]   : " << milgap.count() << endl;


} // end of main()
