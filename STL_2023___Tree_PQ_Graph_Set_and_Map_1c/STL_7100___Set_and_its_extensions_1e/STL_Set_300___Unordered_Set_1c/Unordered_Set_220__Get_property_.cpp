#include <bits/stdc++.h>
using namespace std ;
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "


int main () {

  unordered_set<string> myset ( {"orange","pink","yellow","tomato", "kaki"} ); // init list

  cout << "size = " << myset.size() << endl;
  cout << "bucket_count = " << myset.bucket_count() << endl;
  cout << "load_factor = "     << myset.load_factor() << endl;
  cout << "max_load_factor = " << myset.max_load_factor() << endl;

  return 0;
}
