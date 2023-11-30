// constructing unordered_sets
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std ;

int main () {

  unordered_set<string> myset =
  {"USA","Canada","France","UK","Japan","Germany","Italy"};
  allout("1. myset{}= ", myset ) ;

  myset.erase ( myset.begin() );
  allout("2. myset{}= ", myset ) ;

  myset.erase ( "France" );
  allout("3. myset{}= ", myset ) ;

  myset.erase ( myset.find("Japan"), myset.end() ); // erasing by range
  allout("4. myset{}= ", myset ) ;

  return 0;
}
