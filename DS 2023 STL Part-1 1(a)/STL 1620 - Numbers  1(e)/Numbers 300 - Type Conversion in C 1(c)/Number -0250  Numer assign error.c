
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atof */
#include <math.h>       /* sin */

int main () {

  int         i1, i2, i3 ;
  float       f1, f2     ;
  double      df1, df2   ;
  long long   lli         ;
  long double ld1, ld2     ;
  char        ch1, ch2     ;

  i1 = 1234567890112345 ;
  printf("\n i1 = %d ", i1 ) ;

  lli = 1234567890112345L ;
  printf("\n lli = %lld ", lli ) ;

  f1 = 12345.123456789123456789 ;
  printf("\n float f1 = %f ", f1 ) ;


  df1 = 12345.123456789123456789 ;
  printf("\n double df1 = %lf ", df1 ) ;

  return 0;
}
