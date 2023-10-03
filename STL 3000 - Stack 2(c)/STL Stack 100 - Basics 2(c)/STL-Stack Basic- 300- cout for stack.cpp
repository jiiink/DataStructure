// stack은 iterator가 없다. container가 아니기 때문이다.
// 기분같으면 stack의 모든 내용을 털어서 출력해보고 싶지만
// 이것은 불가능 하다. 왜냐하면 stack의 push( ), pop( ), top( )만 가능하기
// 때문이다.

#include <vector>
#include <stack>
#include <iostream>
using namespace std;

// vector를 << 연산자로 cout을 할 수 있게 만듬.
// cout << mystack ;

template <typename T>
ostream & operator<<(ostream & os, stack<T> my_stack) {
    //Call by value로 stack을 받아와 copy해서 출력하고 버림.
    cout<< "\n Stack Top : " ;
    while(!my_stack.empty()) { //body
        os << "\n -- " << my_stack.top() ;
        my_stack.pop();
    }
    cout<< "\n Stack Bottom : " ;
    return os; // end of function
}



int main() {

    vector< int > myin { 34, 10, 19, 88, 70, 11, 5, 50} ;
    vector< int > NGE ;
    stack < int > mys ;

    for(auto& s: myin){  // reference로 받아와야만 순서가 계산 됨.
        mys.push(s) ;    // myin 원소를 모두 stack mys에 처 넣자.
        cout << " " << (&s - &myin[0]) ;  // 원소 순서 계산법, range-based for에서
    }

    cout << "\n mys stack: " << mys;        // 오, 대단한 코딩 아닙니까 ?
    cout << "\n mys.top()=" <<  mys.top( );

}
