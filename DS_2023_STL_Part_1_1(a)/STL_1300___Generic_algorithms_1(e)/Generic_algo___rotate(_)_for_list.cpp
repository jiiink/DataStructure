
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {


  list<int> mylist {101, 102, 103, 104, 105, 106, 106, 108, -200} ;
  auto lit = mylist.begin();

  advance(lit,4) ;

  allout("4. mylist[]=", mylist) ;
  rotate( mylist.begin(),  lit,  mylist.end());
  allout("5. mylist[]=", mylist) ;

  return 0;
}
