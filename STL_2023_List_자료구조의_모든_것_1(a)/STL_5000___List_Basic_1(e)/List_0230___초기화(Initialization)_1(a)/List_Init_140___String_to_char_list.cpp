
#include <iostream>
#include <cassert>
#include <list>
#include <algorithm>  // For reverse
#include <string.h>
#define Outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;

using namespace std;
template <typename Container>
Container make(const char s[]) {
  return Container(&s[0], &s[strlen(s)]);
}

int main() {


  list<char> list1 = make< list<char> >("where_gone");
  list<char> klist ;


  Outlist(" list1[]= ", list1 ) ;

  klist = list1 ;
  klist.push_back('?') ;

  Outlist(" kist[]= ", klist ) ;

  return 0;
}
