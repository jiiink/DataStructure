/*
Inserts a new element at the beginning of the deque,
right before its current first element. This new element
is constructed in place using args as the arguments
for its construction. */

#include <iostream>
#include <deque>
#define allout(MSG,X)   cout<<"\n\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "

using namespace std;

int main () {

  deque<int> mydeque { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };


  mydeque.erase (mydeque.begin()+5); // 5번째 원소를 지움.
  allout("1. mydeque: ", mydeque ) ;

  // 첫 3개의 원소를 지움.
  mydeque.erase (mydeque.begin(),mydeque.begin()+3);

  allout("2. mydeque: ", mydeque ) ;

  return 0;
}
