#include <bits/stdc++.h>
using namespace std;

class Board {
public:
    int    foo ;
    string moo ;
 };

typedef vector< Board > Boardvec ;

int main(){

  Boardvec X ;
  Board   Y ;
  Y.foo = 30 ;  Y.moo = "We made it! " ;


  X.push_back( Y );
  cout << "Out1 = " << X[0].foo  << "\n" ;
  cout << "Out2 = " << X[0].moo  << "\n" ;

  Y.foo = 77 ;   Y.moo = "Viva! " ;
  X.push_back( Y );
  cout << "Out3 = " << X[1].foo  << "\n" ;
  cout << "Out4 = " << X[1].moo  << "\n" ;

}//End of Main
