#include <bits/stdc++.h>
using namespace std ;


int main () {

  unordered_set<string> myset;

  myset.emplace ("potatoes");
  myset.emplace ("milk");
  myset.emplace ("flour");
  myset.emplace ("beer");
  myset.emplace ("Gorilla");

  cout << "\n\n myset contains:";
  for (const string& x: myset) cout << " " << x;

  cout << endl;
  return 0;
}
