#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;

int main () {
  list<int> la = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22 } ;

  auto it1 = la.begin();
  auto it2 = la.begin();
  auto it3 = la.end() ;

  myout("Before la[]= ", la ) ;

  advance(it1, 1 ) ;

  //advance(it0,  6 ) ;
  advance(it2,  2 ) ;
  advance(it3, -2 ) ;

  la.splice( it1, la, it2, it3 ) ;

  myout("After la[]= ", la ) ;

  return 0;
}  // end of main( )
