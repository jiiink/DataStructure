#include <stdio.h>

int main() {


    for (auto isize = 1ull; isize < 1000'000'000ull; isize *= 100) {
        printf("1. %ld\n", isize );                       // long 크기의 정수 리터럴
        printf("2. %lld\n",isize);               // long long 크기의 정수 리터럴

        printf("\n3. %u\n", isize);                         // unsigned int 크기의 정수 리터럴
        printf("4. %lu\n", isize);               // unsigned long 크기의 정수 리터럴

        printf("\n5. %lu\n", isize);                       // unsigned long 크기의 정수 리터럴
        printf("6. %llu\n",isize);
    }
    return 0;
}
