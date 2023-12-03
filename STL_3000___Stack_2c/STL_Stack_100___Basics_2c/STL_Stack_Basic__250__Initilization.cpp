
#include <bits/stdc++.h>
using namespace std ;

template <typename T>
ostream & operator<<(ostream & os, stack<T> my_stack) {
    //Call by value로 stack을 받아와 copy해서 출력하고 버림.
    cout<< "\n Stack : " ;
    while(!my_stack.empty()) { //body
        os << my_stack.top() << " ";
        my_stack.pop();
    }
    return os; // end of function
}


int main (int argc, char const *argv[]) {

   deque<int> Mdays {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} ; // 달 별 eque with 3 elements {100, 100, 100}

   // stack <int> X = { 5, 7, 3, 2, 5, 11} ;

   stack<int> first;                    // empty stack
   stack<int> second ( Mdays );         // stack initialized to copy of deque
   stack<int> third(second);            // stack initialized to copy of another stack

   first.push(337);
   second.pop() ;

   cout << "\n  first stack:  " << first;
   cout << "\n  second stack: " << second ;
   cout << "\n  third stack:  " << third ;

    return 0;
}
