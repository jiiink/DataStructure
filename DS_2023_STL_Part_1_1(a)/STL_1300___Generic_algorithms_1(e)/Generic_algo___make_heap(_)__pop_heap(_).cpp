#include <iostream>     // cout
#include <algorithm>    // partial_sort
#include <vector>       // vector
#define allout(MSG,X)   cout<<"  "<<MSG<<" ";for(auto w:X)cout<<w<<", "

using namespace std ;

int main () {

  vector<int> v {4, 33, 21, 17 ,27, 31, 41, 62 } ;

  make_heap (v.begin(),v.end());
  allout("\n 1. v[]= ", v) ;


  pop_heap (v.begin(),v.end());
  allout("\n 2. v[]= ", v) ;
  v.pop_back();
  allout("\n 3. v[]= ", v) ;

  v.push_back(99);
  allout("\n 4. v[]= ", v) ;
  push_heap (v.begin(),v.end());
  allout("\n 5. v[]= ", v) ;

  sort_heap (v.begin(),v.end());
  allout("\n √÷¡æ sorted heap[] v : ", v) ;

  return 0;
}
