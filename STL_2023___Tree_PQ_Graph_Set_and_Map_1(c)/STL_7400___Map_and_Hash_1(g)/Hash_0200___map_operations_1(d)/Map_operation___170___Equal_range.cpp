#include <bits/stdc++.h>
using namespace std ;

#include "mymaptool.h"


int main () {

  map <char,int> mymap;
  pair < map <char,int>::iterator, map<char,int>::iterator > ret;

  mymap['z']= 83;
  mymap['b']= 65;
  mymap['a']= 43;
  mymap['t']=  5;
  mymap['q']= 37;
  mymap['x']= 78;
  mymap['w']= 90;


  ret = mymap.equal_range('b');

  cout << "\n ret이 가르키는 lower bound points to: ";
  cout << "\n ret.first->first =" << ret.first->first  ;
  cout << "\n ret.first->second = " << ret.first->second << '\n';

  cout << "upper bound points to: ";
  cout << ret.second->first << " => " << ret.second->second << '\n';

  return 0;
}
