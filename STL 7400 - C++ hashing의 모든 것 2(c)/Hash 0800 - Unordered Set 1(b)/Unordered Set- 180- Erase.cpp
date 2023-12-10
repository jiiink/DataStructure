// constructing unordered_sets
#include <bits/stdc++.h>
using namespace std ;

int main () {

  unordered_set<string> myset =
  {"USA","Canada","France","UK","Japan","Germany","Italy"};

  myset.erase ( myset.begin() );                    // erasing by iterator
  myset.erase ( "France" );                         // erasing by key
  myset.erase ( myset.find("Japan"), myset.end() ); // erasing by range

  cout << "\n myset contains:";
  for ( const string& x: myset ) cout << " " << x;
  cout << endl;

  return 0;
}
