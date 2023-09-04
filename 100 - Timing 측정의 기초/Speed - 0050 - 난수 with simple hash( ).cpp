// hash example
#include <iostream>
#include <functional>
#include <string>
using namespace std ;

// x는 항상 양수가 되어야 한다.
unsigned int simhash(unsigned int x) {
    if( x < 0 ) return(-1) ;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    return x;
}

unsigned int simhash2(unsigned int x, int M) {
    if( x < 0 ) return(-1) ;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    return x%M;
}


int main () {


    for(unsigned int i = 101 ; i<= 110 ; i++) {
        unsigned int x = simhash( i ) ;
        cout << "simhash( " << i << " )= " << x << endl ;
    }

    cout << "\n MOD를 이용한 범위의 hash( ) 값 구하기 \n" ;
    for(unsigned int i = 101 ; i<= 110 ; i++) {
        unsigned int x = simhash2( i, 1000 ) ;
        cout << "simhash2( " << i << " )= " << x << endl ;
    }

  return 0;
}
