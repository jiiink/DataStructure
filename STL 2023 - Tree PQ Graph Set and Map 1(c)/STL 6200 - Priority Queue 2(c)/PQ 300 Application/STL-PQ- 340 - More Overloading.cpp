#include<cstdio>
#include<iostream>
#include<queue>
using namespace std;

class compare {
  public:
    bool operator()(const int &a, const int &b) {
        return a>b;
    }
};



int main() {
    priority_queue<int, vector<int>, compare > pq;

    int i,n;
    for(i=1; i<=12; i++) {
        pq.push( ((i+1234)*(i+7)*(i+123))%111 ) ;
    }

    while(!pq.empty()) {
        cout<< pq.top()<<endl;
        pq.pop();
    }
    return 0;
}
