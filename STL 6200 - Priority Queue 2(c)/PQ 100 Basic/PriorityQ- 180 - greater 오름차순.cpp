//  우선순위 큐 (Priority Queue). 매우 유용한 자료구조이다. 반드시 익혀두어야 한다.
//  Default는 max heap 이다.

#include <bits/stdc++.h>
using namespace std;


int main() {
  int i, thedata[] = { 145, 234, 112, 88, 56, 27, 571, 150, 62};

  priority_queue<int, vector<int>, greater<int> > X (thedata, thedata+8);


    while ( !X.empty() ) {
        cout << " " << X.top() ;
        X.pop();
    }


} // end of main( )

