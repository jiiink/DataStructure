#include <iostream>
#include <list>
#include <string>
#define  allout(MSG,X)   std::cout<<"\n "<<MSG<<" ";for(auto w:X)std::cout<<w<<" "
using namespace std ;


int main() {

     string sa = "123456" ;
     string sb = "abcdefghijk" ;
     string sc = "SUMMER-TIME_WE-ALL_HAPPY" ;

     list <char> la (sa.begin(), sa.end() ) ;
     list <char> lb (sb.begin(), sb.end() ) ;
     list <char> lc (sc.begin(), sc.end() ) ;
     list <char>::iterator itt ;

     allout("1. la[]= ", la) ;
     allout("2. lb[]= ", lb) ;
     allout("3. lc[]= ", lc) ;

     auto it1 = sa.begin() ;
     auto it2 = sa.end() ;
     itt = lb.begin() ;

     advance( itt, 3 ) ;

     cout << "\n\n 작업 후 변화  \n" ;
     copy(it1, it2, itt ) ;
     itt = lc.end() ;
     advance(itt,-3) ;
     copy(it1, it2, itt ) ;
     allout("4. la[]= ", la) ;
     allout("5. lb[]= ", lb) ;
     allout("6. lc[]= ", lc) ;



}
