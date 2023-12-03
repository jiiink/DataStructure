// 인위적으로 error  만들어 보기
//  a. 빈 empty stack에서 pop( ) 해보기
//  b. empty stack에 터질때 까지 뭔가를 채워 넣어보기
//  c.  TYPE A인 stack에 다른 TYPE을 넣어보기
//  d.  stack의 중간에 뭔가를 넣어 보기
//  e. vector에서 사용할 수 있는 find( ), sort( )를 억지로 사용해보기

#include <bits/stdc++.h>
#include <stdexcept>
#include "my_stack.h"
using namespace std;

void safe_pop( stack< float> &S ) {
    if (!S.empty())  S.pop( ) ;
    else {
       throw underflow_error("정신차려... stack이 비었다구..");
       exit(0) ;
    }
}

int main() {

  stack < float > mys ;

  mys.push( 45.6 ) ;
  mys.push( 0.567) ;
  mys.push( 56 ) ;  // 참으면서 넣어주네요. int <-> float 변환

  cout << "\n step 01. " << mys ;
  safe_pop( mys ) ;
  cout << "\n step 02. " << mys ;
  safe_pop( mys ) ;
  cout << "\n step 03. " << mys ;
  safe_pop( mys ) ;
  cout << "\n step 04. " << mys ;
  safe_pop( mys ) ;
  cout << "\n step 05. " << mys ;
  return 0;
}
