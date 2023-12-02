// constructing unordered_sets
#include <bits/stdc++.h>
using namespace std ;

template<class T>
T cmerge (T a, T b) {
  T t(a); t.insert(b.begin(),b.end()); return t;
}

int main () {

  unordered_set<string> first, second, third;
  first = {"red","green","blue"};      // init list
  second = {"orange","pink","yellow"}; // init list
  third = cmerge (first, second);      // move
  first = third;                       // copy

  cout << "first contains:";
  for (const string& x: first) cout << " " << x;
  cout << endl;

  return 0;
}
