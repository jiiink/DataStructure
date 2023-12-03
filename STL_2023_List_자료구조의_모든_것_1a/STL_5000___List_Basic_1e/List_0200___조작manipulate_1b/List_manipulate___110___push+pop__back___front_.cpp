#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main() {
    int tempi ;

    list <int> la = { 31, 32, 33, 34, 35 };
    outlist("1. la<>= ", la) ;

    la.push_back(74) ; // 만일 이것만 사용한다면 deque[]가 더 좋은 대안.
    outlist("2. la<>= ", la) ;


    la.push_front( 651) ;
    outlist("3. la<>= ", la) ;

    la.push_front( -9 ) ;
    outlist("4. la<>= ", la) ;

    la.pop_back(  ) ;
    outlist("5. la<>= ", la) ;

    la.pop_front(  ) ;
    outlist("6. la<>= ", la) ;

}
