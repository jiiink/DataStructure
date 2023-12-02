#include <bits/stdc++.h>
#include <functional>
using namespace std;



int main(int argc, char** argv) {

    [](void){cout << "멋있게 살고 싶다" << endl;}();
    [](string name){cout << "Hello " << name.c_str() << endl; }("World!");

    bool bChk = [](int a) -> bool{   // 명시적으로 제시하지 않으면 컴파일러가 자기 맘대로 설정
        if (a%2 == 0)
            return false;
        return true;
    }(1);


    cout << "\n bChk = " << bChk << endl;
    return 0;

}





