// ICPC 점검용 프로그램 - CHO

#include <cstdio>       // stdio.h를 사용하면 안됨.
#include <iostream>     // std::cout
#include <limits>       // std::numeric_limits
using namespace std ;

// s(s-1)(s-2)....(t+1)(t)
long double facta(long double s, long double t) {
    long double sum, muldi  ;
    sum = s ;
    muldi = s ;
    while(1) {
        sum = sum * muldi ;
        muldi = muldi - 1 ;
        if( muldi <= t ) break ;
    }
    return( sum ) ;
}

int main(){
    int i ;
    long double md,  da, db  ;
    md = 1L ;
    printf("\n Begin = %Ld", md) ;
    cout << "long double 정밀도=" << numeric_limits<long double>::digits10 << endl;
    da = facta( 200, 55) ;  // 200(199)(198)....(55)
    db = facta( 202, 58)  ;  // 201 200 (198).......(53)
    printf ("\n da = %Lf", da ) ;
    printf ("\n db = %Lf", db ) ;
    printf ("\n da/db = %Lf", da/db ) ;
    if ( da > db ) printf("\n da > db") ;
    else  printf("\n da < db") ;

}
