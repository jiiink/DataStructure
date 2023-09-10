#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <iostream>


struct S {
  void operator()(int a, int b) { std::cout << "a + b = " << a + b << std::endl; }
};

int main() {
  S some_obj;

  some_obj(3, 5);
}
