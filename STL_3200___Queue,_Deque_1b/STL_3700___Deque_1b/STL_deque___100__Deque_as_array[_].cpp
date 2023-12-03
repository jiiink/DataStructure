#include <bits/stdc++.h>
using namespace std;
#define allout(MSG,X)   cout<< MSG<<": ";for(auto w:X)cout<<w<<", "

int main() {

    deque <int> dq = { 5, 6, 7, -5, -4, -3, 100 };

    int i = 1;
     for(auto w : dq) {
        cout << "\n "<< ++i << ") " << w ;
    }

    allout("\n 1. dq[ ] 내용 = ", dq ) ;

    dq[3] += 10000 ; // random access가 가능.

    allout("\n 2. dq[ ] 내용 = ", dq ) ;

    dq.resize(3) ;
    allout("\n 3. dq[ ] 내용 = ", dq ) ;

}
