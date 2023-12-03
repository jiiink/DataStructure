/*
#include<inttypes.h> 를 활용해보자

만약 int64_t 를 정수로 출력해야된다면
printf("%" PRId64 , val)

만약 int64_t 를 16진수로 출력해야된다면
printf("%" PRIx64 , val)

만약 void * 즉 포인터(주소) 값을 정수 출력해야된다면
printf("%" PRIdPTR , val )

만약 void * 즉 포인터(주소) 값을 16진수 출력해야된다면
printf("%" PRIxPTR, val )                              */

#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>

int main(void) {

    double f = INFINITY;
    uint64_t fn;           // 64 bits 특수 정수

    memcpy(&fn, &f, sizeof(f)) ;

    printf("\n 무한대 - INFINITY:   %f %" PRIx64 , f, fn);
}

