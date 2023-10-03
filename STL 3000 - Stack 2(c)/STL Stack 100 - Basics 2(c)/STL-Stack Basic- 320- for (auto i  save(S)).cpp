// stack은 iterator가 없다. container가 아니기 때문이다.
// 기분같으면 stack의 모든 내용을 털어서 출력해보고 싶지만
// 이것은 불가능 하다. 왜냐하면 stack의 push( ), pop( ), top( )만 가능하기
// 때문이다.

#include <bits/stdc++.h>
using namespace std;


// returns an iterable copy of the given queue, stack or adaptors
template<class T> std::list<T> Save_to_List(std::stack<T> Mstack ) {
    std::list<T> returnList;
    while (!Mstack.empty()) {
        returnList.push_back( Mstack.top() );
        Mstack.pop();
    }
    return returnList;
}


int main() {

    stack <int> S;

    for (int i = 0;i < 10; ++i) S.push(i);

    cout << "\n 스택 S contains: ";
    for (auto i : Save_to_List(S))
        cout << i << ", ";

    return 0;
}
