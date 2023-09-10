#define vout(msg,x)    cout<<"\n"<<msg; for(auto s:x) cout << "  " << s ;

#include <iostream>     // cout
#include <algorithm>    // for_each
#include <vector>       // vector
#include <array>

using namespace std;


int main () {

  array<int,3>  xi { 51, 52, 53 } ;  // int xi[3] = {51, 52, 53}
  array<int,3>  yi { 101, 102, 103 } ;

  int x=10, y=20;                         // x:10 y:20
  swap(x,y);                              // x:20 y:10

  vector<int> foo(4,x), bar(6,y);         // foo:4x20 bar:6x10
  swap(foo,bar);                          // foo:6x10 bar:4x20

  vout("foo[]= ", foo) ;
  vout("bar[]= ", bar) ;

  vout("ธÞที xi = ", xi ) ;
  vout("ธÞที yi = ", yi ) ;
  swap( xi, yi) ;

  vout("ย๎ที xi = ", xi ) ;
  vout("ย๎ที yi = ", yi ) ;
  return 0;
}
