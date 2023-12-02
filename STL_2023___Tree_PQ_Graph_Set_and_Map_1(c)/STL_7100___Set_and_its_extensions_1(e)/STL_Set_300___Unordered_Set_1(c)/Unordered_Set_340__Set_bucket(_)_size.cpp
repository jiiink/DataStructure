
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std ;


int main () {

  unordered_set<string> myset =
  {"Mercury","Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune", "Sun",
   "Moon", "Andromeda", "Casiass" };

  unordered_set<string> Fset = unordered_set<Fset>(109);
  allout(" myset{}= ", myset ) ;

  cout << "myset{}의 각 Bucket[]의 내용 :\n";
  for ( unsigned i = 0; i < myset.bucket_count(); ++i) {
    cout << "bucket [" << i << "] = ";
    for ( auto local_it = myset.begin(i); local_it!= myset.end(i); ++local_it )
      cout  << *local_it << " ,";
    cout << endl;
  }

  return 0;
}
