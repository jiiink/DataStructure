// constructing unordered_sets
#include <bits/stdc++.h>
using namespace std ;

int main () {

  unordered_set<string> myset =
    { "chair", "table", "lamp", "sofa" };

  cout << "myset contains:";
  for (const string& x: myset) cout << " " << x;
  cout << endl;

  myset.clear();
  myset.insert("bed");
  myset.insert("wardrobe");
  myset.insert("nightstand");

  cout << "myset contains:";
  for (const string& x: myset) cout << " " << x;
  cout << endl;

  return 0;
}
