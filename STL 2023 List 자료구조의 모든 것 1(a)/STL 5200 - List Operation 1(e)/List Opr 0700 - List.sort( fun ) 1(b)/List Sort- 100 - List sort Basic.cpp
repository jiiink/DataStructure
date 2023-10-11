
#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;

int main() {

  list  <int> my = { 34, 5, 11, 65, 31,  9, 2, 56, 80, 51, 12, 86} ;
  vector<int> py = { 54, 3, 25, 37, 69, 52, 7, 18, 70, 32,  6, 10} ;
  deque <int> dy = { 54, 3, 25, 37, 69, 52, 7, 18, 70, 32,  6, 10} ;
  myout("my[] Before:", my) ;
  my.sort() ;
  myout("my[] After :", my) ;
  // sort( my.begin(), my.end()) ;  List는 algorithm/sort를 사용하면 안된다. List.sort( )
  // 만능 sort( )는 container가 기본적으로 random access[] 구조를 가정.
  sort( py.begin(), py.end() ) ;
  myout("py[] After :", py) ;

  sort( dy.begin(), dy.end() ) ;
  myout("dy[] After :", py) ;
  return 0;
}
