// array는 static structure로서 미리 공간을 확보하므로
// 속도가 dynamic array인 vector보다 빠르다.

#include <iostream>    // #include "zohbox.h"
#include <array>
#include <algorithm>   // int mymy[100] ;  double my[23] ;

#define  pout(MSG,X)     cout<<"\n"<<MSG<< X << "\n" ;
#define  allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
#define  SKIP            cout<<"\n"
using namespace std ;


int main() {
   array<double, 5> my { 9.0, 7.2, 5.4, 3.6, 1.8 };  // double my[5] = { }
   array<double, 5> your, their ;

   pout ( "array 크기:", my.size( ) ) ;
   cout << "제일 첫 원소: " << my.front() << "\n" ;
   cout << "제일 마지막 원소: " << my.back() << "\n" ; // my[4]

   your = their = my  ;
   their.back()= -999.999 ;
   allout("your[] = ", your ) ;
   allout("their[]= ", their ) ;
}

