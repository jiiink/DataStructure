
#include <iostream>
#include <list>
#include <iterator>
using namespace std;

#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;


int main () {
  list<int> mylist   = { 12,23,34,45,56};
  auto it = mylist.begin();

  int count =0 ;
  cout << "\n 순방향으로 돌아갑니다." ;
  while( count < 30 ){
    if( it == mylist.end()) cout << "\n  ***end" ;
    else cout << "\n --> " << *it ;
    it++ ;
    count++ ;
  }

  count = 0 ;
  cout << "\n 역방향으로 돌아갑니다." ;
  it = mylist.end() ;
  while( count < 30 ){
    if( it == mylist.end()) cout << "\n  ***end" ;
    else cout << "\n --> " << *it ;
    it-- ;
    count++ ;
  }
  return 0;
}
