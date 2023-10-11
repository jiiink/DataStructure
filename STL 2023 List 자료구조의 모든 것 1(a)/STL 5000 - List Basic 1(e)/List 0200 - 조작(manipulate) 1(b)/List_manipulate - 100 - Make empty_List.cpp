// http://www.cplusplus.com/reference/regex/basic_regex/getloc/
#include <iostream>
#include <list>
#include <iterator>
using namespace std;
#define Outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;


int main () {

  list<int> first = { 14, 24, 35, 46, 57, 68 } ;

  Outlist(" Before first[]= ",   first ) ;
  first.insert( first.begin(), 999 ) ;
  Outlist(" 다음 변화 first[]= ",   first ) ;
  first.insert( first.end() , 435 ) ;
  Outlist(" 다음 변화 first[]= ",   first ) ;

  first = list<int>(); // first를 없애고 새롭게 구성함.

  Outlist(" After first[]= ",   first ) ;

  first.insert( first.begin(), 999 ) ;
  Outlist(" After first[]= ",   first ) ;


  return 0;
}
