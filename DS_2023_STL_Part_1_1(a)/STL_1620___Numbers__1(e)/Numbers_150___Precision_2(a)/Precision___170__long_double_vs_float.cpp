#include <cstdio>  // 반드시 이 library를 사용해야 한다.


int main() {

        long double ldx   = 123456789.0123456789;
        float fdx ;

        fdx = (float) ldx ;

        printf("\n ------ long double \n");
        printf("dx(%%d) = %d \n", ldx);
        printf("dx(%%ld) = %ld \n", ldx);
        printf("dx(%%g) = %g \n", ldx);
        printf("dx(%%Lf) = %Lf \n", ldx);
        printf("ldx(%%e) = %e \n", ldx);
        printf("ldx(%%g) = %g \n", ldx);

        printf("\n ------ float \n");
        printf("dx(%%d) = %d \n", fdx);
        printf("dx(%%ld) = %ld \n", fdx);
        printf("dx(%%g) = %g \n", fdx);
        printf("dx(%%Lf) = %Lf \n", fdx);
        printf("ldx(%%e) = %e \n", fdx);
        printf("ldx(%%g) = %g \n", fdx);

        printf("size of float = %d\n", sizeof(float));
        printf("size of double = %d\n", sizeof(double)); // some compilers print 8
        printf("size of long double = %d\n", sizeof(long double)); //

        return 0;
    }
