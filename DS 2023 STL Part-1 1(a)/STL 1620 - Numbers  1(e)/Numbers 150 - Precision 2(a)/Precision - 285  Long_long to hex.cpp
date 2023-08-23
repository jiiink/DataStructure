#include <stdio.h>

// long long 숫자의 범위
// __int64 8 byte -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807
// 2^64 =  1.8446744073709551616`20.*^19,


int main() {
    unsigned long long x = 123456789012345ULL;
    printf(" long long x %%lld = %lld \n", x);
    printf(" long long x %%g = %g \n", x);
    printf(" long long (float) x %%g = %g \n", (float) x);
    printf(" long long x %%llx = %llx \n", x);
    return 0;
}
