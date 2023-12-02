#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main () {
  list<int> mylist(7) ;
  iota( begin(mylist), end(mylist), 1) ;
  auto it = mylist.begin();

  int count =0 ;
  cout << "\n 순방향으로 돌아갑니다." ;
  while( count < 30 ){
    if( it == mylist.end()) {
            cout << "  *end" ; it++ ; }
    else {
         printf("\n count %2d : %d ",  count,  *it ) ;
         it++ ;
         count++; } ;
  }

  count = 0 ;
  cout << "\n 역방향으로 돌아갑니다." ;
  it = mylist.end() ;
  while( count < 30 ){
    if( it == mylist.end()) {
            cout << "  *end" ; it-- ; }
    else {
         printf("\n count %2d : %d ",  count,  *it ) ;
         it-- ;
         count++; } ;
  }
  return 0;
}
