#include <bits/stdc++.h>
using namespace std;


function<void (void)> getLambda() {
    return []() { cout << "Hello lambda for return Lambda!" << endl; };
}

int main() {
    auto foo = getLambda();

    foo();

    return 0;
}
