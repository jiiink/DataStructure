//  list의 임의 위치에 넣을 때 argument를 pass할 수 있다.
// 함수 C++11에서만 동작 합니다. compile option을 조정하쇼.

// insert : copies objects into the vector.
// emplace : construct them inside of the vector.

#include <bits/stdc++.h>
using namespace std;


int main () {
  list< pair<int,char> > mylist;
  list< pair<int,char> > ::iterator  it ;

  mylist.emplace ( mylist.begin(), 10, 'x' );  //직접 pair를 만들어 준다.
  mylist.emplace ( mylist.begin(), 12, 'y' );  // insert하면 p 자체를 제시한다. 값이 아니라
  mylist.emplace ( mylist.begin(), 34, 'x' );
  mylist.emplace ( mylist.end()  ,  4, 'a' );
  mylist.emplace ( mylist.end()  , 45, 'b' );
  mylist.emplace ( mylist.end()  , 16, 'c' );

  it = mylist.end() ;
  it-- ;
  it-- ;
  mylist.emplace ( mylist.end()  , -99, 'Z' );

  it = mylist.end();
  it-- ;
  mylist.emplace ( it  , 700, 'w' );

  cout << "mylist contains:";
  for (auto& x: mylist)
    cout << "\n (" << x.first << "," << x.second << ")";

  cout << '\n';
  return 0;
}



