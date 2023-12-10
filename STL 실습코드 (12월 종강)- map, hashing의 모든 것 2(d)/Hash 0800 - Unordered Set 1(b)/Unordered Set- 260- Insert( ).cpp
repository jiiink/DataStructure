// constructing unordered_sets
#include <bits/stdc++.h>
using namespace std ;

int main () {

  unordered_set<string> myset = {"yellow","green","blue"};
  array<string,2> myarray = {"black","white"};
  string mystring = "red";

  myset.insert (mystring);                        // copy insertion
  myset.insert (mystring+"dish");                 // move insertion
  myset.insert (myarray.begin(), myarray.end());  // range insertion
  myset.insert ( {"purple","orange"} );           // initializer list insertion

  cout << "myset contains:";
  for (const string& x: myset) cout << "\n element =  " << x;
  cout <<  endl;

  return 0;
}
