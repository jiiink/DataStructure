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
  cout << "멀티 셑을 사용해 봅시다. "
       << "먼저 추가하기 " << endl;
  list<char> list1 =
      make< list<char> >("Crazy Professor Zoh in PNU.");


  multiset<char> mulset;
  set     <char> maset ;  // 그냥 마- 집합
  list<char>::iterator i;

  for (i = list1.begin(); i != list1.end(); ++i) {
        mulset.insert(*i);  // 글자를 하나씩 넣습니다. 중복허용
        maset.insert(*i);  // 글자를 하나씩 넣습니다. 중복불허
  }


  cout << "\n\n maset1의 내용: " << "size= " << maset.size() ;
  for(char w : maset) {
    cout << " " << w ;
  }


  cout << "\n\n multiset1의 내용: " << "size= " << mulset.size() ;
  for(char w : mulset) {
    cout << " " << w ;
  }

  return 0;

} // end of main()
