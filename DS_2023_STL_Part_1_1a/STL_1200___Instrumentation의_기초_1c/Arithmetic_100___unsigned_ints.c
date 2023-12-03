#include <stdio.h>
#include <stdint.h>    // 크기별로 정수 자료형이 정의된 헤더 파일

int main()
{
    int8_t num1 = -128;                    // 8비트(1바이트) 크기의 부호 있는 정수형 변수 선언
    int16_t num2 = 32767;                  // 16비트(2바이트) 크기의 부호 있는 정수형 변수 선언
    int32_t num3 = 2147483647;             // 32비트(4바이트) 크기의 부호 있는 정수형 변수 선언
    int64_t num4 = 9223372036854775807;    // 64비트(8바이트) 크기의 부호 있는 정수형 변수 선언

    // int8_t, int16_t, int32_t는 %d로 출력하고 int64_t는 %lld로 출력

    printf("\n num1 = %d", num1 ) ;
    printf("\n num2 = %d", num2 ) ;
    printf("\n num3 = %d", num3 ) ;
    printf("\n num4 in lld%% = %lld", num4 ) ;

    uint8_t  num5 = 255;                      // 8비트(1바이트) 크기의 부호 없는 정수형 변수 선언
    uint16_t num6 = 65535;                   // 16비트(2바이트) 크기의 부호 없는 정수형 변수 선언
    uint32_t num7 = 4294967295;              // 32비트(4바이트) 크기의 부호 없는 정수형 변수 선언
    uint64_t num8 = 18446744073709551615;    // 64비트(8바이트) 크기의 부호 없는 정수형 변수 선언

    // uint8_t, uint16_t, uint32_t는 %u로 출력하고 uint64_t는 %llu로 출력

    printf("\n num5 %%u = %u", num5 ) ;
    printf("\n num6 %%u = %u", num6 ) ;
    printf("\n num7 %%u = %u", num7 ) ;
    printf("\n num8 %%llu = %llu", num8 ) ;

    printf("\n\n Unsigned Integers Representation ") ;

    printf("\n -1234 %%u = %u", -1234 ) ;
    printf("\n 1234 %%u = %u", 1234 ) ;
    printf("\n -5 %%u = %u", -5 ) ;

    return 0;
}
