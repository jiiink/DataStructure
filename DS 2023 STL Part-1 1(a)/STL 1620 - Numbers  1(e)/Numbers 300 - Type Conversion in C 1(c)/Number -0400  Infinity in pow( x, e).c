/* atof example: sine calculator */
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atof */
#include <math.h>       /* sin */

int main () {

    int i, base, N = 50;
    double val ;

    base = 11 ;
    for (i=1; i< N ; i++ ){
        val = pow( base, (double)i ) ;
        printf("\n exp= %d, ==> %lf ", i , pow(base,i)) ;
    }

    printf("\n G format으로 출력해보자. \n") ;
    base = 11 ;
    for (i=1; i< N ; i++ ){
        val = pow( base, (double)i ) ;
        printf("\n exp= %d, ==> %g ", i , pow(base,i*10)) ;
    }


  return 0;

}  // end of main( )
