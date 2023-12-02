// 자료구조 실습 2개의 리스트를 마치 하나의 정수 원소와 같이
// 비교할 수 있다. 단 그 과정에서 결과에 주목하면서 살펴보아야 한다.
// 이전에 STL의  generic equal( )의 강점이다. ^^ C, C++ 에서는 할 수 없는...

#include <bits/stdc++.h>
using namespace std;

int main() {

  cout << "리스트 비교하기  "    << endl;
  list   <string> driver_list = {"Clark", "Rindt", "Senna"  };
  vector <string> vec = { "Clark", "Rindt", "Senna", "Berger"  };
  deque  <string> deq = { "Clark", "Berger" };


  vec.insert(vec.end(), "Clark");
  vec.insert(vec.end(), "Rindt");
  vec.insert(vec.end(), "Senna");
  vec.insert(vec.end(), "Berger");

  deq.insert(deq.end(), "Clark");
  deq.insert(deq.end(), "Berger");

  // driver_list의 첫 3원소가  vecd와 모든 위치에서 같은 지를 검사한다. //
  if (equal(driver_list.begin(), driver_list.end(), vec.begin()) == 0 )
       cout << " 1번 검사 - 다름 \n" ;
  else cout << " 1번 검사 - 같음 \n" ;

  // deq의 모든 원소가 driver_list와 같은지를 검사함.
  // are not equal in all corresponding positions:
  if ( equal(deq.begin(), deq.end(), driver_list.begin()) == 0 )
       cout << " 2번 검사 - 다름 \n" ;
  else cout << " 2번 검사 - 같음 \n" ;

  // Find the corresponding positions in deq and driver_list
  // at which unequal elements first occur:
  pair<deque<string>::iterator, list<string>::iterator>
    pair1 = mismatch(deq.begin(), deq.end(),
                     driver_list.begin());

  if (pair1.first != deq.end())
    cout << "첫번째 다른 불일치 in deq and driver_list:\n  "
         << *(pair1.first) << " and " << *(pair1.second)
         << endl;

  return 0;
}
