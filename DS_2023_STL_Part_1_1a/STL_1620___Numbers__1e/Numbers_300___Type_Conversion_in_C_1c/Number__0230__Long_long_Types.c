#include<stdio.h>
int main() {

    int n, exp, exp1;
    unsigned long long int value = 1;
    long double longdou ;

    printf("  x^e 를 위한 두 숫자 x와 e를 입력: ");
    scanf("%d %d",&n, &exp);

    exp1 = exp;   // storing original value for future use

    while( exp-- > 0) {
        value *= n; // multiply n to itself exp times
    }

    longdou = value * (1.0) ;
    printf("\n %d^%d = %lld \n", n, exp1, value);
    printf("\n %d^%d = %g   \n", n, exp1, longdou );
    printf("\n %d^%d = %lf  \n", n, exp1, longdou );
    return 0;
}
