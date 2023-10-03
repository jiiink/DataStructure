#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n ";for(auto w:X)cout<<w<<"\n "
using namespace std;

int main() {
    queue <int> myQ ;  // 큐, 스택의 초기화는 불가능하다. 왜 ?

    myQ.push(  63 ) ;
    myQ.push( -54 ) ;
    myQ.push(  90 ) ;
    myQ.push(  72 ) ;

    cout << "1. myQ.front()= " << myQ.front() << endl ;
    cout << "2. myQ.back()= " << myQ.back()  << endl ;

    myQ.pop() ;     myQ.push(  13 ) ;
    cout << "3. myQ.front()= " << myQ.front() << endl ;
    cout << "4. myQ.back()= " << myQ.back()  << endl ;
    cout << "5. myQ.front()= " << myQ.front() << endl ;
    cout << "6. myQ.back()= " << myQ.back()  << endl ;
}
