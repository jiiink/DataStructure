#include <bits/stdc++.h>
#define allout(msg,lx)  cout<<"\n"<<msg<<" : ";for(auto &w : lx ) cout<< " " << w ;
using namespace std;


int main () {

  list<int> mylist {15,36,7,17,20,39,4,1};


  allout("원래 리스트 . ", mylist ) ;
  mylist.reverse( ) ;
  allout("뒤집은 후의 리스트. ", mylist ) ;
  mylist.reverse( ) ;

  mylist.pop_front();
  mylist.pop_back() ;

  allout("또 다시 뒤집은 후의 리스트. ", mylist ) ;

  return 0;
}


