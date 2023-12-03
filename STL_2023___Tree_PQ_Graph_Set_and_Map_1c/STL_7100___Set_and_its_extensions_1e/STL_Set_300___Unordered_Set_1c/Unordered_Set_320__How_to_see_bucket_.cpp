#include <bits/stdc++.h>
using namespace std ;

int main () {

  unordered_set<string> myset = {"water","sand","ice","foam", "Bok", \
                               "Soda","Cola","IPA","단술", "물회", "Red Wine" };

  for (const string& x: myset) {
    cout << "{ " << x << " }" << " in Bucket # " << myset.bucket(x) << endl;
  }

  cout << "\n\n myset{}의 각 Bucket[]의 내용 :\n";
  for ( unsigned i = 0; i < myset.bucket_count(); ++i) {
    cout << "bucket [" << i << "] = ";
    for ( auto local_it = myset.begin(i); local_it!= myset.end(i); ++local_it )
      cout  << *local_it << " ,";
    cout << endl;
  }

  return 0;
}
