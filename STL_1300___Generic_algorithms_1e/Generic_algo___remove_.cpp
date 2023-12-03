#include <iostream>     // cout
#include <algorithm>    // remove
#include <vector>
using namespace std;

/*
first, last
    Forward iterators to the initial and final positions in a sequence of
    move-assignable elements supporting being compared to a value of type T.
    The range used is [first,last), which contains all the elements between
    first and last, including the element pointed by first but not the element pointed by last.
val
    Value to be removed.
*/


int main () {

  vector<int> my {5, -9, -9, -9,-9, 12, -9 ,10, 45, -9, 32, 41};

  // 주의 지우고 나서 원래 container의 크기는 그대로,

  auto pend = remove ( my.begin(), my.end(), -9 );

  cout << "\n pend= " << pend - my.begin() ;
  cout << "\n *pend= " << *pend ;
  my.resize( pend - my.begin() ) ;
  cout << "\n vector my[] contains:";
  for( auto s : my ) cout << " " << s ;

  return 0;
}
