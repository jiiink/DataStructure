#include <bits/stdc++.h>
using namespace std ;

int main () {

  unordered_set<string> myset =
  {"Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune"};

  unsigned n = myset.bucket_count();

  cout << "myset has " << n << " buckets.\n";

  for (unsigned i=0; i<n; ++i) {
    cout << "bucket #" << i << " contains:";
    for (auto it = myset.begin(i); it!=myset.end(i); ++it)
      cout << " " << *it;
    cout << "\n";
  }

  return 0;
}
