#include <iostream>
#include <array>
using namespace std;


int main(int argc, char** argv) {
    array <int, 10> arr = {11, 22, 33, 44, 55}; // 나머지는 0으로 채워진다.

    int* p2 = arr.data(); // ok
    const int* p3 = arr.data(); // ok

    p2 = p2 + 3 ;
    cout << *(p2) << endl ;
    cout << "Array Size of arr=" << arr.size() << endl ;
    return 0;
}
