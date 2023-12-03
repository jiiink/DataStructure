#include <stdio.h>

void fx(int nbr){
    printf("number = %d\n", nbr);
}

void fxx(int nbr){
    printf(" x*x + 1 = %d\n", nbr*nbr+1);
}

void myFunction( void (*f)(int)) {
    for(int i = 0; i < 5; i++) {
        (*f)(i);
    }
}


int main(void) {

    myFunction( fx );
    myFunction( fxx );
    return (0);
}
