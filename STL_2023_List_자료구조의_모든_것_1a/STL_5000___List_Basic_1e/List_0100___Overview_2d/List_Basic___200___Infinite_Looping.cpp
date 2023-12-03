#include <bits/stdc++.h>
using namespace std;
#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;

// STL 리스트는 가본적으로 circulat list이다.
int main () {

  list<int> mylist   = { 11, 22, 33, 44, 55 };
  list<int>::iterator it ;
  int count = 0 ;

  it = mylist.begin() ;
  Outlist("시작", mylist) ;
  cout << "\n size of mylist = " << mylist.size() << endl  ;

  while( count <= 50 ){

    if (it == mylist.end( ) )  ; // 끝에 도달하면 아무런 일을 하지 않는다. ; 작업
    else printf("\n %2d = %d", count, *it ) ;

    //     cout << (it - mylist.begin()) ;  안된다. 왜 ? vector에서는 되는데
    it-- ;   // 계속 증가, 다음 원소로 옮겨가면 다시 처음으로 되돌아온다.
    count++ ;
  }

  return 0;
}
