#include <iostream>
#include <list>
#include <iterator>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std;

int main () {

  list<int> mylist = { 10, 30, 50, 70, 90, 100, 110, 120 };
  int * p;

  // allocate an array of 5 elements using mylist's allocator:
  p = mylist.get_allocator().allocate(5);

   for (int i=0; i<5; ++i) p[i]=i;

  mylist.get_allocator().deallocate(p,5);
  allout("1. mylist[]= ", mylist ) ;


  return 0;
}
