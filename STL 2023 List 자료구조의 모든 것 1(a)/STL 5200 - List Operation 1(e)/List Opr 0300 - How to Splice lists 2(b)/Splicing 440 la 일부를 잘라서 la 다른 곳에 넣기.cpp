#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;

int main () {
  list<int> la = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22 } ;

  auto it0 = la.begin();
  auto it1 = la.begin();
  auto it2 = la.end() ;

  myout("Before la[]= ", la ) ;

  //advance(it0,  6 ) ;
  advance(it1,  4 ) ;
  advance(it2, -2 ) ;
  printf("\n *it0= %d, *it1= %d, *it2= %d,", *it0, *it1, *it2) ;
  la.splice ( it0, la, it1, it2 );  // 중간을 들어내서 처음에 넣음.
  cout << "\n\n after la.splice (it, la, it1, it2 ) \n\n" ;
  myout("After la[]= ", la ) ;

  printf("\n *it0= %d, *it1= %d, *it2= %d,", *it0, *it1, *it2) ;

  la.splice ( ++it0, la, it1, it2 );  // 중간을 들어내서 처음에 넣음.
  cout << "\n\n after la.splice (it, la, it1, it2 ) \n\n" ;
  myout("After la[]= ", la ) ;

  return 0;
}  // end of main( )
