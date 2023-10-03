// queue::emplace
#include <iostream>       // cin, cout
#include <queue>          // queue
#include <string>         // string, getline(string)
using namespace std ;

void Prt_Q( string msg, queue<int> X ){
    cout << "\n Queue " << msg << ":";
    while( !X.empty()) {
        cout <<   "-- " << X.front()  ;
        X.pop() ;
    }

}

// 두 개의 queue Q1, Q2가 있을 때 Q1 = Q2 작업이 가능

int main () {

   deque<int> myD {11, 12, 13, 14, 15, 16, 17} ;
   queue<int> myQ(myD) ;
   queue<int> Q1, Q2 ;

   Prt_Q(" 1. myQ= ", myQ ) ;
   Prt_Q(" 2. Q1 = ", Q1  ) ;

   Q1 = myQ ;  // myQ의 내용을 Q1으로 복사하는 것.
   myQ.pop() ;
   Prt_Q(" 3. myQ= ", myQ ) ;
   Prt_Q(" 4. Q1 = ", Q1  ) ;

  return 0;
}
