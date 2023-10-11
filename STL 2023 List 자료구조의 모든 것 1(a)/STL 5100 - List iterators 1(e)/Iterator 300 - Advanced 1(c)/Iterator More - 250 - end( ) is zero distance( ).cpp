#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main () {

  list< int  > ilist   = { 21, 22, 23, 24, 25, 26, 27, 28, 29, 30 };
  list< int  >::iterator ita, itb, itc, itd ;

  int gap ;

  ita = ilist.begin() ;
  itc = ilist.end() ;
  itd = --itc ;
  ++ita ; ++ita ; ++ita ;

  itb = ita ;

  cout << "\n *ita= " << *ita ;
  cout << "\n *itc= " << *itc ;
  cout << "\n *itd= " << *itd ;
  cout << "\n distance(itc, ita)= " << distance(itc, ita) ;
  cout << "\n distance(itd, ita)= " << distance(itd, ita) ;
  return 0;

  // list end()에서는 원소가 없기 때문에 distance 계산에서도 거리는 0가 된다.
}
