#include <iostream>     // cout
#include <algorithm>    // partial_sort
#include <vector>       // vector
#define allout(MSG,X)   cout<<"\n>  "<<MSG<<" ";for(auto w:X)cout<<w<<", "


bool myfunction (int i,int j) { return (i<j); }
using namespace std;

int main () {
  vector<int> myvector  {5, 3, 8, 2, 9, 1, 7, 6, 4, 10, 0, -1} ;

  allout("1. myvector[]= ", myvector ) ;

  partial_sort (myvector.begin(), myvector.begin()+5, myvector.end());
  allout("2. myvector[]= ", myvector ) ;

  partial_sort (myvector.end()-3, myvector.end( ), myvector.end(),myfunction);
  allout("3. myvector[]= ", myvector ) ;


  return 0;
}
