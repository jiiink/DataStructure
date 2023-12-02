#include <bits/stdc++.h>
using namespace std;

int main () {

  priority_queue <string, deque<string>, greater<string> > mypq;
  string mystr ;
  mypq.emplace("orange"    );   // 중간 변수를 통하지 않고 바로 넣을 수 있다.
  mypq.emplace("strawberry");
  mypq.emplace("apple"     );
  mypq.emplace("pear"      );
  mystr = "치킨" ;
  mypq.push   ( mystr      );
  mypq.emplace("맥주"      );

  std::cout << "\n 하나씩 빼 내 봅시다.\n ";
  while (!mypq.empty())   {
     cout << "\n poped[] =  " << mypq.top();
     mypq.pop();
  }
  cout << '\n';

  return 0;
}

