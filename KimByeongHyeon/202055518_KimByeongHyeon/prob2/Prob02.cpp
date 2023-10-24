#include<bits/stdc++.h>
#define MAX 1000
using namespace std;


template <typename T>
void ShowStack(std::stack<T> mystack) {
  std::cout <<"\n Stack Top: " ;
  if ( mystack.empty() ) cout << "어.. 비어있는 stack!" ;
  while (!mystack.empty()) {
    T top = mystack.top();
    mystack.pop();
    std::cout << top << " ";
  }
}

stack<int> Ready_stack(){
    vector<int> num {6, 7, 12, 3, 34, 34, 3, 10, 10, 10, 3, 51, 33, 33, 41};
    stack <int> banana ;
    for(auto w : num ) banana.push(w) ;
    return( banana) ;
}

bool isin(vector<int> yourv, int value) {
    for (auto item : yourv) {
        if (item == value) {
            return true;
        }
    }
    return false;
}

// 이 함수를 채우시오.
stack<int> Squiz( stack<int> X ) {
  stack<int> result;
  while (true) {

    vector<int> after;
    int duplicate = 0;
    while (!X.empty()) { // squiz
      if (!isin(after, X.top())) {
        after.push_back(X.top());
        X.pop();
      } else {
        duplicate = 1;
        X.pop();
      }
    }
    if (!duplicate) break;

    
    for (auto it=after.rbegin(); it!=after.rend(); ++it) {
      result.push(*it);
    }
  }

  return result;
  
}

int main() {
    stack<int> mango;

    mango = Ready_stack() ;
    ShowStack(mango) ;

    stack<int> result = Squiz( mango ) ;
    ShowStack(result) ;
    return 0;
}  // end of main( )
