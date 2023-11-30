// vector::size
#include <bits/stdc++.h>
using namespace std;

class Chulsoo {
public:
    int count;
};

int main() {
    Chulsoo chulsoo;
    chulsoo.count = 1;

    for (int i = 0; i < 10; i++)     {
        [=] {cout << chulsoo.count << "번째 스테이크를 먹는다." << endl; }();
    }

    for (int i = 0; i < 10; i++)     {
        [&]{cout <<  "변화된 " << chulsoo.count++ << "변화된 번째 스테이크를 먹는다." << endl; }();
    }

    return 0;
}


