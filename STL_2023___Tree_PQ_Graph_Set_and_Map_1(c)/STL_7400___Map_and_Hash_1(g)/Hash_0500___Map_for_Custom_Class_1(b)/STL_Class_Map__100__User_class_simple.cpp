#include <bits/stdc++.h>
using namespace std;

template<typename T1, typename T2>
struct Node {
    T1 x;
    T2 y;
    Node(T1 x, T2 y): x(x), y(y) {}     // constructor
    bool operator<(const Node &ob) const { //내가 만든 비교 연산자
        return x < ob.x || (x == ob.x && y < ob.y);
    }
};

int main() {
    map < Node<string,string>, int> map = {
        {{"C", "C99"}, 1999},
        {{"Ada", "B"}, 1785},
        {{"C", "C11"}, 2011},
        {{"C++", "C++14"}, 2014},
        {{"C++", "C++17"}, 2017},
        {{"Java", "Java SE 8"}, 2014},
        {{"Java", "Java SE 9"}, 2017}
    };

    for (const auto &entry: map) {
        auto key = entry.first;
        cout << "{" << key.x << "," << key.y << "}, "
                  << entry.second << '\n';
    }

    return 0;
}
