#include <bits/stdc++.h>
using namespace std;

int main() {

  int i, thedata[] = {45, 34, 56, 27, 71, 50, 62};

  queue <int, list<int> > q;  // Queue q를 만들되 그 구현은 list로 한다.
  cout << "01. 큐의 현재 사이즈() = " << q.size() << endl;

  cout << "02. 4개를 밀어 넣음" << endl;
  for (i = 0; i < 4; ++i)  q.push(10*thedata[i]);
  cout << "03. 삽입 이후의 크기 = " << q.size() << endl;
  // dump(" Q의 내용물:", q ) ; // 사용불가

  for (i = 0; i < 3; ++i) {
    cout << q.front() << endl;
    q.pop();
  }
  cout << "04. 큐의 현재 사이즈() " << q.size() << endl;
  cout << "05. 3개의 원소를 밀어 넣음 " << endl;

  for(i = 4; i < 7; ++i)     q.push(thedata[i]);
  cout << "The queue size is now " << q.size() << endl;
  cout << "Popping all elements" << endl;

  while (!q.empty()) {
    cout << q.front() << endl;
    q.pop();
  }
  cout << "모두 뽑아 낸 뒤의 크기()= " << q.size() << endl;
  return 0;
}
