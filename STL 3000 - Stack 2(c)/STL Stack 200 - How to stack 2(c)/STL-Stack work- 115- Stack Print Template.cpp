
#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

template <typename T>
void dump_stack(std::stack<T>& stack) {
  std::cout <<"\n" ;
  std::stack<T> temp;
  if ( stack.empty() ) cout << "어.. 비어있는 stack!" ;
  while (!stack.empty()) {
    T top = stack.top(); stack.pop();
    std::cout << top << " ";
    temp.push(top);
  }
  /* 복구하지 않음. 뽑아낸 대로 버림.
  while (!temp.empty()) {
    T top = temp.top(); temp.pop();
    stack.push(top);
  }
  */
}

template <typename T>
void dump_stack2(std::stack<T> mystack) {
  std::cout <<"\n" ;
  if ( mystack.empty() ) cout << "어.. 비어있는 stack!" ;
  while (!mystack.empty()) {
    T top = mystack.top();
    mystack.pop();
    std::cout << top << " ";
  }
}



int main() {
    stack<int> sint;
    stack<string> sstr ;
    sint.push(10); sint.push(20);
    sint.push(30); sint.push(55); sint.push(-7);
    dump_stack(sint) ;
    dump_stack(sint) ;
    dump_stack(sint) ;


    sstr.push("메"); sstr.push("롱"); sstr.push("롱");
    sstr.push("뽕"); sstr.push("ㅎ"); sstr.push("ㅎ");
    dump_stack2(sstr) ;
    dump_stack2(sstr) ;



    return 0;
}  // end of main( )
