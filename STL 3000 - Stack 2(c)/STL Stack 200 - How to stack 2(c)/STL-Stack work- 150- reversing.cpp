#include <bits/stdc++.h>
using namespace std;

template <typename T>
ostream & operator<<(ostream & os, stack<T> my_stack) {
    while(!my_stack.empty()) { //body
        os << my_stack.top() ;
        my_stack.pop();
    }
    return os;
}


int main() {

  list  <string> list1 ({ "P", "u", "s", "a", "n", "!" } ) ;
  stack <string> X ;

  for(auto w : list1){
    X.push( w ) ;
  }

  X.pop( ) ;
  X.pop( ) ;
  X.push( "O") ;
  cout << X ;
  return 0;
}
