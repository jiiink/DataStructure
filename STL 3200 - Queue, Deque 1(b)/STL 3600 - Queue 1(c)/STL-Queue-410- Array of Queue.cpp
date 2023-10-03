#include <bits/stdc++.h>
using namespace std;

void Pqueue( string msg, queue<int> X ){
    cout << "\n Queue " << msg << ":";
    while( !X.empty()) {
        cout << " " <<  X.front() << " ,"  ;
        X.pop() ;
    }
} // end of Pqueue( )


int main () {

    queue <int> S[5];  // S[]의 각 원소는 또 다른 Queue, 독립된 큐이다.
    vector<int> num = { 10, 12, 43, 6, 78, 98, 35, 11, 64, 543} ;

    for(auto w : num ){
        S[ w%5].push( w ) ;  // 5로 나눈 나머지에 따라서 배분
    } // end of for

    Pqueue( "S[0]", S[0] ) ;
    Pqueue( "S[1]", S[1] ) ;
    Pqueue( "S[2]", S[2] ) ;
    Pqueue( "S[3]", S[3] ) ;
    Pqueue( "S[4]", S[4] ) ;

 } // end of main() 항상 닫는 괄호에는 이런 표시를 해야 좋습니다.

