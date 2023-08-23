#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define N 10000000

int main(int argc, char *argv[]) {
  int i,j ;
  double x , gap = 1.0 / N ;
  double d1, d2, dx, delta ;
  delta = gap  ;
  double start=0.0, end= 0.001 ;
  double a = 98333345.342 , b= 94546788.123 , c= 98333347.001 , d=94546789.657 ;

  printf("\n\n--------- Double을 이용한 Verzopfte 문제  -------------\n") ;

  i=0 ;
  for( x= start ; x < end ; x += delta ){
        d1 = a*x / b ;
        d2 = c*x / d ;
        //printf("\n %15.10f >> %15.10f , %15.10f", x, d1, d2 ) ;
        if (d1 == d2 ) printf(" 0") ;
        if (d1 >  d2 ) printf(" +") ;
        if (d1 <  d2 ) printf(" -") ;
        i++ ; if (  i%25 == 0) printf("\n") ;

  }


}
