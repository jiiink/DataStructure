#include <iostream>
#include <queue>
using namespace std;

struct compare {  // private compare function
    bool operator()(const int& l, const int& r) {
        return l > r ;
    }
};

struct compare2 {  // private compare function
    bool operator()(const int& l, const int& r) {
        return l%10 > r%10 ;
    }
};  // 끝자리 수로 계산
// (56,45)

int main() {
    int ndata[10]={ 66, 34, 12, 54, 70, 92, 4, 82, 54, 8} ;
    priority_queue<int, deque<int>, compare2 > pq (ndata,ndata+9);
    // priority_queue에는 initialzation이 따로 없다.

    pq.push(313); pq.push(25);
    pq.push( 59); pq.push(108);

    cout << "하나씩 뽑아 내어 봅시다.\n" ;
    while ( !pq.empty() ) {
        cout << pq.top() << endl;
        pq.pop();
    }
    //cin.get();
}
