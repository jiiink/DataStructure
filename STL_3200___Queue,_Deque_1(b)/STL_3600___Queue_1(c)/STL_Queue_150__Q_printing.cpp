#include <bits/stdc++.h>
using namespace std;

template <typename T>
void dump_Q(string MSG, std::queue<T> myQ) {
  std::cout <<"\n" << MSG  ;
  if ( myQ.empty() ) cout << "어.. 비어있는 Queue!" ;
  while (!myQ.empty()) {
    T top = myQ.front();
    myQ.pop();
    std::cout << top << " , ";
  }
}

template <typename T>  // 객체를 reference로 받는다....
void act_dump_Q(string MSG, std::queue<T> &myQ) {
  std::cout <<"\n" << MSG  ;
  if ( myQ.empty() ) cout << "어.. 비어있는 Queue!" ;
  while (!myQ.empty()) {
    T top = myQ.front();
    myQ.pop();
    std::cout << top << " , ";
  }
}




int main() {

  queue <string > Q;  // Queue q를 만들되 그 구현은 list로 한다.

  for( string c : {"교", "수", "님", "감", "사", "합", "니", "데", "이" })
         Q.push(c);

  cout << "01. 큐의 현재 사이즈() = " << Q.size() << endl;

  dump_Q( "1. Q[]= ",  Q ) ;
  dump_Q( "2. Q[]= ",  Q ) ;
  act_dump_Q(  "3. Q[]= ",  Q ) ;
  act_dump_Q(  "4. Q[]= ",  Q ) ;
  return 0;
}
