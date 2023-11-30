#include <bits/stdc++.h>
using namespace std;

class Chulsoo {
public:
    int count;
};

int main() {
    Chulsoo chulsoo;
    chulsoo.count = 1;

    cout << "반환값 ->char : " <<
    [=](int steakWeight) mutable->char  {
        cout << "철수는 " << steakWeight << "g짜리 스테이크를 " << chulsoo.count++ << "번째 먹는다." << endl;
        return steakWeight;
    }(68) << endl;    // char(68) = D

    cout << "반환값 : " <<
    [=](int steakWeight) mutable     {
        cout << "철수는 " << steakWeight << "g짜리 스테이크를 " << chulsoo.count++ << "번째 먹는다." << endl;
        return steakWeight;
    }(67)  << endl;;


    return 0;

} // end of main( )

