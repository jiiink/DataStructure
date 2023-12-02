#include <iostream>
#include <list>
#include <iterator>

using namespace std;
#define Outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;


int main () {

  list<int>     la =  { 11, 12, 13, 14, 15, 16 } ;
  list<int> lb, lc =  { 91, 92, 93, 94, 95, 96, 97}  ;

  Outlist(" Before la[]= ",   la ) ;
  Outlist(" Before lb[]= ",   lb ) ;
  Outlist(" Before lc[]= ",   lc ) ;

  auto ibegin = la.begin() ;
  auto iend   = la.end( ) ;

  advance(ibegin,+1) ;
  advance(iend  ,-1) ;
  cout << "\n----" <<  *ibegin << "  " << *iend ;

  copy( la.begin(), la.end(), std::back_inserter(lb) ) ;
  //     여기서 부터  여기까지를   , 이 함수로 적용하라.
  auto lotte = copy( ++ibegin  , --iend  , lc.begin()  ) ;
  Outlist(" After la[]= ",   la ) ;
  Outlist(" After lb[]= ",   lb ) ;
  Outlist(" After lc[]= ",   lc ) ;
  cout << "\n *lotte= " << *lotte ;
  return 0;
}
