// 우선순위 큐 (Priority Queue). 매우 유용한 자료구조이다. 반드시 익혀두어야 한다.
// 다른 이름은 Heap(힙)이라고도 한다.
// 우선순위 힙  Max heap, 즉 어떤 원소의 subtree에 있는 원소는 root보다 작다.
//
#include <iostream>
#include <queue>           // Defines both queue and priority_queue
#include <string>
using namespace std;

int main() {
  int i, thedata[] = {45, 34, 56, 27, 71, 50, 62};
  string code[]= {"one", "two", "three", "four", "five", "six", "seven" } ;

  cout << "우선 순위 큐를 보여줍니다. " << endl;

  priority_queue<int> pq;  // 표준 선언
  priority_queue<int, vector<int> , greater<int> > maxheap ;
  priority_queue<string, deque<string> , greater<string> > minstrheap ;
  cout << "\n The priority_queue size is now " << pq.size() << endl;

  cout << "\n Pushing 4 elements " << endl;
  for (i = 0; i < 4; ++i)  pq.push(thedata[i]);
  for (i = 0; i < 6; ++i)  minstrheap.push(code[i]);
  cout << "\n The priority_queue size is now " << pq.size() << endl;
  cout << "Popping 3 elements from Integer Heap " << endl;
  for (i = 0; i < 3; ++i) {
    cout << pq.top() << endl;
    pq.pop();
  }

  cout << "Popping 5 elements from String Heap " << endl;
  for (i = 0; i < 5; ++i) {
    cout << minstrheap.top() << endl;
    minstrheap.pop();
  }

  cout << "\n The priority_queue size is now " << pq.size() << endl;
  cout << "Pushing 3 elements " << endl;
  for(i = 4; i < 7; ++i)    pq.push(thedata[i]);

  cout << "\n The priority_queue size is now " << pq.size()  << endl;
  cout << "Popping all elements" << endl;

  while (!pq.empty()) {
    cout << pq.top() << endl;
    pq.pop();
  } // end of while ( )

  cout << "\n The priority_queue size is now " << pq.size()   << endl;

  return 0;

} // end of main( )

