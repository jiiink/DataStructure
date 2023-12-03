#include <bits/stdc++.h>
using namespace std;

int main() {
    queue <int> q1 ;

    q1.push( 23 ) ;
    q1.push( 34 ) ;
    q1.push( 45 ) ;
    cout << "\n 1. q1.front() = " << q1.front() ;
    cout << "\n 2. q1.back()  = " << q1.back() ;

    q1.push( 56 ) ;

    q1.pop() ;
    q1.pop() ;
    q1.push(999) ;
    q1.push( 134 ) ;
    cout << "\n 3. q1.front() = " << q1.front() ;
    cout << "\n 4. q1.back()  = " << q1.back() ;

    q1.push( 145 ) ;
    q1.push( 156 ) ;

    cout << "\n 5. q1.front() = " << q1.front() ;
    cout << "\n 6. q1.back()  = " << q1.back() ;
}


