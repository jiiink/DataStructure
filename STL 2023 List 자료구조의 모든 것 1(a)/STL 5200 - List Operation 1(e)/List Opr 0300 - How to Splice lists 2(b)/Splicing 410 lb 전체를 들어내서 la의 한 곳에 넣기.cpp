#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;

int main () {
  list<int> la = { 1,   2,  3, 4} ;
  list<int> lb = { 55, 56, 57, 58, 59, 60 };

  auto it = la.begin();
  ++it;  // points to 2

  myout("Before la[]= ", la ) ;
  myout("Before lb[]= ", lb ) ;

  auto itend = lb.end() ;
  itend-- ; itend-- ;
  la.splice (it, lb, lb.begin(), itend );  // 변수가 2개면 첫 번수는 L.splice( )에서 L의 위치

  cout << "\n\n after la.splice (it, lb) \n\n" ;

  myout("After la[]= ", la ) ;
  myout("After lb[]= ", lb ) ;


  return 0;
}  // end of main( )
