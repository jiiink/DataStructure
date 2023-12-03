#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std ;


string num_to_bin(int bits, long long int x) {
    string w;

    while( bits-- ){
        if ( x % 2  ) w += "1" ;
        else   w += "0" ;
        x >>= 1 ;
        if(bits % 8 == 0) w += " " ;
    }
    reverse( w.begin(), w.end()) ;
    return w ;
}

int main() {
    long long x;

    x= 5685476363454 ;
    cout << "\n Input = " << x;
    cout << "\n Number to binary:\n " <<  num_to_bin(64, x)  ;
    return 0;
}
