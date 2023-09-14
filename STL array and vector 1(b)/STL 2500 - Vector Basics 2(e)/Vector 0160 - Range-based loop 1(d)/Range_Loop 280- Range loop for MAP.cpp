// Illustration of range-for loop  using CPP code
#include <iostream>
#include <vector>
#include <map>
using namespace std ;

int main() {


    for (int n : { 0, 1, 2, 3, 4, 5  }) cout << n << ' ';

    cout << '\n';
    int a[] = {0, 1, 2, 3, 4, 5};
    for (int n : a) cout << n << ' ';

    cout << '\n';
    map <int, int> MAP({{1, 1}, {2, 2}, {3, 3}});
    for (auto i : MAP)
        cout << '{' << i.first << ", " << i.second << "}\n";

    string str = "PUSAN University";
    for (char c : str) cout << c << ' ';

}
