#include <bits/stdc++.h>
using namespace std;

/* [captures](parameters) -> return type { body }

  captures: comma(,)로 구분된 캡처들이 들어갑니다.
  parameters: 함수의 인자들이 들어갑니다.
  return type: 함수의 반환형입니다.
  body: 함수의 몸통입니다.             */


int main() {
    [](std::string name) {
        std::cout << "My name is " << name << std::endl;
    }("Jinsoo Heo");

    return 0;
}
