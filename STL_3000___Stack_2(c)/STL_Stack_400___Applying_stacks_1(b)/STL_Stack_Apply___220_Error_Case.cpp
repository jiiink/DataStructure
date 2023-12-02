// 자료구조 실습 No. 3
// STL - try를 이용해서 empty Stack 오류처리
//
#include <iostream>
#include <stack>
#include <list>
#include <deque>
#include <algorithm>    // std::sort
using namespace std;

int main() {
   	cout << endl << "첫번째 실험 " << endl;
	cout << "스택에서 다양한 예외적 경우 다뤄보기" << endl;
	stack<int> mystack;

	// 인위적으로 error  만들어 보기
	//  a. 빈 empty stack에서 pop( ) 해보기
	cout << "The stack size is now " << mystack.size() << endl;
	try {
		if ( mystack.empty()) throw 0;
		mystack.pop();
	}
	catch(int e) {
		cout << "We got - empty Stack." << endl;
	}

	//  b. empty stack에 터질때 까지 뭔가를 채워 넣어보기

	//  c.  TYPE A인 stack에 다른 TYPE을 넣어보기
	cout << endl << "두번째 실험 " << endl;
	cout << "The stack size is now " << mystack.size() << endl;
	    // string otherType = "banana"; // (실험1) - 이 경우에는 compile시 오류발생
	    double otherType = 3.147592;

		mystack.push(otherType);
		cout << "The stack Last Input is " << mystack.top() << endl;
   	    cout << "The stack size is now " << mystack.size() << endl;

	//  d. stack의 중간에 뭔가를 넣어 보기
	//  e. vector에서 사용할 수 있는 find( ), sort( )를 억지로 사용해보기
	//  s.insert();		// Null 원소를 넣으면 오류가 발생함을 확인
	//  s.find();		// Null 원소를 찾으면 오류 발생
	//  sort(s.begin(), s.end());		// Stack에서는 vector와 달리 sorting 불가


	return 0;
}
