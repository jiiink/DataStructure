// hash example
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std ;



unsigned int hash5(unsigned int x) {
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    x = x / 1000 ;
    return x%10000;
}



int main () {


    for(unsigned int i = 1011 ; i<= 1033 ; i++ ) {
        printf("\n hash5( %d )= %d  ", i, hash5(i)  ) ;
    }

     int i = 7403 ;
     printf("\n hash5( %d )= %d  ", i, hash5(i)  ) ;

  return 0;
}
