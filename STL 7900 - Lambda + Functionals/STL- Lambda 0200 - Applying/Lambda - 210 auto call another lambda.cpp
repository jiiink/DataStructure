#include <bits/stdc++.h>
#include <functional>
using namespace std;

int main(int argc, char** argv) {
    array<int, 10> arr = { 3, 2, 1, 4, 9, 10, 7, 8, 4, 6 };
    auto ShowOriginalArray = [=]()     {
        for_each(arr.cbegin(), arr.cend(), [](int i) {      // 람다가 함수 객체라는 증거

            cout << i << ",";

        });
        cout << endl;
    };
    ShowOriginalArray();
    sort(arr.begin(), arr.end(), less<int>());
    auto ShowSortedArray = [=]()  {
        for_each(arr.cbegin(), arr.cend(), [](int n) {       // 람다가 함수 객체라는 증거
                    cout << n << ",";
        });
        cout << endl;
    };
    ShowSortedArray();   // 람다 함수에서 &로 받지 않고 = 값만 받았으므로 함수 내부에서만 계산

    ShowOriginalArray();  // 다음에 적용되지 않음
    return 0;

}

