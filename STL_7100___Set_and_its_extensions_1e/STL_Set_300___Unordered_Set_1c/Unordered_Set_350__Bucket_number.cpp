#include <bits/stdc++.h>
using namespace std ;

int main () {

  unordered_set<string> myset = {"water","sand","ice","foam", "Bok", "Beer" };

  for (const string& x: myset) {
    cout << x << " is in bucket #" << myset.bucket(x) << endl;
  }

  return 0;
}
