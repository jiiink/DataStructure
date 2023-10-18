
#include <iostream>     // std::cout
#include <algorithm>    // std::find_if
#include <vector>       // std::vector
#include <list>
#define showall(HEAD,X)      cout<<"\n HEAD";cout<<"\n";for(auto w : X) cout<< w << " , ";

using namespace std ;

int main () {

  string mys   = "Crazy Prof." ;
  int    *p,       myints[] = { 10, 20, 30, 40 };
  vector <int>     myvec    {35,  6, 8,  13, 21, 83,  4} ;
  list   <double>  mylist   { 34.12, 5,67, 0.89, 100.2, -34.12} ;


  sort (myints, myints+3);
  showall( "myints sort", myints) ;

  sort (myvec.begin(), myvec.end());
  showall( "myvecs sort",myvec) ;

  mylist.sort( ); // 단 list는 member sort( )를 사용!!!!
  showall( "mylists sort",mylist) ;
}
