#include <bits/stdc++.h>
using namespace std;


int main() {
    int x , y ;

   [](int a) {printf("\n Good = %d", a) ;} (10);             // 10을 출력. 그 자리에서 람다함수를 사용

   auto printer = [] (string a) { cout << "\n 메롱 = " <<a  ; }; // 람다 함수를 변수에 할당

   printer("도라에몽"); // 10을 출력. 일반 함수처럼 사용함.

    [&](){printf("유효 범위 내의 모든 변수를 참조복사") ; };
    [=](){printf("유효 범위 내의 모든 변수를 값복사") ; };
    [](){printf("어떤 변수도 복사/참조 하지 않음") ; };

    [&x](){printf("변수 x 만 참조 복사하여 사용함") ; };
    [x](){printf("변수 x 만 값 복사하여 사용함") ;};

    [&x, y](){printf("변수 x 는 참조 복사, y는 값복사 하여 사용함") ; };



}
