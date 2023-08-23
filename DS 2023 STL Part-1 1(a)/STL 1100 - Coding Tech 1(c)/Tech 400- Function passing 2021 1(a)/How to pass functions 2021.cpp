#include <functional>
#include <iostream>
#include <string>
using namespace std ;

int some_func1(const string& a) {
  cout << "Func1 Called! " << a << endl;
  return 0;
}

struct S {
  void operator()(char c) { cout << "Func2 Called! " << c << endl; }
};

int main() {
  function <int(const string&)> f1 = some_func1;
  function <void(char)>         f2 = S();
  function <void()>             f3 = []() { cout << "Func3 Called! " << endl; };

  f1("hello");
  f2('c');
  f3();
}
