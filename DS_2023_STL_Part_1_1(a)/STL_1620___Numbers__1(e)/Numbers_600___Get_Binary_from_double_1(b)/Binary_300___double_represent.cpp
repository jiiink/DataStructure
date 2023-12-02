#include <iostream>
#include <bitset>
using namespace std ;

void float_bin(float f) {
    int x = *(int *)&f;
    bitset<sizeof(int) * 8> binary(x);
    cout << binary << endl;
}


main() {
    double x, mant, dtemp ;
    int exp = 0;

    cout << " 분석할 실수(double) x를 입력하시오: ";
    cin >> x ;
    cout << "\n 입력된 x= " << x ;


    mant = x;
    while (mant >= 1) {
        mant /= 2;
        printf("\n mant = %f, exp= %d", mant, exp ) ;
        exp++;
        // At this point x = mant * 2^(exp)
    }

    while (mant < 0.5) {
        mant *= 2;
        exp--;
    }

    cout << "\n 실수 " << x<<" 의 저장 형식: \n" ;
    cout << "\n mant = " << mant ;
    cout << "\n exp = " << exp ;
    cout << "\n double[x] =  2^(" << exp << ")*. \n";

    int bcount = 0 ;
    while (mant > 0) {
        mant *= 2;
        if (mant >= 1) {
            cout << '1';
            mant -= 1;  // 정수 1자리만 덜어 냄.
        } else  cout << '0';

        if( ++ bcount%8 == 0 ) cout << ' ' ;
    }
    cout << endl;
}
