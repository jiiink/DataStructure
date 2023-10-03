
#include <bits/stdc++.h>
using namespace std;

int main () {
  stack<string> mystack;
  string stemp = "토마토 주스" ;

  mystack.emplace ("데낄라");
  mystack.emplace ("레몬 즙");   // 데이터를 그 자체로 push( )
  mystack.emplace ("탄산수");
  mystack.emplace ("얼음");
  mystack.push( stemp ) ;     // 데이터를 그릇(변수) 담아서 push( )

  cout << "mystack contains:\n\n";

  int i = 0 ;
  while (!mystack.empty()) {
    cout << ++i << ".  " << mystack.top() << '\n';
    mystack.pop();
  }

  return 0;
}
