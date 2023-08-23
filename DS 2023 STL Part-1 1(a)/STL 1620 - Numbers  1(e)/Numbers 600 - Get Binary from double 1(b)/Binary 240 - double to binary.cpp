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

int main( ) {
    int i;
    double d;


    d= 3.45678 ;
    printf("\n Input d = %f", d ) ;
    display(d);
    return 0;
}

void display(double d) {
    union number n;
    n.d = d;
    display(n);  // 다시 display(정수)를 호출함. double d를 정수로 둔갑시켜...
}

void display(union number n) {
    int i, bindex ;
    uint64_t base = 1;
    char dtobin[63];

    dtobin[62]= '\0' ;
    bindex = 62 ;    // excess 64 system. 즉 실제 지수에 64를 더함.
    cout << "\n   부호: " << (n.i & (base << 63)) << " ";


    cout<< "\n 지수부: " ;

    for (i = 62; i > 51; --i) {
        cout << ((n.i & (base << i)) >> i);
    }

    cout << " ";

    cout << "\n 실수부: " ;

    for (; i >= 0; --i) {
        cout << ((n.i & (base << i)) >> i);
    }

    cout << endl;
}

