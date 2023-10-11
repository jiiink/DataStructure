#include <bits/stdc++.h>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<" "

using namespace std;

int main(){

     string sa="Tomato-Papaya" ;
     list <char> la (sa.begin(), sa.end() ) ;


     allout("1. la[]= ", la) ;

     auto it1 = la.begin();
     auto it2 = la.end() ;
     advance(it1, 2) ;
     advance(it2,-2) ;

     list <char> lb ( la.size() );
     copy(it1, it2, lb.begin()) ;

     allout("3. la[]= ", la) ;
     allout("4. lb[]= ", lb) ;




} // end of main( )

