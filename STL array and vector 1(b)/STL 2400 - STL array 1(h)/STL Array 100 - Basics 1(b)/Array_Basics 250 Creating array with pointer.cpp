#include <bits/stdc++.h>  //코딩평가할 때 사용
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n ";for(auto w:X)cout<<w<<"\n "

using namespace std ;

// STL-style의 array 만들기

int main() {

   array < string,5> *banana ;
   banana = new array<string, 5> () ;


   (*banana)[1] = "Pizza" ;
   (*banana)[3] = "Cola" ;
   (*banana)[4] = "Pickle-box" ;

   allout ( " *banana[]의 내용 :", *banana ) ;

   array <int, 6> *mymy ;
   mymy = new array<int, 6> () ;


   (*mymy)[1] = 501 ;
   (*mymy)[2] = 502 ;
   (*mymy)[3] = 503 ;

   allout ( "Creating array dynamically:", *mymy ) ;
}

/*
   int sum = 100 ;
   for(auto &w: *mymy ){
       w = ++sum ;
       cout << w << "\n" ;
   }

*/
