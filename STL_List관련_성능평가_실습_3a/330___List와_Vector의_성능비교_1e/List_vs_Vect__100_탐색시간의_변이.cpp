#include <bits/stdc++.h>
#include <chrono>
#include <iomanip>

using namespace std;
using namespace chrono;
#define  N   5000000

using in_secs = duration<double,milli>;
vector<int>    myvec ;
list  <int>    mylist ;
array <int,N>  myarray ; // 큰 array는 global로 선언해야 함. 안그러면 뒤진다. ...
deque <int>    mydeq ;

void set_data() {
    for(int i=0 ; i < N ; i++){
        myvec.push_back(i);
        myarray[i]= i;
        mylist.push_back(i) ;
        mydeq.push_back(i);
    }
}


int main() {
    system_clock time;
    in_secs diff_time;
    float tmin, tmax, fgap ;

    auto tbegin = time.now();
    auto tend   = time.now();

    set_data() ;

    tmin=1000.0 ; tmax=-10.0 ;
    cout << "\n\n In vector[] \n ";
    for(int i=1; i<= 10 ; ++i)  {
      tbegin = time.now();
           for( auto &w : myvec ) w = w + 1 ;
      tend = time.now();
      diff_time = tend - tbegin;
      fgap = diff_time.count();
      if( fgap < tmin) tmin = fgap ;
      if( fgap > tmax) tmax = fgap ;
      cout << "\n " << setw(2) << i << "-th scan with range-loop " << diff_time.count() ;
    } cout << "\n max gap = " << tmax-tmin ;

    cout << "\n\n In vector[] with for loop\n ";
    for(int i=1; i<= 10 ; ++i)  {
      tbegin = time.now();
           for(auto it = myvec.begin() ; it != myvec.end(); it++) *it = *it + 1 ;
      tend = time.now();
      diff_time = tend - tbegin;
      cout << "\n " << setw(2) << i << "-th scan " << diff_time.count() ;
    }

    cout << "\n\n In list[] \n ";
    for(int i=1; i<= 10 ; ++i)  {
      tbegin = time.now();
           for( auto &w : mylist ) w = w + 1 ;
      tend = time.now();
      diff_time = tend - tbegin;
      cout << "\n " << setw(2) << i << "-th scan " << diff_time.count() ;
    }

    cout << "\n\n In list[] with for loop\n ";
    for(int i=1; i<= 10 ; ++i)  {
      tbegin = time.now();
           for(auto it = mylist.begin() ; it != mylist.end(); it++) *it = *it + 1 ;
      tend = time.now();
      diff_time = tend - tbegin;
      cout << "\n " << setw(2) << i << "-th scan " << diff_time.count() ;
    }

    return 0;

} // end of main()
