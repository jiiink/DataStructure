#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

template <typename C>
void print_queue(queue<C> &X){
    const unsigned int sz = X.size();
    cout << "분리수거함[] = " ;
    for (int i=0; i<sz; i++){
        int tmp = X.front();
        cout << tmp;
        cout << " ";
        X.pop();
        X.push(tmp);
    }
    cout << endl;
}


void process(int *p,vector < queue<int> > &X,unsigned int sz){
    X.resize(3);
    for (int i=0;i<sz;i++){
        switch(p[i]%3) {
            case 0: { X[0].push(p[i]); break;}
            case 1: { X[1].push(p[i]); break;}
            case 2: { X[2].push(p[i]); break;}
            default: break;
        }
    }
    for_each(X.begin(),X.end(),print_queue<int>);
}


int main() {
    vector < queue<int> > TrashBox;

    // 물품의 번호, 종류에 따라서 분리수거를 해야 한다.
    int indata[] = {56, 32, 10, 15, 33, 45, 333, 965, 26,\
                     784, 681, 371, 44, 121, 52};

    unsigned int size = sizeof(indata)/sizeof(indata[0]);

    process(indata, TrashBox,size);

    return 0;
}  // end of main()
