#include <bits/stdc++.h>
#define allout(msg,lx)  cout<< "\n " << msg<<" : \n" ; for(auto w : lx ) cout<< " " << w ;
using namespace std;


int main () {
  list<int> mylist = { 33, 44, 55, 66, 77, 88 };


  allout("Beginning : ", mylist) ;

  mylist.push_back ( 100) ;     allout("Push 100 :", mylist) ;
  mylist.push_front( 500) ;     allout("Push front 500 :", mylist) ;
  mylist.pop_front (    ) ;     allout("Pop front : ", mylist) ;
  mylist.pop_front (    ) ;     allout("Pop front: ", mylist) ;
  mylist.pop_back  (    ) ;     allout("Pop back : ", mylist) ;


  return 0;
}  // end of main()
