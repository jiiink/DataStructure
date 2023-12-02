#include <bits/stdc++.h>
using namespace std;
#include "mytool.h"


// 함수 객체로 구현
struct SumFunctor : public unary_function<int, void> {
    SumFunctor(int& number) : sum(number) {}

    void operator() (int& number) { sum += number;  }

    private:
        int& sum;
};

int main() {
    array <int, 5> numbers = { 1, 2, 3, 4, 5 };
    int sum = 0;


    for_each(numbers.begin(), numbers.end(), SumFunctor(sum));
    cout << "\n 함수로 구현 Sum = " << sum ;
    sum = 0;

    for_each(numbers.begin(), numbers.end(), [&sum](int& number) {
        sum += 10* number;    }
    );
    cout << "\n lambda 함수로 구현 Sum = " << sum ;

    return 0;
}
