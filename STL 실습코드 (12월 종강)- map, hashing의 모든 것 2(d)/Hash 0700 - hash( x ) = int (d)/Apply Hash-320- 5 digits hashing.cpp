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

    string num5, popcode ;
    int ix ;


    for(unsigned int i = 1011 ; i<= 1032 ; i++) {
        std::ostringstream str;  // 매번 새로 만들어야 함.
        unsigned int x = hash5( i ) ;
        ix = x ;
        str << std::setw(4) << std::setfill('0') << ix;  // 4자리 정수로 맞춤.
        num5 = str.str() ;

        popcode = to_string(i) + num5 ;
        printf("\n hash5(%3d)= %s  ==> %s", i, num5.c_str(), popcode.c_str() ) ;
    }


    cout << "\n hash5(1234)=" <<  hash5(1234) ;

    cout << "\n hash5(17797)=" <<  hash5(17797) ;
  return 0;
}
