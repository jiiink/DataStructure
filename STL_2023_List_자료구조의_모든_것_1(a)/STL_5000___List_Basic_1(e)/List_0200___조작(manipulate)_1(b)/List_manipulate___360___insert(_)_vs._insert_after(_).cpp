#include <bits/stdc++.h>
using namespace std;
#define Outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;


int main () {

  list<int>             la =  { 11, 12, 13, 14, 15, 16 } ;
  forward_list<int>     lb =  { 11, 12, 13, 14, 15, 16 } ;

  Outlist(" 처음 주어진 리스트 la[]= ",   la ) ;

  auto lahere = la.begin() ;
  la.insert( lahere, -33) ;
  Outlist(" After insert( ) la[]= ",   la ) ;

  auto lbhere = lb.begin() ;
  lb.insert_after( lbhere, -33) ;
  Outlist(" After insert( ) lb[]= ",   lb ) ;
  return 0;
}
