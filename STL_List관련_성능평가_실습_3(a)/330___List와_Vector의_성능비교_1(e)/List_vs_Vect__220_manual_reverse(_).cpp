
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace chrono;

using in_secs = duration<double, milli>;

#define N       1000000
array <int,N>   myarray ;  // 크기 때문에 할 수 없이 Global
vector<int>     myvec ;
list  <int>     mylist ;

void set_data() {
    for(int i=0 ; i < N ; i++){
        myvec.push_back(i);
        myarray[i]= i;
        mylist.push_back(i) ;
    }
}

int main() {
    system_clock time;
    in_secs diff_time;

    set_data() ;

    auto tbegin = time.now();
    auto tend   = time.now();

    tbegin = time.now();
      for(int i=0; i< N/2  ; ++i)  {
           swap( myvec[i], myvec[N-i-1]) ;
      }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time manual swap for reverse : " << diff_time.count() << endl;

    tbegin = time.now();
      {
           reverse( myvec.begin() , myvec.end() ) ;
      }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n Time for generic reverse(  ) : " << diff_time.count() << endl;


    return 0;

} // end of main()
