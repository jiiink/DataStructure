#include <iostream>
#include <vector>
#include <array>
using namespace std ;


int main() {

  vector< vector<int> > Mvec   ;
  vector< int >  stone = { 1, 2, 3, 4 } ;
  vector< int >  water = { 10, 20 } ;
  Mvec.push_back( stone ) ;


  cout << " Step 1. &Head= " << &(Mvec[0][0]) << "\n";

  Mvec.push_back( stone ) ;
  Mvec.push_back( water ) ;
  cout << " Step 2. &Head= " << &(Mvec[0][0]) << "\n";

  Mvec[0].push_back(81);
  Mvec[0].push_back(82);
  Mvec[0].push_back(83);
  cout << " Step 3. &Head= " << &(Mvec[0][0]) << "\n";

  Mvec.push_back( stone ) ;
  Mvec.push_back( water ) ;
  Mvec[0].push_back( 999 ) ;
  Mvec[0].push_back( 998 ) ;
  Mvec[0].push_back( 997 ) ;
  Mvec[0].push_back( 996 ) ;
  cout << " Step 4. &Head= " << &(Mvec[0][0]) << "\n";
} // end of main()
