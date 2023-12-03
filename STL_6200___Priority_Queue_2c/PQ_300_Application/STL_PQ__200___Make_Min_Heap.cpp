//  우선순위 큐 (Priority Queue). 매우 유용한 자료구조이다. 반드시 익혀두어야 한다.
//  다른 이름은 Heap(힢)이라고도 한다. 우선순위 힢  Max heap
//  여러분은 여기에서 min-heap이나 max-heap을 지유스럽게 구현할 수 있어야 합니다.

#include <bits/stdc++.h>
using namespace std;


int main() {
  int i, thedata[] = {45, 34, 56, 27, 71, 50, 62, 99, 3, 134, 510, 32 };
  string code[]= {"하나", "둘", "셋", "넷", "다섯", "여섯", "일곱", "여덟", "아홉"} ;

  cout << "우선 순위 큐를 보여줍니다. " << endl;

  priority_queue<int> pq;  // less<int>가 표준인  선언의 축약
  priority_queue<int,      vector<int> , less<int> > maxheap ;
  //             원소   구현방법         비교방법          이름
  priority_queue<string, deque<string> , greater<string> > minstringheap ;
  //             원소     구현방법        비교방법         이름

  cout << "\n The priority_queue PQ size is now " << pq.size() << endl;

  cout << "\n Pushing 4 elements " << endl;
  for (i = 0; i < 8; ++i)  pq.push(thedata[i]);

  for (i = 0; i < 6; ++i)  minstringheap.push(code[i]);
  cout << "\n 몇 개를 채운 후의  priority_queue size is now " << pq.size() << endl;
  cout << "Popping 3 elements from Integer Heap " << endl;
  for (i = 1; i <= 2; ++i) {
    cout << " Minheap에서 뽑아낸 원소는 = " << pq.top() << endl;
    pq.pop();
  }

  cout << "\n Popping 5 elements from String Heap " << endl;
  for (i = 0; i < 5; ++i) {
    cout << " String Minheap에서 뽑아낸 원소는 = " << minstringheap.top() << endl;
    minstringheap.pop();
  }


  cout << "\n The priority_queue size is now " << pq.size()  << endl;
  cout << "\n Popping all elements" << endl;

  while (!pq.empty()) {
    cout << " 끝까지 뽑아내기 " << pq.top() << endl;
    pq.pop();
  } // end of while ( )

  cout << "\n 모두 뽑아낸 뒤의 pq size =  " << pq.size()   << endl;
  return 0;

} // end of main( )

