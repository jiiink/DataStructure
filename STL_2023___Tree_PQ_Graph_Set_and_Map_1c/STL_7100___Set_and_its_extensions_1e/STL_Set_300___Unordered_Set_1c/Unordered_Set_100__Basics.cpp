/*
See this one : https://en.cppreference.com/w/cpp/container/unordered_set

Unordered set is an associative container(이게 중요함.) that contains
a set of unique objects of type Key. Search, insertion,
and removal have average constant-time complexity.
따라서 속도는 무지 빠릅니다. !!!!

Internally, the elements are not sorted in any particular order,
but organized into buckets. Which bucket an element is placed into depends
entirely on the hash of its value. This allows fast access to individual elements,
since once a hash is computed, it refers to the exact bucket the element
is placed into.

Container elements may not be modified (even by non const iterators)
since modification could change an element's hash and corrupt the container.
*/

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
