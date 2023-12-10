#include <bits/stdc++.h>
using namespace std ;

#include "mymaptool.h"


int main () {
  map <char,string> mymap;

  mymap['a'] = "an element";
  mymap['b'] = "another element";
  mymap['c'] = mymap['b'];

  cout << "mymap now contains " << mymap.size() << " elements.\n";

  return 0;
}





