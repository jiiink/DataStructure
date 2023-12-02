
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v) {
    for_each(v.begin(), v.end(), [](int i) {     // lambda로 벡터 찍기
        std::cout << i << " ";
    });
    cout << endl;
}

int main() {
    vector<int> v {4, 1, 3, 5, 2, 3, 1, 7};

    printVector(v);

    // 4보다 큰 원소 출력하기
    vector<int>:: iterator p = find_if(v.begin(), v.end(), [](int i) {
        return i > 4;
    });
    cout << "4보다 큰 첫 원소는  : " << *p << endl;


    // 람다로 정렬하기
    sort(v.begin(), v.end(), [](const int& a, const int& b) -> bool {
        return a > b;
    });

    printVector(v);

    // 5보다 큰 원소 개수 헤아리기
    int count_5 = count_if(v.begin(), v.end(), [](int a) {
        return (a >= 5);
    });
    cout << "5보다 큰 원소의 개수는  : "
         << count_5 << endl;

    // 같은 원소 지우기  duplicate comes together)
    p = unique(v.begin(), v.end(), [](int a, int b) {
        return a == b;
    });

    // 서로 다른 원소 개수 크기로 벡터 늘이기
    v.resize(distance(v.begin(), p));
    printVector(v);

    // 숫자 누적하면 곱하기 기
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int f = accumulate(arr, arr + 10, 1, [](int i, int j) {
        return i * j;
    });

    cout << "10 팩토리얼은  : " << f << endl;

    //	 We can also access function by storing this into variable
    auto square = [](int i) {
        return i * i;
    };

    cout << "5의 제곱 수는 : " << square(5) << endl;
}
