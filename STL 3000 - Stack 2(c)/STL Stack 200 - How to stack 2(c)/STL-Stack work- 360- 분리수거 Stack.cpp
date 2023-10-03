#include <bits/stdc++.h>
using namespace std;

void Print_stack( stack<int> X ){
    cout << " Stack[] :" ;
    while( !X.empty()) {
        cout << ", " <<  X.top() ;
        X.pop() ;
    } cout << "\n" ;

}


int main () {

    stack <int> S[5];  // 6개의 쓰레기통 stack
    vector<int> trash = { 140, 132, 453, 46, 178, 928, 35, 11, 64, 543, 112, 3, 43, 55, 17, 312} ;

    int tong ;
    for( auto w : trash){
        //cout << "\n > 쓰레기 번호 " << w ;
        tong = w % 5 ;
        S[tong].push( w ) ;
    }

    for(auto n : {0,1,2,3,4 }){
         cout << "통["<<n<<"] : ";   Print_stack( S[ n ]) ;
    }
 } // end of main() 항상 닫는 괄호에는 이런 표시를 해야 좋습니다.

