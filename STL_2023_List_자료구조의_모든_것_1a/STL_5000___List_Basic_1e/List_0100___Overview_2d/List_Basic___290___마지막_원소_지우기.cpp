#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n " << msg<<" :" ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main () {
  list<int> mylist = { 33, 44, 55, 66, 77, 88 };
  list<int>::iterator it ;

  it = prev( mylist.end() ) ;

  Outlist("\n 원래 mylist[]= ", mylist ) ;
  mylist.erase( it ) ;
  Outlist("\n 작업 후 mylist[]= ", mylist ) ;

  mylist.pop_back() ;
  Outlist("\n 또 작업 후 mylist[]= ", mylist ) ;

  return 0;
}  // end of main()
