#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n  " << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main() {

  string mystr = "Peter Paul Mary" ;
  list<char> list1 ( mystr.begin(), mystr.end() ) ;
  list<char> klist ;


  Outlist(" list1[]= ", list1 ) ;

  klist = list1 ;
  klist.push_back('?') ;

  Outlist(" kist[]= ", klist ) ;

  return 0;
}
