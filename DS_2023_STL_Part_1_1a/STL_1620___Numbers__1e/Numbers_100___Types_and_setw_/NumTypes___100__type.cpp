#include <typeinfo>
#include <memory>
#include <string>
#include <cstdlib>

#include <bits/stdc++.h>
using namespace std ;

int& foo_lref();
int&& foo_rref();
int foo_value();

int main() {

    int i = 0;
    const int ci = 0;
    cout << "decltype(i) is " << type_name<decltype(i)>() << '\n';
    cout << "decltype((i)) is " << type_name<decltype((i))>() << '\n';
    cout << "decltype(ci) is " << type_name<decltype(ci)>() << '\n';
    cout << "decltype((ci)) is " << type_name<decltype((ci))>() << '\n';
    cout << "decltype(static_cast<int&>(i)) is " << type_name<decltype(static_cast<int&>(i))>() << '\n';
    cout << "decltype(static_cast<int&&>(i)) is " << type_name<decltype(static_cast<int&&>(i))>() << '\n';
    cout << "decltype(static_cast<int>(i)) is " << type_name<decltype(static_cast<int>(i))>() << '\n';
    cout << "decltype(foo_lref()) is " << type_name<decltype(foo_lref())>() << '\n';
    cout << "decltype(foo_rref()) is " << type_name<decltype(foo_rref())>() << '\n';
    cout << "decltype(foo_value()) is " << type_name<decltype(foo_value())>() << '\n';
}
