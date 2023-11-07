// hash example
#include <iostream>
#include <functional>
#include <string>
using namespace std ;


unsigned int simhash(unsigned int x) {
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    return x;
}

uint64_t comhash(uint64_t x) {
    x = (x ^ (x >> 30)) * UINT64_C(0xbf58476d1ce4e5b9);
    x = (x ^ (x >> 27)) * UINT64_C(0x94d049bb133111eb);
    x = x ^ (x >> 31);
    return x;
}


int main () {


    cout << "\n Comhash( ) with more numerals: \n" ;
    for( uint64_t i = 11 ; i<= 32 ; i++) {
        uint64_t y = comhash( i ) ;
        cout << "comhash(" << i << ")= " << y << endl ;
    }


  return 0;
}
