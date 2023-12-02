#include <bits/stdc++.h>  //코딩평가할 때 사용
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "

using namespace std ;



int main() {
   array<int,  2> apple  ;
   array<int,  7> banana ;
   array<int, 10> mango, tango ;


   banana= {4, 5, 6} ;  // 이게 된다니까요.. ㅎㅎㅎ C에서는 꿈도 못꾸는 것
   allout ( "banana[] = ", banana ) ;

   //apple = banana ; // 장소가 부족하면 안됩니다.

   mango = {11, 12, 13, 14} ;
   tango = mango ;
   tango.back() = -100 ;
   allout ( "mango[] = ", mango ) ;
   allout ( "tango[] = ", tango ) ;
}

/*
   int sum = 100 ;
   for(auto &w: *mymy ){
       w = ++sum ;
       cout << w << "\n" ;
   }

*/
