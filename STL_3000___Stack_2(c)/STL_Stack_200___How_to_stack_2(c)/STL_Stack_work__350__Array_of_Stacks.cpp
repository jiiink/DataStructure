#include <bits/stdc++.h>
using namespace std;

void Print_stack( stack<int> X ){
    cout << "\n Print Stack :" ;
    while( !X.empty()) {
        cout << " --> " <<  X.top() ;
        X.pop() ;
    }

}


int main () {

    stack <int> S[5];  // 5개의 stack
    vector<int> num = { 10, 12, 43, 6, 78, 98, 35, 11, 64, 543} ;

    for(auto it = num.begin() ; it != num.end(); it++ ){
        //cout << endl <<  it-num.begin() << "==> " << *it ;
        S[ *it%5].push( *it ) ;
    }
    Print_stack( S[0] ) ;
    Print_stack( S[1] ) ;
    Print_stack( S[2] ) ;
    Print_stack( S[3] ) ;
    Print_stack( S[4] ) ;

 } // end of main() 항상 닫는 괄호에는 이런 표시를 해야 좋습니다.

