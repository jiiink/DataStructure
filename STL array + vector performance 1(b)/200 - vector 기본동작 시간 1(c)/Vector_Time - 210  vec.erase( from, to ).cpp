#include <bits/stdc++.h>
#include <chrono>

using namespace std;
using namespace chrono;

using in_secs = duration<double,milli>;

#define  N 300000  // 삼십만개

// 수행시간 비교하기
vector<int        >  myvec1, myvec2 ;
list  <int        >  mylist ;

// list, vector에서 전체를 3등분 한 뒤에 가운데 토막을 모두 삭제한다.

int main() {
    system_clock time;
    in_secs diff_time;
    chrono::system_clock::time_point tbegin, tend ;

    for(int i=1; i<= N ; ++i) {
            myvec1.push_back(i);
            myvec2.push_back(i) ;
            mylist.push_back(i);
    }

    tbegin = time.now();
    for(int i=1; i< (int)(N/3) ; ++i)  {
            myvec1.erase( myvec1.begin()+i+(int)(N/3) );
    }
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n vector에서 가운데 1/3토막 하나씩 지우기 " << diff_time.count() << endl;

    tbegin = time.now();
           myvec2.erase( myvec2.begin()+(int)(N/3),  myvec2.begin()+2*(int)(N/3) );
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n vector에서 가운데 1/3토막 구간으로 들어내기 " << diff_time.count() << endl;


    tbegin = time.now();
    auto lbegin = mylist.begin() ;     advance(lbegin ,(int)(N/3)) ;
    auto lend   = mylist.end()   ; \    advance(lend, 2*(int)(N/3)) ;
           mylist.erase( lbegin,  lend );
    tend = time.now();
    diff_time = tend - tbegin;
    cout << "\n List에서 가운데 1/3토막 구간으로 들어내기 " << diff_time.count() << endl;
} // end of main()
