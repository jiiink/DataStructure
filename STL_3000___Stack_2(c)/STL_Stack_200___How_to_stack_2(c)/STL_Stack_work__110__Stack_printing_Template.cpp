
#include<bits/stdc++.h>
#define MAX 1000
using namespace std;


template <typename T>
void dumpStack(std::stack<T> mystack) {
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
    sint.push(10); sint.push(20);
    sint.push(30); sint.push(55); sint.push(-7);
    dumpStack(sint) ;
    dumpStack(sint) ;
    dumpStack(sint) ;





    return 0;
}  // end of main( )
