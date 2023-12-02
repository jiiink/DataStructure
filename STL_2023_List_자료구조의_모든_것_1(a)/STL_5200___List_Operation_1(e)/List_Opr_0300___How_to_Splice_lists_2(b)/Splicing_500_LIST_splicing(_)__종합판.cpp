#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;

int main () {
  list<int> mylist1 = { 1,   2,  3, 4} ;
  list<int> mylist2 = { 55, 56, 57, 58, 59, 60 };

  auto it = mylist1.begin();
  ++it;  // points to 2

  mylist1.splice (it, mylist2); // mylist1: 1 10 20 30 2 3 4
                                // mylist2 (empty)
                                // "it" still points to 2 (the 5th element)
  myout("list1[]= ", mylist1 ) ;
  myout("list2[]= ", mylist2 ) ;

  mylist2.splice (mylist2.begin(),mylist1, it);
                                // mylist1: 1 10 20 30 3 4
                                // mylist2: 2
                                // "it" is now invalid.
  myout("list1[]= ", mylist1 ) ;
  myout("list2[]= ", mylist2 ) ;
  it = mylist1.begin();
  advance(it,3);                // "it" points now to 30

  mylist1.splice ( mylist1.begin(), mylist1, it, mylist1.end());
                                // mylist1: 30 3 4 1 10 20

  myout("list1[]= ", mylist1 ) ;
  myout("list2[]= ", mylist2 ) ;
  return 0;
}  // end of main( )
