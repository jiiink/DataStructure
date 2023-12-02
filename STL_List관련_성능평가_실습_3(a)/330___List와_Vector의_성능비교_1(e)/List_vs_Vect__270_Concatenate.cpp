#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace chrono;

using in_secs = duration<double,milli>;

#define  N 1000000  // 삼십만개

// 수행시간 비교하기
vector<int        >  myvec1, myvec2 ;
list  <int        >  mylist, tolist ;

// list, vector에서 전체를 3등분 한 뒤에 가운데 토막을 모두 삭제한다.

void set_data(){
    for(int i=0; i<= N ; ++i) {
            myvec1.push_back(i);
            myvec2.push_back(i+100) ;
            mylist.push_back(i);
            tolist.push_back(i+100);
    }
}

int main() {
    system_clock time;
    in_secs diff_time;
    chrono::system_clock::time_point tbegin, tend ;


    set_data() ;

    tbegin = time.now();
    for(int i=0; i<= N-1 ; ++i)  {
            myvec1.push_back( myvec2[i] );
    }
    myvec2.clear( ) ;  // 지운다.
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n myvec1 = myvec1 + myvec2 ; \n 하나씩 옮기는 시간= "<< diff_time.count() << endl;

    tbegin = time.now();
          mylist.splice( mylist.end(), tolist );
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n mylist.splice( mylist.end(), tolist ); 시간= "<< diff_time.count() << endl;

} // end of main()
