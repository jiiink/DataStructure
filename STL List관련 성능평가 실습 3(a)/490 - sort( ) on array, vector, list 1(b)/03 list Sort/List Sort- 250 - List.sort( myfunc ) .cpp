// 리스트에서는 generic을 사용할 수 없다.

#include <iostream>     // cout
#include <algorithm>    // sort
#include <list>
#define showall(HEAD,X)      cout<<"\n\n"<<HEAD;cout<<"\n";for(auto w : X) cout<< w << " , ";
using namespace std ;

bool myfun (string s1, string s2 ) { return (s1.back() < s2.back() ) ; }

struct myclass {
  bool operator() (string i, string  j) { return (i > j);}
} myobject;

int main () {

  list <string> kstr { "이대홍", "소나섭", "김준탱", "샘슨", "허문내","박세옹" } ;
  list <string> estr { "banana", "tomaten", "apple", "mango", "papaya","coconut" } ;


  showall("정렬전 ", estr ) ;
  estr.sort() ;
  showall("정렬후 ", estr ) ;
  estr.sort( myfun ) ;
  showall("myfun( ) 정렬후 ", estr ) ;

  estr.sort( myobject ) ;
  showall("myobject( ) 정렬후 ", estr ) ;

  return 0;
}
