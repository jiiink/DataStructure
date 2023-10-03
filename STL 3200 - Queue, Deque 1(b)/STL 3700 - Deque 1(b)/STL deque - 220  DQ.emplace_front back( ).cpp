#include <iostream>
#include <deque>
#define allout(MSG,X)   cout<<"\n\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;

// 특정 위치에 바로 집어 넣을 수 있다. 호호호.....


int main () {

  deque<int> mydeque = { 52, 53, 54, 55, 56 };

  allout("1. mydeque: ", mydeque ) ;

  mydeque.emplace_front (111);  // 실제 insert( )의 효과
  allout("2. mydeque: ", mydeque ) ;

  mydeque.emplace_front (222);
  allout("3. mydeque: ", mydeque ) ;

  mydeque.emplace_back ( -72);
  allout("4. mydeque: ", mydeque ) ;

  return 0;
}
