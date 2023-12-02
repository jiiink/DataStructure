#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"

int main () {
  map<char,int> mymap;

  mymap['x']=100;
  mymap['y']=200;
  mymap['z']=300;

  mapdump( "mymap 01", mymap ) ;

  mymap.clear();
  mymap['a']=1101;
  mymap['b']=2202;

  mapdump( "mymap 02", mymap ) ;

  return 0;
}
