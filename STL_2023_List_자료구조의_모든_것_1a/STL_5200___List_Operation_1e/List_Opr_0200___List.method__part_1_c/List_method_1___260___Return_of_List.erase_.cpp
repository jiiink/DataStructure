#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<": ";for(auto w:X)cout<<w<<", "
using namespace std ;


int main () {

  list<int> mylist = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13} ;
  list<int>::iterator ibegin, iend, itmp ;

  auto it = mylist.begin( ) ;

  allout("1. mylist[]= ", mylist) ;
  itmp = mylist.erase(it) ;
  allout("After erase(it),\n2. mylist[]= ", mylist) ;
  cout << "\n *itmp= " << *itmp ;

  it = mylist.begin( ) ;  // 반드시 다시 it를 set해야 한다.
  advance(it,4) ;
  itmp = mylist.erase(it) ;
  allout("After erase(it),\n3. mylist[]= ", mylist) ;
  cout << "\n *itmp= " << *itmp ;
  return 0;

}
