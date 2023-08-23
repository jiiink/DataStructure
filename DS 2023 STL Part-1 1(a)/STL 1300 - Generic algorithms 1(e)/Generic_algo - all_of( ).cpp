
#include <iostream>     // cout
#include <algorithm>    // STL algorithm을 사용 l_of
#include <array>        // STL array
#include <list>

using namespace std ;

// int foo[8]

int que(int s){
}

int main () {

  array <int,8> foo = {3,5,7,11,14, 17,19,23}; // int foo[8] = { }
  list <string> soo = {"Summer", "TimeKiller", "Banana Boat", "Compiler" };

  // 지정한 원소가 모두 predicate true이면 전체가 true, 실제 검사는 홀수
  if ( all_of(foo.begin(), foo.end(), [](int i){return i%2;}) ) // 이름없는 함수 람다. functional code
           cout << " 모든 숫자는 홀수입니다. \n";
             else cout << "숫자에 짝수가 낑겨 있습니다. " ;

  if ( all_of(soo.begin(), soo.end(), [](string w){ if ( w.size() > 7 ) return 1; else 0;}) )
          cout << " 문자열의 길이가 모두 7 이상 " ;
  else    cout << " 문자열의 길이가 모두 7 이상이 아닙니다. " ;


  return 0;
}
