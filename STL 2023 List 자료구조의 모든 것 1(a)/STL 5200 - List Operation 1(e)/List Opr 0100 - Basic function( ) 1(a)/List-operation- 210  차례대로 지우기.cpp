#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;


int main() {

  int N = 17 ;
  list   <int> ml( N ) ;
  vector <int> mv( N ) ;
  int i, steps = 7 ;

  i = 0 ;
  iota( ml.begin(), ml.end(), ++i) ;

  auto itl = ml.begin() ;
  advance( itl, +3) ;   // ÃÊ±â jump
  mout ("> ml[]= ", ml ) ;
  for(i=0; i< steps ; i++){
     itl = ml.erase( itl ) ;
     mout ("> ml[]= ", ml ) ;
  }

  i = 10 ;
  iota( mv.begin(), mv.end(), ++i) ;
  auto itv = mv.begin() ;

} // end of main()
