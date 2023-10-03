#include <iostream>
using namespace std;

template <typename C>
void print_queue(queue<C> &X){
    const unsigned int sz = X.size();
    cout << "Queue[] = " ;
    for (int i=0;i<sz;i++){
        int tmp = X.front();
        cout << tmp;
        cout << " ";
        X.pop();
        X.push(tmp);
    }
    cout << endl;
}
