#include <bits/stdc++.h>
using namespace std ;
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n ";for(auto w:X)cout<<w<<"\n "


int main() {


   array <int, 6> *mymy ;
   mymy = new array<int, 6> () ;


   (*mymy)[1] = 501 ;
   (*mymy)[2] = 502 ;
   (*mymy)[3] = 503 ;

   allout ( " *mymy[ ] ³»¿ë :", *mymy ) ;


   int sum = 1000 ;
   for(auto &w: *mymy ){
       w = sum + w ;
       cout << w << "\n" ;
   }

  allout ( " µ¡¼À ÈÄ *mymy[ ] ³»¿ë :", *mymy ) ;

} // end of main( )
