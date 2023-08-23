/*
 *
 * Can be compiled to a binaly that displays the binary value of double numbers.
 * Usage  : ./a.out <number1> ... <number n>
 * Example: ./a.out 1.0 2.5


 https://en.wikipedia.org/wiki/Double-precision_floating-point_format

 The exponent field can be interpreted as either an 11-bit signed integer from
 -1024 to 1023 (2's complement) or an 11-bit unsigned integer from 0 to 2047,
 which is the accepted biased form in the IEEE 754 binary64 definition.
 If the unsigned integer format is used, the exponent value used in the arithmetic
 is the exponent shifted by a bias ? for the IEEE 754 binary64 case,
 an exponent value of 1023 represents the actual zero
 (i.e. for 2e ? 1023 to be one, e must be 1023). Exponents range from ?1022 to +1023
 because exponents of ?1023 (all 0s) and +1024 (all 1s) are reserved



 */

#include <cstdlib>
#include <stdint.h>
#include <iostream>

using namespace std;

union number {
    double d;
    uint64_t i;
};

void display(double d);
void display(union number n);

int main(int argc, char** argv) {
    int i;
    double d;

 /*   for (i = 1; i < argc; ++i) {
        sscanf(argv[i], "%lf", &d);
        display(d);
    }
*/
    d= 3.e16 ;
    display(d);
    return 0;
}

void display(double d) {
    union number n;
    n.d = d;
    printf("\n In display  d= %f,  n.d(비트출력)= %d \n", d, n.d ) ;
    display(n);
}

void display(union number n) {
    int i;
    uint64_t base = 1;

    cout << "sign= " <<  (n.i & (base << 63)) << " ";

    for (i = 62; i > 51; --i) {
        cout << ((n.i & (base << i)) >> i);
    }

    cout << " ";

    for (; i >= 0; --i) {
        cout << ((n.i & (base << i)) >> i);
    }

    cout << endl;
}

