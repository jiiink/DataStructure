#include <cstdio>
#include <iostream>     // std::cout
#include <limits>       // std::numeric_limits
using namespace std ;
// long long 정수를 사용해본다.
// __int64 8 byte -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
// 2^64 =  1.844674407370955161620x10^19,


int main() {
    int i ;
    int  num1 = 1000000000;
    long num2 = 1000000000;
    long long num3 = 10000000000000LL;
    long long num4 = ~1;    // 1's complement

    printf("\n size:  %u %u %u", sizeof(num1), sizeof(num2), sizeof(num3));
    printf("\n value: %d %ld %lld %llu", num1, num2, num3, num4);
    cout << "\n numeric_limits<long long>= " << numeric_limits<long long>::digits10 << endl;

    num3 = 1LL ;
    for(i=1 ; i <= 21 ; i++) {
        printf("\n i=%3d, num3 = %lld ", i, num3 ) ;
        num3 *= 9;
    }
    return 0;
}
