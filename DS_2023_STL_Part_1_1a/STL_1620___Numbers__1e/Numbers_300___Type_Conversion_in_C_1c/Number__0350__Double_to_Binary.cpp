/*
 *
 * Can be compiled to a binaly that displays the binary value of double numbers.
 * Usage  : ./a.out <number1> ... <number n>
 * Example: ./a.out 1.0 2.5

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
    d= 345.678 ;
    cout << "Input: " << d << endl ;
    display(d);
    return 0;
}

void display(double d) {
    union number n;
    n.d = d;
    display(n);
}

void display(union number n) {
    int i;
    uint64_t base = 1;


    cout << " Bits[62:51] " << (n.i & (base << 63)) << " ";

    for (i = 62; i > 51; --i) {
        cout << ((n.i & (base << i)) >> i);
    }

    cout << "\n Bits[50:0] ";

    for (; i >= 0; --i) {
        cout << ((n.i & (base << i)) >> i);
    }

    cout << endl;
}

