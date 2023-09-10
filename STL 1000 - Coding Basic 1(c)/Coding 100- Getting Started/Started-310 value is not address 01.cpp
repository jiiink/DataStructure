#include <iostream>     // std::cout, std::fixed, std::scientific
using namespace std ;

int main () {
    int x, y ;

    x = y = 10 ;

    if ( x == y ) cout << "\n x == y" ;
    else  cout << "\n x != y" ;

    if ( &x == &y ) cout << "\n &x == &y" ;
    else  cout << "\n &x != &y" ;

  return 0;
}
