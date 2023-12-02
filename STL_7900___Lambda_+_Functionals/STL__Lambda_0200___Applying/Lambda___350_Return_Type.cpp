#include <bits/stdc++.h>
using namespace std;


int main() {
    // implicit return type
    auto foo = [] { return 3.14;};

    // explicit return type
    auto bar = []() -> float { return 3.14f; };

    // warning. double에서 float으로 암시적 형변환.
    float x = foo();

    // OK
    float y = bar();

    return 0;
}
