#include <iostream>
#include <array>
#include <algorithm>

#define  pout(MSG,X)  cout<<"\n"<<MSG<< X << "\n" ;
#define  SKIP  cout<<"\n"
using namespace std ;


int main() {
   array<double, 6> my { 3.14, 3.15, 3.16, 3.17, 3.18, 3.1867 };

   pout ( " my.begin( ) = ", my.begin( ) ) ;
   pout ( " * my.begin( ) = ", *my.begin( ) ) ;
   pout ( " my.end( ) = ", my.end( ) ) ;
   pout ( " * my.end( ) = ", *my.end( ) ) ;
   pout ( " my.end( )-my.begin() = ", my.end( )- my.begin() ) ;
   pout ( " * (my.end( )-1) = ", *(my.end( )-1) ) ;
   pout ( " my.back()  = ", my.back()   ) ;
}

