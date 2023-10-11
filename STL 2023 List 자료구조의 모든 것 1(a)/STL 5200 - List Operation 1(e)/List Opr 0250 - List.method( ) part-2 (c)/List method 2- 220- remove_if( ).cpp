#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std ;


bool single_digit (const int& value) { return (value<10); }

struct is_odd { // a predicate implemented as a class:
  bool operator() (const int& value) { return (value%2)==1; }
};

int main () {

  list<int> mylist = { 5,36,7, 17, 20, 39, 4, 56, 7, 123, 8, 100 };

  allout(" mylist 1[] ", mylist ) ;
  mylist.remove_if (single_digit);           // 15 36 17 20 39
  allout(" Remove single digit ", mylist ) ;
  mylist.remove_if (is_odd());               // 36 20
  allout(" Remove odd numbers ", mylist ) ;

  return 0;
}
