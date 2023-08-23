
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {

  int i;
  string s("1234567890abcdefgh");
  vector<char> vector1(s.begin(), s.end());

  allout("1. vector1[]= ", vector1 ) ;
  rotate(vector1.begin(), vector1.begin() + 3, vector1.end());
  allout("2. vector1[]= ", vector1 ) ;

  rotate(vector1.begin(), vector1.begin() + 4, vector1.end());
  allout("3. vector1[]= ", vector1 ) ;

  array<int, 10> marray  {10, 11, 12, 13, 14, 15, 16, 17, 18, -100} ;
  allout("4. marray[]=", marray) ;
  rotate( marray.begin(), marray.begin()+4,  marray.end());
  allout("5. marrayt[]=", marray) ;


  deque<int> mdeque  {10, 11, 12, 13, 14, 15, 16, 17, 18, -100} ;
  allout("4. mdeque[]=", mdeque) ;
  rotate( mdeque.begin(),mdeque.begin()+4,  mdeque.end());
  allout("5. mdeque[]=", mdeque) ;
  return 0;
}
