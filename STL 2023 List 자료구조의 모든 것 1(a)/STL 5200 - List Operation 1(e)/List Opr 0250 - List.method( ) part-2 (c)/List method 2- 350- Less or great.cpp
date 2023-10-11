// 자료구조 실습 2개의 리스트를 마치 하나의 정수 원소와 같이
// 비교할 수 있다. 단 그 과정에서 결과에 주목하면서 살펴보아야 한다.
// 이전에 STL의  generic equal( )의 강점이다. ^^ C, C++ 에서는 할 수 없는...

#define  skip (cout << "\n\n")
#include <bits/stdc++.h>
using namespace std;


int main() {

  cout << "리스트 크기 비교하기  "    << endl;
  list  <int> la { 23, 34, 55, 66, 12, 9 } ;
  list  <int> lb { 99, 23, 34, 55, 66, 12, 9 } ;
  list  <int> lc { 23, 34, 55 } ;
  list  <int> ld { 23, 34, 55, 66, 10, 9 } ;
  list < list<int> > LLx = { la, lb, lc, ld };

  if ( la < lb ) cout << "la < lb " ;
  else cout << "la >= lb " ;

  skip ;
  if ( la < lc ) cout << "la < lc " ;
  else cout << "la >= lc " ;

  skip ;
  if ( la < ld ) cout << "la < ld " ;
  else cout << "la >= ld " ;

  // sort( LLx.begin(), LLx.end() ) ;


  return 0;
}
