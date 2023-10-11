/*
컨테이너를 받아 back_insert_iterator 타입의 객체를 생성하여 반환한다.
back_insert_iterator 타입은 일종의 반복자 클래스로,
push_back 함수처럼 컨테이너의 끝에 쉽게 삽입을 할 수 있도록 도와준다.
해당 타입은 요소를 복사 또는 이동할 목적지를 가리키는 반복자로 사용하면 좋다.

예를 들어 내부적으로 '=' 연산을 사용하여 목적지에 요소를 저장하는
std::copy 또는 std::transform과 같은 함수를 사용할 경우
컨테이너의 잔여 공간을 신경 써줘야 하는 불편함이 있다.
즉 copy의 output 인자로 back_insert_iterator 타입이 아닌
기본 반복자(begin, end)를 사용한다면
잔여 공간이 충분치 않을 경우 런타임 에러가 납니다.
하지만 back_insert_iterator 타입의 객체는 '=' 연산을 통해 요소에 값을 저장하더라도
내부적으로 push_back을 호출하도록 오버 로딩되어 있다.

따라서 저장 공간을 프로그래머가 신경 쓸 필요가 없습니다.

*/

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

int main() {
   string s = "Busan Galmegi";

   list<char> chars;
   copy(s.begin(), s.end(), back_inserter(chars));
   allout(" chars{}= ", chars ) ;


   vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   fill_n( back_inserter(v), 3, -1);
   allout(" v{}= ", v ) ;

   return 0;
}
