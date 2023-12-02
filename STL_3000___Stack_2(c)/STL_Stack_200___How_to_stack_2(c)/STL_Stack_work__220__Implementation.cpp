// STL - 추상형 Stack을 다양한 방법으로 구현하기 //
#include <iostream>
#include <stack>
#include <list>
#include <deque>
using namespace std;


int main() {

  int thedata[] = {45, 34, 56, 27, 71, 50, 62};

  stack <int>              s0, s1 ;
  stack <int, list<int>  > s2 ;   // 무슨 의미일까요 ?
  stack <int, deque<int> > s3, s4 ;   // default implemention

  s0.push(45) ;
  cout << "\n Size of s1 = " << s1.size() ;
  cout << "\n 4개의 원소를 Stack 3개에 Push 합니다. " ;
  for (int i = 0; i < 4; ++i) s1.push(thedata[i]);
  for (int i = 0; i < 4; ++i) s2.push(thedata[i]);
  for (int i = 0; i < 4; ++i) s3.push(thedata[i]);

  s4 = s3 ;
  cout << "\n Stack s4의 크기 = " << s4.size() ;


  cout << "\n Popping 3 elements from s3[] " ;
  for (int i = 0; i < 3; ++i) {
    cout << "\n Poped item = " << s3.top();
    s3.pop();
  }

  cout << "\n The stack s3[] is now " << s3.size() ;
  cout << "\n Pushing 3 elements " ;
  for(int i = 4; i < 7; ++i)  s3.push(thedata[i]);

  cout << "\n The stack s3[] is now " << s3.size();
  while (!s3.empty()) {  // 아무것도 없을 때까지 뽑는다.
    cout << "\n Poped item = " << s3.top() ;
    s3.pop();
  } // end of while( )

  return 0;
}
