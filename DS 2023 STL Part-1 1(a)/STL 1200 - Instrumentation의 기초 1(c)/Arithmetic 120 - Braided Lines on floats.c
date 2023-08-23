#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/* Braided Lines 서로 꼬이는 직선 (Verzopfte Geraden ) */

int main(int argc, char *argv[]) {
  int i=0,j ;
  float x ;
  float delta = 0.001 ;
  float a = 9833.0 , b= 9454.0 , c=9366.0 , d=9005.0 ;
  float y1, y2 ;

  for( x= 0.0 ; x < 3.1 ; x += delta ){

        y1 = a*x / b ;
        y2 = c*x / d ;
        if (y1 == y2 ) printf(" 0") ;
        if (y1 >  y2 ) printf(" +") ;
        if (y1 <  y2 ) printf(" -") ;
        i++ ; if (  i%25 == 0) printf("\n") ;

  }

} // end of main( )
