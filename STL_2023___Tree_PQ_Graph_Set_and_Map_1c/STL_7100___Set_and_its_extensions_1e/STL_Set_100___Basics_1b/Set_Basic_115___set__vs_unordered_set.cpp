#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std;


template <typename Container>
Container make(const char s[]) {
  return Container(&s[0], &s[strlen(s)]);
}

int main() {

  list<char> list1 = make< list<char> >("algorithm-analysis");
  set<char>  s1, s2 ;

  set<char> s3(begin(list1), end(list1));
  allout( "> Set{} s3[]= ", s3 ) ;

  unordered_set<char> s4(begin(list1), end(list1));
  allout( "> Unordered Set{} s4[]= ", s4 ) ;
  return 0;
}
