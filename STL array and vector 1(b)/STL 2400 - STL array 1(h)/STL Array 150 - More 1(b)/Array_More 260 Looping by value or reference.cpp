// 2021년 CodeBlock 20 설치후 다시 test

#include <bits/stdc++.h>
using namespace std ;
#define N 6


int main() {

    int  carray[N] = {  4, 3, 2, 1, 0,  -1 }  ;

    cout << "\n\n   Step 01: 그대로 출력  \n   " ;
    for( auto U : carray){
            cout << U << " , " ;
    }

    cout << "\n\n   Step 02: += 1 작업   \n   " ;
    for( auto U : carray){  // C++ 11, 자동으로 call by value
            cout << U << " , " ;
            U += 1 ;
    }

    cout << "\n\n   Step 03, call by value 이후   \n   " ;
    for( auto U : carray){
            cout << U << " , " ;
    }

    cout << "\n\n   Step 04: += 1 작업  by reference  \n   " ;
    for( auto &U : carray){  // C++ 11, 자동으로 call by value
            cout << U << " , " ;
            U += 1 ;
    }

    cout << "\n\n   Step 05, call by reference 작업 이후  \n   " ;
    for( auto U : carray){
            cout << U << " , " ;
    }



} // end of main( )
