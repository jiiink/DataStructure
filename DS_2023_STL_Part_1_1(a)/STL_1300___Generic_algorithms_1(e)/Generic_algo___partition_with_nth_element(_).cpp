#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std;


int main() {

  vector<int> v { 8, 7, 1, 3, 10, 2, 5, 6, 4, 9 } ;


  const int N = 4;

  // N번째(0부터 시작)원소를 N번째 위치 시키고 , 즉 pivot 원소가 된다.
  // 그보다 작은 것은 모두 pivot의 오른쪽, 큰 것은 pivot의 왼쪽에 둔다.
  // 이 작업은 O(N)에 처리한다. 이 작업은 매우 따르다.

  allout( "1. v[]= ", v ) ;
  nth_element(v.begin(), v.begin() + N, v.end());
  allout( "2. v[]= ", v ) ;

  return 0;
}
