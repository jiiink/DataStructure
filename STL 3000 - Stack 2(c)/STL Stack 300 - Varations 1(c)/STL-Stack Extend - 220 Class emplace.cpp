#include <iostream>
#include <vector>
using namespace std;


class A {
  public:
    A (int x_arg) : x (x_arg) {
        cout << "A (x_arg)\n";
    }
    A () {
        x = 0;
        cout << "A ()\n";
    }
    A (const A &rhs) noexcept {
        x = rhs.x;
        cout << "A (A &)\n";
    }
    A (A &&rhs) noexcept {
        x = rhs.x;
        cout << "A (A &&)\n";
    }

  private:
    int x;
};

int main () {
    {
        vector<A> a;
        cout << "call emplace_back:\n";
        a.emplace_back (0);
    }
    {
        vector<A> a;
        cout << "call push_back:\n";
        a.push_back (1);
    }
    return 0;
}
