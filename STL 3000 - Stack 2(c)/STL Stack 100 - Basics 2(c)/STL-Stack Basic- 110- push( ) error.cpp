//  인위적으로 error  만들어 보기
//  a. 빈 empty stack에서 pop( ) 해보기
//  b. empty stack에 터질때 까지 뭔가를 채워 넣어보기
//  c.  TYPE A인 stack에 다른 TYPE을 넣어보기
//  d.  stack의 중간에 뭔가를 넣어 보기
//  e. vector에서 사용할 수 있는 find( ), sort( )를 억지로 사용해보기

#include <bits/stdc++.h>
#include "my_stack.h"
using namespace std;


int main() {

  stack < float > mys ;
  string toto ;

  toto = "pizza" ;

  mys.push( 45.6 ) ;
  mys.push( 0.567) ;
  mys.push( 56 ) ;   // 참으면서 넣어주네요. int <-> float 변환
  mys.push( toto ) ;  // 어떤 오류가 나는지 확인을 해봅시다.


  return 0;
}
