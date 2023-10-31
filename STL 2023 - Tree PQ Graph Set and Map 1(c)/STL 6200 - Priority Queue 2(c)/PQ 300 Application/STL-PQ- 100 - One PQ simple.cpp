//  우선순위 큐 (Priority Queue). 매우 유용한 자료구조이다.

#include <bits/stdc++.h>
using namespace std;


int main() {
  int i, thedata[] = { 45, 31, 6, 27, 71, 30, 62, 99, 3, 134, 90, 32 };
  string code[]= {"하나", "둘", "셋", "넷", "다섯", "여섯", "일곱", "여덟", "아홉"} ;

  priority_queue<int, std::vector<int>, std::greater<int> > MQ(thedata, thedata+12) ;
  priority_queue<int, std::vector<int>, std::less<int> > WQ(thedata, thedata+12) ;


  while (!MQ.empty()) {
    cout << " 끝까지 뽑아내기 " << setw(4) << MQ.top() << endl;
    MQ.pop();
  } // end of while ( )

  cout << "\n 모두 뽑아낸 뒤의 pq size =  " << MQ.size()   << endl;
  return 0;

} // end of main( )

