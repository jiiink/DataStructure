#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n " << msg<<" : \n" ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main () {
  list<int> mylist = { 33, 44, 55, 66, 77, 88 };


  Outlist("Beginning : ", mylist) ;

  cout << "\n1. mylist.front()=" << mylist.front() ;
  cout << "\n2. mylist.back ()=" << mylist.back () ;
  mylist.push_front( 2019 ) ;

  cout << "\n3. mylist.front()=" << mylist.front() ;
  cout << "\n4. mylist.back ()=" << mylist.back () ;
  mylist.push_back( 567 ) ;

  Outlist("\nLast : ", mylist) ;

  return 0;
}  // end of main()
