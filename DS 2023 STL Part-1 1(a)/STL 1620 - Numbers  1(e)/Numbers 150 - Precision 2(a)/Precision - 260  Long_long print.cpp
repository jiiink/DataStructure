#include <stdio.h>

// long long 숫자의 범위
// __int64 8 byte -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
// 2^64 =  1.8446744073709551616`20.*^19,


int main() {
    int i ;
    int  num1 = 1000000000;
    long num2 = 1000000000;
    long long num3;  num3 = 10000000000000LL;
    long long num4 = ~0;

    printf("\n>> test1 %u %u %u", sizeof(num1), sizeof(num2), sizeof(num3));
    printf("\n>> test2 %d %ld %lld %llu", num1, num2, num3, num4);

    num3 = 1LL ;
    for(i=1 ; i <= 20 ; i++) {
        num3 *= 100;
        printf("\n i=%2d, num3 = %lld, %g ", i, num3, num3 ) ;
    }
    return 0;
}
