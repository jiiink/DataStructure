// queue::emplace
#include <iostream>       // cin, cout
#include <queue>          // queue
#include <string>         // string, getline(string)
using namespace std ;


int main () {
    queue<string> myqueue;

    myqueue.emplace ("바나나");
    myqueue.emplace ("토마토");
    myqueue.emplace ("자몽");
    myqueue.emplace ("파인애플");

    cout << "myqueue[ ] = 내용물 :\n";
    while (!myqueue.empty()) {
        cout << "\n front()= " << myqueue.front() ;
        myqueue.pop();
        cout << " 그때의 Q size= " << myqueue.size() << '\n' ;
    }

    return 0;
}
