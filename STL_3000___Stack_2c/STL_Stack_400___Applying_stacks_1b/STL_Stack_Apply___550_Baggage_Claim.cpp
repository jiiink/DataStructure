#include <bits/stdc++.h>
using namespace std;

typedef stack<int>  Safe_Box ;  // 가방을 넣는 작은 stack

int main() {
     int baggage[15] = { 12, 9, 23, 8, 4, 21, 17, 5, 14, 8, 10, 24, 25, 5, 8 } ;
     int nos, box_weight, W ;
     Safe_Box *M ;                  // M은 Safe_Box를 지시하는 pointer
     stack < Safe_Box * > Cargo ;   // Safe_BoX Stack의 pointer를 저장하는 상위 stack

     M = new Safe_Box ;
     nos = (sizeof( baggage )/sizeof(*baggage)) ; // array의 원소를 계산하는 법
     box_weight = 0 ;
     for(int i=0 ; i < nos ; i++) {
        W = baggage[i] ;
        printf("\n %2d weight = %2d ", i, W) ;
        box_weight += W ;
        if ( box_weight > 30 ) {
                cout << "이제 박스가 넘쳐 이것은 비행기에 올림="<< box_weight-W << endl ;
                Cargo.push( M ) ;  // 무게가 넘기 때문에 박스를 비행기에 올림.
                i-- ;
                box_weight = 0 ;
                M = new Safe_Box ; // 새 박스를 하나 더 만듭니다.

        } else {
                M->push( W ) ; // 넘치지 않기 때문에 박스를 넣음

        }

     }

     return 0;
}
