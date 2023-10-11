#include <iostream>
#include <list>
#include <iterator>
using namespace std;

#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "

int main () {

  list<int> mylist = { 11, 22, 33, 44, 55, 66, 77, 88, 100 };
  allout("mylist 0=[] ", mylist ) ;


  mylist.resize(  5    );  allout("mylist 2=[] ", mylist ) ;
  mylist.resize(  8,100);  allout("mylist 3=[] ", mylist ) ;
  mylist.resize( 15    );  allout("mylist 4=[] ", mylist ) ;

  return 0;
} // end of main()
