#include <bits/stdc++.h>
using namespace std;

template <typename T>
void PrintQ(string MSG, queue<T> myQ) {
  std::cout <<"\n" << MSG << "\n " ;
  if ( myQ.empty() ) cout << "어.. 비어있는 Queue!" ;
  while (!myQ.empty()) {
    T top = myQ.front();
    myQ.pop();
    std::cout << top << "\n ";
  }
}

int womenPop(queue<int>& q) {
  int value = q.front();
  q.pop();
  cout << value << endl;
  return value;
}

int menPop(queue<int>& q) {
  int value = q.front();
  q.pop();
  return value;
}


// 이 함수를 완성하세요.
queue<int> Rearrange( queue<int> B ) {
  //separate man, woman
  queue<int> men, women;
  while (!B.empty()) {
    if (B.front() / 100 == 1) {
      men.push(B.front());
    } else {
      women.push(B.front());
    }
    B.pop();
  }

    queue<int> NewJul ;

  while (!women.empty() || !men.empty()) { // push man, woman into the NewJul
    cout << "while\n";
    if (!women.empty()) {
      NewJul.push(womenPop(women));
    }
    if (!men.empty()) {
      NewJul.push(menPop(men));
    }
  }

    return( NewJul ) ;
}

int main() {

   deque<int>  Order \
   {153, 213, 134, 156, 170, 250, 233, 204, 167, 281, 266, 133, 199, 178} ;

   queue<int, deque<int>> Build6 ( Order ) ;
   queue<int>  NewJul ;    // 새로 고친 줄

   PrintQ( " 1. Build6[]= ", Build6 );

   NewJul = Rearrange( Build6 ) ;

   PrintQ( " 2. Newjul[]= ", NewJul );

}
