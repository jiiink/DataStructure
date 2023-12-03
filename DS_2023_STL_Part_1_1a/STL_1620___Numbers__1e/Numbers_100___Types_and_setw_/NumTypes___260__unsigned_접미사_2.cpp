#include <stdio.h>

int main()
{
    printf("0%lo\n", 017L);             // long 크기의 8진 정수 리터럴
    printf("0%lo\n", 017UL);            // unsigned long 크기의 8진 정수 리터럴
    printf("0x%lX\n", 0x7FFFFFL);       // long 크기의 16진 정수 리터럴
    printf("0x%lX\n", 0xFFFFFFFFUL);    // unsigned long 크기의 16진 정수 리터럴

    return 0;
}
