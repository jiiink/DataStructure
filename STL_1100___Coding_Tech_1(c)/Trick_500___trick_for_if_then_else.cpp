#include <csetjmp>
#include <csignal>
#include <cstdlib>
#include <iostream>

int main() {

    int a=3, b=4, c=5 ;

    // If c < 0 then a = 1
    // If c > 0 then b = 1


    (c < 0 ? a : b) = 1;
    printf("\n a, b, c = %d , %d , %d", a,b,c) ;


}
