// Stack을 사용해서, n*n grid에 좌표값을 할당하여 움직임(LEFT, RIGHT, UP, DOWN)
// 스택에 우리가 만든 새로운 형식의 자료를 넣는 것을 실습함

#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

// 연산자 오버로딩 함수(중첩시키기), 매우 유용하고 중요한 기능입니다.
// 내가 만든 데이터 유형에 대하여 '+' 연산기능을 따로 정의하는 것입니다.

pair<int, int> operator+(const pair<int,int> & p1, const pair<int,int> & p2) {
   pair<int,int> ans(p1.first+p2.first, p1.second+p2.second);
   return ans;
}


void init_stack( stack<pair<int, int> >& st, int n) { // matrix 구성
      pair <int, int> tmp;
      for (int i=1; i<=n; i++)
      {
          for (int j=1; j<= n; j++)
          {
              tmp = make_pair (i*i,j*j);
              st.push(tmp);
          }
      }
} // end of init_stack()

void stackPrint(stack<pair <int, int> > st) {// matrix 출력
     while(!st.empty())
     {
         cout << st.top().first << " " << st.top().second << endl;
         st.pop();
     }
} // end of stackPrint

int main() {
     const pair<int,int> UP   ( 0,  1);
     const pair<int,int> LEFT (-1,  0);
     const pair<int,int> RIGHT( 1,  0);
     const pair<int,int> DOWN ( 0, -1);
           pair<int,int> xyPoint ;


     int n = 5; // grid n*n
     stack< pair<int, int> > mystack;
     init_stack(mystack, n);
     xyPoint = mystack.top() ;
     cout << "xyPoint Value = " << xyPoint.first \
          << " " << xyPoint.second << endl;
     cout << "\n Stack의 초기 크기 = " << mystack.size() << "\n" ;

     cout << "mystack.top() is now " << mystack.top().first << " " << mystack.top().second << endl;
     xyPoint = mystack.top() + LEFT ;  // Overloading이 발생
     mystack.push( xyPoint ) ;
     xyPoint = mystack.top() + LEFT ;
     mystack.push( xyPoint ) ;
     xyPoint = mystack.top() + LEFT ;
     mystack.push( xyPoint ) ;
      cout << "\n Push후 Stack의 크기는 " << mystack.size() << "\n" ;

     cout << "3개의 점을 추가한 후의 상황. " << endl ;
     cout << "mystack.top() = " << mystack.top().first << " , " << mystack.top().second<< endl;
     mystack.pop() ;
     cout << "mystack.top() = " << mystack.top().first << " , " << mystack.top().second<< endl;
     cout << "Key를 입력하고 Return을 치시오. "  ;
     n = cin.get(); // 문자로 받으들임. 숫자가 아님
     cout << "Key Input =" << n ;

     return 0;
}
