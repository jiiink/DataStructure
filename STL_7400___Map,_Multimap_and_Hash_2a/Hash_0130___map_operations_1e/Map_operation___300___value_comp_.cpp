#include <bits/stdc++.h>
using namespace std ;

#include "mymaptool.h"

int main () {
  map <char,int> mymap;

  mymap['p']= 6002;
  mymap['q']=  303;
  mymap['x']= 1001;
  mymap['y']= 2002;
  mymap['z']=  733;


  cout << "mymap contains:\n";

  pair<char,int> highest = *mymap.rbegin();          // last element
  cout << "\n rbegin() first: " << highest.first << " , second: " << highest.second <<endl ;

  map<char,int>::iterator it = mymap.begin();

  do {
      cout << it->first << " => " << it->second << '\n';
  } while ( mymap.value_comp()(*it++, highest) );  // mymap에서 *it++가 highest가 같으면 true set


  return 0;
}
