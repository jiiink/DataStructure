#include <iostream>

// Setting >> Compiler >> #define 으로 가서
// DEBUG=1을 추가한다. 추가의 #define은 다음 줄에 추가 함.
// 반드시 MACRO=""을 추가해야 한다. =이 없으면 안됨.
// 만일 compile option에 손을 대면 전체를 rebuild해야 한다.

// 하는 방법은 Project에서 오른클릭을 해서 Clean을 하면
// 관련된 모든 부가 변수를 정리한다.

#include <bits/stdc++.h>
using namespace std;


int main(void) {

    int i, x[12]= {5, 6, -8, 750, 7, 11, -13, 4, 5, 9, 8, -9} ;
    int N  = 12 ;
    int Sum = 0 ;

    for(i=0; i < N ; i++) {
        if ( x[i] > 0 ) {
            Sum += x[i] ;
            #ifdef DEBUG
               printf("\n x[%d]=%d ", i, x[i]) ;
            #endif
        }
    }
    #ifdef ENGLISH
    printf("\n N= %d, \n Total Sum = %d ", N, Sum ) ;
    #else
    printf("\n 전체 갯수는 = %d, \n 총합은  = %d ", N, Sum ) ;
    #endif // KOREAN
}
