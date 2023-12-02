#include <bits/stdc++.h>
using namespace std ;
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "

template<class T>
T cmerge (T a, T b) { T t(a); t.insert(b.begin(),b.end()); return t; }

int main () {
  unordered_set<string> us1;                                // empty
  unordered_set<string> us2 ( {"red","green","blue"} );    // init list
  unordered_set<string> us3 ( {"orange","pink","yellow","tomato", "kaki"} ); // init list
  unordered_set<string> us4 ( us2 );                      // copy
  unordered_set<string> us5 ( cmerge( us3, us4) );        // move
  unordered_set<string> us6 ( us5.begin(), us5.end() );     // range


  allout(" us1{}= ", us1 ) ;
  allout(" us2{}= ", us2 ) ;
  allout(" us3{}= ", us3 ) ;
  allout(" us4{}= ", us4 ) ;
  allout(" us5{}= ", us5 ) ;
  allout(" us6{}= ", us6 ) ;
  return 0;
}
