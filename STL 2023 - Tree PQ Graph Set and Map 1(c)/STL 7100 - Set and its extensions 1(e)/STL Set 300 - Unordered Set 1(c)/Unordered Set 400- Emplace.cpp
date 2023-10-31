#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std ;


int main () {

  unordered_set<string> myset;

  myset.emplace ("potatoes");
  myset.emplace ("milk");
  myset.emplace ("flour");
  myset.emplace ("beer");
  myset.emplace ("Gorilla");

  allout("emplace, myset{}= ", myset ) ;
  cout << endl;
  return 0;
}
