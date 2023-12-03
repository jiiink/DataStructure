
#include <iostream>
#include <cassert>
#include <list>
#include <algorithm>  // For reverse
#include <string.h>
#define Outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;

/*
조심할 사항
  reverse( A, X) ; A부터 시작해서 X전까지
*/
using namespace std;
template <typename Container>
Container make(const char s[]) {
  return Container(&s[0], &s[strlen(s)]);
}

int main() {

  cout << "리스트의 순서 거꾸로 하기 \n" ;
  list<char> list1 = make< list<char> >("Summer Time Killer");
  list<char>::iterator litr ;

  Outlist(" reverse() 이전의 list1[]= ", list1 ) ;

  auto ihead = list1.begin() ;
  auto itail = list1.end() ;
  reverse( ++ihead, --itail );

  Outlist(" reverse() 이후의 list1[]= ", list1 ) ;
  cout << "\n *ihead = " << *ihead ;
  cout << "\n *itail = " << *itail ;
  reverse(  list1.begin(), list1.end() );

  Outlist(" 또 완전히 reverse() 이후의 list1[]= ", list1 ) ;
  return 0;
}
