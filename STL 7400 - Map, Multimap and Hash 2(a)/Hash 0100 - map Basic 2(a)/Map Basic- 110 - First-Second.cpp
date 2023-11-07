#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"


int main () {
  map<char,int> mymap;
  map<char,int>::iterator it, ie ;

  mymap['b'] = 100;
  mymap['w'] = 200;
  mymap['g'] = 300;
  mymap['h'] = 200;
  mymap['c'] = 300;

  it = mymap.begin() ;
  ie = mymap.end() ;
  cout << "\n mymap.first = "  <<  (*it).first  ;

  ++it ; --ie ;
  cout << "\n mymap.first = "  <<  (*it).first  ;
  cout << "\n mymap.second = " <<   ie->second  ;

  mapdump(" mymap[] ", mymap ) ;

  return 0;
}
