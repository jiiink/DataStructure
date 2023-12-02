#include <iostream>
#include <list>
#include <iterator>
using namespace std;

#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "

int main () {

  list<int> first = { 14, 24, 35, 46, 57, 68 } ;
  list<int> second = { 100, 200, 300 } ;
  list<int> temp ;

  allout("first[]= ",   first ) ;
  allout("second[]= ", second ) ;

  temp = second ;
  second = first;
  first = temp ; //list<int>();

  allout("After swap : first[]= ",   first ) ;
  allout("After swap : second[]= ", second ) ;

  return 0;
}
