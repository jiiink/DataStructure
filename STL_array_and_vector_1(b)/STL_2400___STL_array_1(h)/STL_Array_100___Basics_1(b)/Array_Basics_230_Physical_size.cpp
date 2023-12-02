#include <bits/stdc++.h>
#include <iostream>


// 물리적인 크기를 측정할 때 사용
#define xsize(type) ((char *)(&type+1)-(char*)(&type))
using namespace std;


int main() {
    bool        barray[]    = { true, false, false} ;
    int         iarray[]    = {1,     2,    3,   4,  5,   6};
    long long   llarray[]   = {4,     5,    6 } ;
    float       farray[]    = {1.1, 2.2,  3.3 } ;
    long double ldarray[]   = {0.1, 0.2,  0.3 } ;



    cout << "\n xsize(barray) : " << xsize(barray   )  ;
    cout << "\n xsize(iarray[0]) : " << xsize(iarray[0]) ;
    cout << "\n xsize(iarray : " << xsize(iarray   ) ;
    cout << "\n xsize(llarray  ) : " << xsize(llarray  )  ;
    cout << "\n xsize(ldarray  ) : " << xsize(ldarray  )  ;
    cout << "\n xsize(farray[0]) : " << xsize(farray[0]) ;
    cout << "\n xsize(farray   ): " << xsize(farray   ) ;

return 0;
}


