#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"


int main () {
  map <char,int> mymap;
  map <char,int>::iterator it, ie ;
  int i, j ;

  string mystr ="computer science" ;
  vector<char> carray( mystr.begin(), mystr.end() );

  mymap['b'] = 100;
  mymap['e'] = 200;
  mymap['n'] = 300;
  mymap['t'] = 211;
  mymap['c'] = 323;
  mymap['i'] = 0;


  cout << mymap['n' ] << endl ;
  cout << mymap['z' ] << endl ;
  cout << mymap['i' ] << endl ;

  cout << mymap.at('w') << endl ;

  return 0;
}
