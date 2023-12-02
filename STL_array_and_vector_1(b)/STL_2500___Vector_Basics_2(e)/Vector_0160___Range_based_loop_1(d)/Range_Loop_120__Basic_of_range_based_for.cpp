
#include <iostream>
#include <vector>
#include <map>
using namespace std ;

int main() {

    vector<int> v = {0, 1, 2, 3, 4, 5};
    for (auto i : v) { cout << i << ' '; }


    for (int n : { 0, 1, 2, 3, 4, 5 }) {
             cout << n << ' ';
    }

    cout << '\n';

    // 일반적인 C type array에서 수행하기
    int a[] = {0, 1, 2, 3, 4, 5};
    for (int n : a) cout << n << ' ';

    cout << '\n';

    for (int n : a) cout << "In loop" << ' ';

    cout << '\n';


    string str = "Geeks";  // 문자열은 기본적인 배열
    for (char c : str)   cout << c << ' ';

    cout << '\n';

    // Printing keys and values of a map
    map <int, int> MAP({{1, 1}, {2, 2}, {3, 3}});
    for (auto i : MAP)  cout << '{' << i.first << ", " << i.second << "}\n";
}

