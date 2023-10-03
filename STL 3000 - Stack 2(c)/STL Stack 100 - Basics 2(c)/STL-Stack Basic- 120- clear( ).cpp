#include <bits/stdc++.h>
using namespace std;

int main() {
    stack <int> mys;
    stack <int> *pstack ;

    mys.push( 111 );
    mys.push( 222 ) ;
    mys.push( 333 );
    mys.push( 444 ) ;

    cout << mys.top() << endl ;
    mys.pop() ;
    cout << mys.top() << endl ;

    mys = stack<int>();  // 빈 스택으로 교체
    pstack = new stack<int>() ;

    cout << "\nClearing 이후   " << endl ;
    mys.push( -23 );
    mys.push( -45 ) ;

    cout << mys.top() << endl ;
    mys.clear() ;
    cout << mys.top() << endl ;
}
