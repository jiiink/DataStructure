#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n " << msg<<" : \n" ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

typedef list<int> iLIST ;

iLIST::iterator gnext( iLIST X, iLIST::iterator it) {
        ++it ;
        if( it == X.end()) it = X.begin() ;
        return( it ) ;
}


int main () {
  iLIST  mylist = { 11, 21, 31, 41, 51,  61, 71, 81, 91, 101 };


  Outlist("mylist Beginning : ", mylist) ;
  auto it = mylist.begin() ;

  int count = 0 ;
  while( count < 20 ){
    cout << "\n node=>  " << *it ;
    *it = *it + 200 ;
    it = gnext ( mylist, it) ;
    count++ ;
  }

  Outlist("mylist End : ", mylist) ;


  return 0;
}  // end of main()
