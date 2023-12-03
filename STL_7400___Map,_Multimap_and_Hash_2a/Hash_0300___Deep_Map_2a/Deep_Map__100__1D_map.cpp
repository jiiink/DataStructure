// 하나의 map에 여러개의 attribut를 담을 수 있는 multi_map의 사용 예
// map을 CodeBlock에서 사용하려면 반드시 Comipler에서 C+11 을 check해야 합니다.
// Have g++ follow the C++11 ISO C++ language standard

#include <bits/stdc++.h>
using namespace std;

int main() {

  multimap<string, int> m;

  m.insert( pair<string, int>("a", 1));
  m.insert( pair<string, int>("c", 2));
  m.insert( pair<string, int>("b", 3));
  m.insert( pair<string, int>("b", 4));
  m.insert( pair<string, int>("a", 5));
  m.insert( pair<string, int>("b", 6));

  cout << "Number of elements with key a: " << m.count("a") << endl;
  cout << "Number of elements with key b: " << m.count("b") << endl;
  cout << "Number of elements with key c: " << m.count("c") << endl;

  cout << "Elements in m: " << endl;
  for ( auto it = m.begin(); it != m.end(); ++it) {
       cout << "  [" << (*it).first << ", " << (*it).second << "]" << endl;
   }

   pair< multimap<string, int>::iterator, multimap<string, int>::iterator> ppp;


   ppp = m.equal_range("b");    // equal_range(b)는 b를 key로 가지는 원소의 범위를 지정한다.

   // Loop through range of maps of key "b"
   cout << endl << "Range of equal_range(b) 원소 : " << endl;

   multimap<string, int>::iterator it2 ;
   for ( it2 = ppp.first; it2 != ppp.second; ++it2)    {
       cout << "  [" << (*it2).first << ", " << (*it2).second << "]" << endl;
   }

//   다음이 가능할까요 ?
//   cout << ppp.first  << endl;
//   cout << ppp.second << endl;

   m.clear(); // 이것을 해야만 memory가 release됩니다. 안그러면 memory 꽉 참.
}

