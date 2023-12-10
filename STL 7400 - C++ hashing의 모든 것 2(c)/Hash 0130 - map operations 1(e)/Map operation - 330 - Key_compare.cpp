#include <bits/stdc++.h>
using namespace std ;
#include "mymaptool.h"

int main () {

  map<char,int> mymap;
  map<char,int>::key_compare mycomp = mymap.key_comp();

  mymap['a']=100;
  mymap['b']=200;
  mymap['p']=100;
  mymap['q']=200;
  mymap['r']=300;
  mymap['c']=300;

  cout << "\n mymap의 내용 ::\n";

  char highest = mymap.rbegin()->first;     // highest = mymap['c']=300;

  map<char,int>::iterator it = mymap.begin();

  do {  // highest보다 key가 클 때까지만 비교
    cout << it->first << " => " << it->second << '\n';
  } while ( mycomp((*it++).first, highest) );

  cout << '\n';

  return 0;
}

