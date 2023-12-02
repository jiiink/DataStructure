// 인위적으로 error  만들어 보기
//  a. 빈 empty stack에서 pop( ) 해보기
//  b. empty stack에 터질때 까지 뭔가를 채워 넣어보기
//  c.  TYPE A인 stack에 다른 TYPE을 넣어보기
//  d.  stack의 중간에 뭔가를 넣어 보기
//  e. vector에서 사용할 수 있는 find( ), sort( )를 억지로 사용해보기

#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "

#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "스택 어댑터 활용하기, 정말 한번 해보자. " << endl;

  stack<int> s, summer ;



  cout << "The stack size is now " << s.size() << endl;
  cout << "Pushing 4 elements " << endl;
  for (auto w : {12, 23, 34, 45, 67, 78, 89} )
       s.push( w );

  // allout("s[] = ", s ) ;


  cout << "The stack size is now " << s.size() << endl;
  cout << "Popping 3 elements " << endl;
  for (int i = 0; i < 3; ++i) {
    cout << "\n s.top() = " << s.top() << endl;
    cout << "\n s.size()= " << s.size() ;
    s.pop();
  }

  while (!s.empty()) {
    cout << s.top() << endl;
    s.pop();  // void()
  } // end of while( )


  return 0;
}
