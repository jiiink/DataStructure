#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main () {

  list< int  > ilist   = { 21, 22, 23, 24, 25, 26, 27, 28, 29, 30 };
  list< int  >::iterator it ;

  int gap ;

  cout << "ilist={}  contains:";
  for ( it=ilist.begin(); it != ilist.end(); ++it) {
    gap =  distance( ilist.begin(), it ) ;
    cout << "\n " << gap << "번째 원소 = " << *it << endl ;
  }


  return 0;
}
