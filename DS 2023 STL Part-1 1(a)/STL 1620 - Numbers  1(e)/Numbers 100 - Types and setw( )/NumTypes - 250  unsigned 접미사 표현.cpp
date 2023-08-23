#include <stdio.h>

int main() {

    printf("1. %ld\n", -10L);                       // long 크기의 정수 리터럴
    printf("2. %lld\n", -1234567890123456789LL);    // long long 크기의 정수 리터럴

    printf("3. %u\n", 10U);                         // unsigned int 크기의 정수 리터럴
    printf("4. %lu\n", 1234567890UL);               // unsigned long 크기의 정수 리터럴

    printf("5. %lu\n", 10UL);                       // unsigned long 크기의 정수 리터럴
    printf("6. %llu\n", 1234567890123456789ULL);    // unsigned long long 크기의 정수 리터럴

    return 0;
}
