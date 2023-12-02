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


