#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/* Braided Lines 서로 꼬이는 직선 (Verzopfte Geraden ) */

int main(int argc, char *argv[]) {
  int i=0,j ;
  double x ;
  double delta = 0.001 ;
  double a = 134569833.000005 , b= 134569454.001 , c=134569833.0 , d=134569454.0 ;
  double y1, y2 ;

  for( x= 0.0 ; x < 3.1 ; x += delta ){

        y1 = a*x / b ;
        y2 = c*x / d ;
        if (y1 == y2 ) printf(" 0") ;
        if (y1 >  y2 ) printf(" +") ;
        if (y1 <  y2 ) printf(" -") ;
        i++ ; if (  i%25 == 0) printf("\n") ;

  }

} // end of main( )
