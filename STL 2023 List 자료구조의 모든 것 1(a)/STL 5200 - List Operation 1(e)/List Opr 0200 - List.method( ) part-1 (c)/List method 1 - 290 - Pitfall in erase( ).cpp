#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;


int main() {

  list   <int> ml( 15 ) ;
  vector <int> mv( 15 ) ;
  string name ;
  int i ;

  i = 0 ;
  iota( ml.begin(), ml.end(), ++i) ;
  i = 10 ;
  iota( mv.begin(), mv.end(), ++i) ;

  auto itv = mv.begin() ;
  auto itl = ml.begin() ;

  mv.erase( itv+5 );
  mout(" mv 1", mv ) ;
  mv.erase( itv+7 );
  mout(" mv 2", mv ) ;


  mout("\n> Step 0:", ml) ;
  ++itl;
  itl = ml.erase(itl) ;
  mout("\n> Step 2:", ml) ;
  ++itl ;
  itl = ml.erase(itl) ;
  mout("\n> Step 3:", ml) ;

  ++itl ;;
  itl = ml.erase(itl) ;
  mout("\n> Step 4:", ml) ;

  ++itl ;;
  itl = ml.erase(itl) ;
  mout("\n> Step 5:", ml) ;

  ++itl ;;
  itl = ml.erase(itl) ;
  mout("\n> Step 5:", ml) ;

} // end of main()





