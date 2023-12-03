// Multi-set Demonstration (한 집합에  같은 원소가 들어갈 수 있는 구조)

#include <iostream>
#include <cassert>
#include <list>
#include <cstring>
#include <set>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "
using namespace std;
template <typename Container>
Container make(const char s[]) {
  return Container(&s[0], &s[strlen(s)]);
}

int main() {

  list<char> list1 = make< list<char> >("Show must go on forever!!!!") ;

  multiset<char> multiset1, multiset2 ;
  list<char>::iterator i;

  for (i = list1.begin(); i != list1.end(); ++i)
    multiset1.insert(*i);  // 글자를 하나씩 넣습니다. 중복허용

  // Put the characters in multiset1 into list2:
  list<char> list2 = make< list<char> >("on forever!!!! Show must go");
  for (i = list2.begin(); i != list2.end(); ++i)
    multiset2.insert(*i);  // 글자를 하나씩 넣습니다. 중복허용

  allout("> multiset1{}= ", multiset1 )  ;
  allout("> multiset2{}= ", multiset2 )  ;
  if( multiset1 == multiset2)  cout << " 같음. " ;
  else  cout << "다름.  " ;

  return 0;

} // end of main()
