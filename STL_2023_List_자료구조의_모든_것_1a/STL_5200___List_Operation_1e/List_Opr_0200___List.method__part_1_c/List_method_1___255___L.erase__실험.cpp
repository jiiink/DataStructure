#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<": ";for(auto w:X)cout<<w<<", "
using namespace std ;


int main () {

  list<int> mylist = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13} ;
  list<int>::iterator ibegin, iend, tit  ;

  auto it = mylist.begin( ) ;

  allout("1. mylist[]= ", mylist) ;
  mylist.erase(it) ;
  allout("2. mylist[]= ", mylist) ;

  it = mylist.end() ;
  --it ;
  --it ;
  iend = mylist.erase( it ) ;
  cout << "\n »èÁ¦ÈÄ *iend= " << *iend ;
  allout("3. mylist[]= ", mylist) ;

  ibegin = iend ;
  ibegin-- ;
  ibegin-- ;

  cout << "\n  ibegin, iend [] = " << *ibegin << " " << *iend ;
  ibegin =mylist.begin() ;
  advance( ibegin, -4) ;
  tit = mylist.erase( ibegin, mylist.end()  ) ;
  cout << "\n *tit = " << *tit ;
  allout("4. mylist[]= ", mylist) ;
  return 0;

}
