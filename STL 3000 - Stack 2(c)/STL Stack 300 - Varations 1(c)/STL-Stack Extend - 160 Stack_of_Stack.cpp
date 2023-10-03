// 복합자료구조를 구성한다.
// 과제 1.  stack을 단위 원소로 하는 1차원 vector 만들기 ,
// 즉 stack으로 구성된 vector를 만들어 본다.
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> intvec ;
typedef stack<int>  intstack ;

int main() {
     intvec  myvec ;
     intstack mystack ;
     stack <intvec>  VecStack ;     // 원소가 vector인 Stack
     stack <intstack> StackStack ;  // 원소가 Stack이 Stack
     vector <intstack>  StackVec ;  // 원소가 Stack이 Vector
     vector <intstack>::iterator iStackVec ;

     mystack.push(11) ; mystack.push(22) ; mystack.push(33) ;
     StackVec.push_back( mystack) ;  // 하나의 stack을 넣는다.
     // (11,22,33)

     mystack.push(211) ;  mystack.push(222) ;
     mystack.push(233) ;  mystack.push(-90) ;
     StackVec.push_back( mystack) ;  // 또 하나의 stack을 넣는다.
     //  [11,22,33 )
     //  [ 211, 222, 233, -90 )

     mystack.push(-100) ; mystack.push( -99) ;
     mystack.push( -98) ; mystack.push( -97) ;  mystack.push( -96) ;
     StackVec.push_back( mystack) ;  // 세번째 stack을 vector에 넣는다.
     //  [11,22,33 )
     //  [ 211, 222, 233, -90 )
     //  [ -100, -99, -98, -97, -96 )


     iStackVec = StackVec.begin() ;

     cout << iStackVec->top()  << "\n" ;    //  [11,22,33 )
     cout << (iStackVec+1)->top() << "\n" ;// [ 211, 222, 233, -90 )
     cout << (iStackVec+2)->top() << "\n" ; //[ -100, -99, -98, -97, -96 )


     iStackVec->pop() ; iStackVec->pop() ; (iStackVec+2)->pop() ;
     // [11,22  )
     // [ 211, 222, 233  )
     // [ -100, -99, -98, -97  )

     cout << "\n 각 vector stack의 Top을 제거한 후 top() 값 \n " ;
     cout << iStackVec->top()  << "\n" ;
     cout << (iStackVec+1)->top() << "\n" ;
     cout << (iStackVec+2)->top() << "\n" ;


     return 0;
}
