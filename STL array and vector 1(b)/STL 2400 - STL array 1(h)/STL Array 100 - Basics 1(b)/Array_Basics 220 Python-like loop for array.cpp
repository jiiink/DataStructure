// array는 static structure로서 미리 공간을 확보하므로
// 속도가 dynamic array인 vector보다 빠르다.

#include <iostream>    // #include "zohbox.h"
#include <array>
#include <algorithm>   // int mymy[100] ;  double my[23] ;

#define  pout(MSG,X)  cout<<"\n"<<MSG<< X ;
#define allout(MSG,X)   cout<<"\n"<<MSG<<":\n";for(auto w:X)cout<<w<<" , "
#define  SKIP  cout<<"\n"
using namespace std ;


int main() {
   array<double, 9> my { 9.3, 7.5, 5.4, 3.1, 1.5, 11.5, -7.2 };
   pout ( "array 크기: ", my.size( ) ) ;


   SKIP ;
   allout("Sorting( )전 ", my ) ;
   sort( my.begin(), my.end()) ;
   allout("Sorting( )후 ", my ) ;

   SKIP ;
   for(auto &w: my) w *= 0.1 ;
   allout("w *= 0.1 작업 후  ", my ) ;

   cout << "\n 제일 첫 원소 헤헤..." << my.front() << "\n" ;
   cout << "\n 제일 마지막 원소 헤헤..." << my.back() << "\n" ;

}

