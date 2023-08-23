#include <stdio.h>

// 반드시 C compiler option에서 -std=C99를 설정해야 한다.

int main() {

    double d = 6.232345235;   //8 bytes
    long double ld = 5.5767458458;

    printf("%20.15Lf \n", ld);
    return 0;

}
