// 엣날 방식.  사람잡는 방식... 수제 stack....사람 미치게 함.
// 그러나 우리는 STL stack을 쓰지롱...

#include<bits/stdc++.h>
#define MAX 1000
using namespace std;

class Stack {
  int top;
  public: int a[MAX];    //Maximum size of Stack
    Stack()  {  // 생성자 , 만들면 top = -1
        top = -1;
    }
    bool push(int x);
    int pop();
    bool isEmpty();
};

bool Stack::push(int x) {
    if (top >= (MAX-1)) {
        cout << "Stack Overflow";
        return false;  }
    else {
        a[++top] = x;
        cout<<x <<" pushed into stack\n";
        return true;
    }
} // end of push( )


int Stack::pop() {
    if (top < 0)     {
        cout << "Stack Underflow";
        return 0; }
    else {
        int x = a[top--];
        return x;
    }
}  // end of pop( )

bool Stack::isEmpty() {
    return (top < 0);
}

int main() {
    struct Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<< s.pop() << " Popped from stack\n";

    return 0;
}  // end of main( )
