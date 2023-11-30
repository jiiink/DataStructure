#include <bits/stdc++.h>
#include <functional>
using namespace std;


int main(int argc, char** argv) {
    int a = 0;

    [=]() mutable {
        a++;
        cout << "람다 내부 : " << a << endl;
    }();

    // mutable로 바꿔주었다 한들 결국은 값만 바꿧으므로 외부의 값까지 바뀌진 않음
    cout << "람다 외부 : " << a << endl;
    return 0;

}


