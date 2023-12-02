#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<" "
using namespace std;


template <typename Container>
Container make(const char s[]) {
  return Container(&s[0], &s[strlen(s)]);
}

int main() {

  list<char> list1 = make< list<char> >("algorithmanalysis");
  set<char>  s1, s2 ;

  list1.sort();
  allout( "1. list1[]= ", list1 ) ;

  list1.unique();
  allout( "2. list1[]= ", list1 ) ;

  copy(list1.begin(), list1.end(), inserter(s1, s1.begin()));
  allout( "3. s1[]= ", s1 ) ;

  set<char> s3(begin(list1), end(list1));
  allout( "4. s3[]= ", s3 ) ;

  unordered_set<char> s4(begin(list1), end(list1));
  allout( "4. s4[]= ", s4 ) ;
  return 0;
}
