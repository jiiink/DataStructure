// In STL, containers can change size dynamically.
// Allocator is an object that is responsible for dynamic memory allocation/deallocation.
// get_allocator() is used to allocate memory chunks of memory.
// It returns a copy of the allocator object associated with the container.
// It is defined in vector, map, list, set libraries.

#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std ;


int main () {
  list <int> mylist ; // {100, 200, 300, 400, 500};
  int ii, * p;


  p = mylist.get_allocator().allocate(5);  // 5개 원소와 일치하는 배당 개체를 만듬.


  for (int i=0; i<5; ++i) p[i] = i*100;    // 배열에 원소를 넣음

  cout << " The allocated array contains:";
  for (int i=0; i<5; ++i) cout <<  p[i] << ", ";

  mylist.get_allocator().deallocate(p,5);

  ii=0 ;
  cout << mylist.size() ;
  allout("\n Test[ ]= ", mylist ) ;

  return 0;
}
