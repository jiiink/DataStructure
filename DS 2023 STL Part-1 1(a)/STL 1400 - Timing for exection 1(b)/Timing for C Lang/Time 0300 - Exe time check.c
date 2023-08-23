#include <stdio.h>
#include <time.h>
#define  N 3000

int    m[N][N];
long double d[N][N] ;

void intfun() {
    int i,j ;
    printf(" In fun( ) working") ;

    for(i=0; i < N; i++){
        for(j=0; j< N; j++){
            m[i][j]= i*j + 7867 ;
        }
    }
} // end of fun()

void doufun() {
    int i,j ;
    printf(" In doufun( ) working") ;

    for(i=0; i < N; i++){
        for(j=0; j< N; j++){
            d[i][j]= (double)i*(double)j + 7867.90 ;
        }
    }
} // end of fun()



int main() {  // Calculate the time taken by fun()

    clock_t mybegin, myend, t;
    double time_taken ;
    mybegin = clock();
    intfun();
    myend   = clock() ;

    t= myend - mybegin ;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\n intfun() took %f seconds to execute \n", time_taken);

    mybegin = clock();
    doufun();
    myend   = clock() ;

    t= myend - mybegin ;
    time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("\n doufun() took %f seconds to execute \n", time_taken);
    return 0;
}
