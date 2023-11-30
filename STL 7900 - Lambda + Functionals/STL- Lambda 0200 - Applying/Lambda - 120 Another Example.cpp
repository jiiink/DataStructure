#include <bits/stdc++.h>
#include <functional>
using namespace std;

class CIsOdd {
  public:
    bool operator()(int i) {
        return ((i%2) == 1);
    }
};

// No. 1 ( Non Lambda )
int main(int argc, char** argv) {
    vector<int> v = {10, 25, 40, 55};

    CIsOdd objIsOdd;

    //find_if 는 stl을 돌면서 해당 객체를 탐색 ( 3번째 인자 함수 객체 )
    auto it = find_if(v.cbegin(), v.cend(), objIsOdd);

    cout << "[Using Functor] : The first odd value is " << *it << endl;



// No. 2 ( Use Lambda )


    auto it2 = find_if(v.cbegin(), v.cend(), [](int i) -> bool {
        return (i%2) == 1;
    });

    cout << "[Using Lambda] : The first odd value is " << *it2 << endl;

    return 0;
}



// 출처: http://vallista.tistory.com/entry/C-11-Lambda-Expression-람다-표현식-함수-객체-Functor [VallistA]
