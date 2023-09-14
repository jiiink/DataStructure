#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;


int main () {

        vector< int> PNU  { 11, 12, 13, 14, 15, 16, 17 };

        allout(" step 1=", PNU) ;

        PNU.reserve(5);
        allout(" step 2=", PNU) ;

        cout << "\n size( ) after reserve( )= " << PNU.size( ) ;
        cout << "\n capacity( ) after reserve( )= " << PNU.capacity( ) ;
        cout << "\n step 3 =" <<  PNU.front( ) ;
        cout << "\n step 4 =" <<  PNU.back ( ) ;
        cout << "\n step 5 =" <<  *(PNU.end() - 1 )  ;

        PNU.reserve(100);
        allout(" step 6=", PNU) ;

        cout << "\n size( ) after reserve( ) = " << PNU.size( ) ;
        cout << "\n capacity( ) after reserve( )= " << PNU.capacity( ) ;
        cout << "\n step 7 =" <<  PNU.front( ) ;
        cout << "\n step 8 =" <<  PNU.back ( ) ;
        cout << "\n step 9 =" <<  *(PNU.end() - 1 )  ;

  return 0;
}
