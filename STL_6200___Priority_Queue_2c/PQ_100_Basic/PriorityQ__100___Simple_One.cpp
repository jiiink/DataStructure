//  우선순위 큐 (Priority Queue). 매우 유용한 자료구조이다. 반드시 익혀두어야 한다.
//  Default는 max heap 이다.

#include <bits/stdc++.h>
using namespace std;


int main() {
  int i, thedata[] = { 145, 234, 112, 88, 56, 27, 571, 150, 62};
  int mytop ;

  priority_queue<int> pq1 (thedata, thedata+8);
  // priority_queue<int> pq2 { 145, 234, 112, 88, 556, 327, 571, 150, 62}; //초기화 불가능.

  pq1.push( -34 );
  pq1.push(  10 );
  pq1.push( 210 );

  while( !pq1.empty()){
    mytop = pq1.top() ;
    pq1.pop() ;
    cout << "\n > poped= " << mytop << ", " << pq1.size() ;

  }




} // end of main( )

