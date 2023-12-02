#include <bits/stdc++.h>
#include <chrono>
using namespace std ;
/*
volatile로 선언된 변수는 외부적인 요인으로
그 값이 언제든지 바뀔 수 있음을 뜻한다.
따라서 컴파일러는 volatile 선언된 변수에 대해서는
최적화를 수행하지 않는다.
volatile 변수를 참조할 경우 레지스터에 로드된 값을 사용하지 않고
매번 메모리를 참조한다.
왜 volatile이라는 키워드가 필요한지 이해하려면 먼저
일반적인 C/C++ 컴파일러가 어떤 종류의 최적화를 수행하는지 알아야 한다.
가상의 하드웨어를 제어하기 위한 다음 코드를 살펴보자.
*/

volatile int sink;
int main() {

    cout << fixed << setprecision(9) << left;
    for (auto size = 1ull; size <   // record start time

        auto start = chrono::system_clock::now();

                vector<int> v(size, 42);
                sink = accumulate(v.begin(), v.end(), 0u); // make sure it's a side effect
        auto end = chrono::system_clock::now();

        chrono::duration<double> diff = end - start;

        cout << "Fill and iterate a vector of " << setw(9)
             << size << " ints : " << diff.count() << " s\n";
    }
}
