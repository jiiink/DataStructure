// Displaying an unsigned int in bits
#include <stdio.h>

void displayBits( unsigned int value );

int main( void ) {
    unsigned int x;

    printf( "%s", "양수를 입력하시오(%u) int: " );
    scanf( "%u", &x );

    displayBits( x );
}


void displayBits( unsigned int value ) {
    unsigned int c; // counter

    // 1을 왼쪽으로 31 bits Shift 하여 bitmask를 만듭니다.
    unsigned int displayMask = 1 << 31;

    printf( "\n 32 bits에 value= %d 를 이진수로 표현: \n\n BITS:  ", value );
    for ( c = 1; c <= 32; ++c ) {
        putchar( value & displayMask ? '1' : '0' );
        value <<= 1; // shift value left by 1

        if ( c % 8 == 0 ) { // 한 byte마다 한 칸씩 보기 좋게 띠움
            putchar( ' ' );
        }
    } // end for

    putchar( '\n' );
} // end function displayBits



