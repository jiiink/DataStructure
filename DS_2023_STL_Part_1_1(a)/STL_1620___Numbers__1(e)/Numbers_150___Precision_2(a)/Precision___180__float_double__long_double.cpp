#include <cstdio>  // 반드시 이 library를 사용해야 한다.


int main() {

        long double ldx   = 123456789.0123456789L, one= 1.0;
        double dx ;
        float fx ;

        dx = (double) ldx ;
        fx = (float) ldx ;

        printf("ldx (%%Lf) = %Lf \n", ldx);
        printf("one(%%Lf) = %Lf \n", one);
        printf("dx (%%Lf) = %Lf \n", dx);
        printf("fx (%%Lf) = %Lf \n", fx);
        printf("dx (%%f) = %f \n", dx);
        printf("dx (%%e) = %e \n", dx);
        printf("dx (%%g) = %g \n", dx);
        printf("fx (%%e) = %e \n", fx);

        return 0;
}
