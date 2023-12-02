#include <cstdio>  // 반드시 이 library를 사용해야 한다.
//#include <stdio.h>

    int main() {
        long         ln   = 123456789L;
        long long   lln   = 1234567890123456789LL;
        double      dbf   = 123456789.0123456789;
        long double ldf   = 123456789.0123456789;
        printf("ln(%%d) = %d\n", ln);
        printf("ln(%%ld) = %ld\n", ln);
        printf("lln(%%lld) = %lld\n", lln);
        printf("dbf(%%.9f) = %.9f\n", dbf);
        printf("dbf(%%g) = %g\n", dbf);
        printf("dbf(%%.19f) = %.19f\n", dbf);
        printf("ldn(%%lld) = %lld\n", lln);
        printf("ldx(%%f) = %f\n", double(ldf)) ;

        printf("size of double = %d\n", sizeof(double)); // some compilers print 8
        printf("size of long double = %d\n", sizeof(long double)); //

        return 0;
    }
