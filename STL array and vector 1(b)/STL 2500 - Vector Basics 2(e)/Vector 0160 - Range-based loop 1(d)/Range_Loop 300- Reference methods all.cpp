#include <iostream>
#include <vector>
using namespace std ;

int main() {
    vector<int> v = {0, 1, 2, 3, 4, 5};

    for (const int& i : v) // access by const reference
        cout << i << ' ';     cout << '\n';

    for (auto i : v) // access by value, the type of i is int
        cout << i << ' ';     cout << '\n';

    for (auto&& i : v) // access by forwarding reference, the type of i is int&
        cout << i << ' ';     cout << '\n';

    const auto& cv = v;

    for (auto&& i : cv) // access by f-d reference, the type of i is const int&
        cout << i << ' ';     cout << '\n';

    for (int n : {0, 1, 2, 3, 4, 5}) // the initializer may be a braced-init-list
        cout << n << ' ';     cout << '\n';

    int a[] = {0, 1, 2, 3, 4, 5};
    for (int n : a) // the initializer may be an array
        cout << n << ' ';     cout << '\n';

    for ([[maybe_unused]] int n : a)
        cout << 1 << ' '; // the loop variable need not be used     cout << '\n';

//    for (auto n = v.size(); auto i : v) // the init-statement (C++20¿¡¸¸ Àû¿ëµÊ. )
//        cout << --n + i << ' ';     cout << '\n';

}
