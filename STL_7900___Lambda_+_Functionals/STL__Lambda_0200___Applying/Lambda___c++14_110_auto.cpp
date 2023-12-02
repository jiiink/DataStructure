// c++ 14에서 컴파일 해야 합니다.

#include <bits/stdc++.h>
using namespace std;

int main() {

    // generic lambda, operator() is a template with two parameters
    auto glambda = [](auto a, auto&& b) { return a < b; };
    bool b = glambda(3, 3.14); // ok

    // generic lambda, operator() is a template with one parameter
    auto vglambda = [](auto printer) {
        return [=](auto&&... ts) { // generic lambda, ts is a parameter pack
            printer(std::forward<decltype(ts)>(ts)...);
            return [=] { printer(ts...); }; // nullary lambda (takes no parameters)
        };
    };

    auto p = vglambda([](auto v1, auto v2, auto v3) {
         cout << v1 << endl ;
         cout << v2 << endl ;
         cout << v3 << endl ; } );
    auto q = p(1, 'a', 3.14); // outputs 1a3.14
    q();

} // end of main( )
