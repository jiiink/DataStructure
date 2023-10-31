#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std ;

int main () {

  unordered_set<string> myset = {"yellow","green","blue"};
  array<string,2> myarray = {"black","white"};
  string mystring = "red";

  myset.insert (mystring);                        // copy insertion
  myset.insert (mystring+"dish");                 // move insertion
  myset.insert (myarray.begin(), myarray.end());  // range insertion
  myset.insert ( {"purple","orange"} );           // initializer list insertion

  allout("myset{}= ", myset ) ;

  return 0;
}
