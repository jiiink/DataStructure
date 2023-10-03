#include <bits/stdc++.h>
using namespace std;

int main() {
    queue <int> q1;

    q1.push( 111 );
    q1.push( 222 ) ;
    q1.push( 333 );
    q1.push( 444 ) ;

    cout << q1.front() << endl ;
    cout << q1.back() << endl ;

    q1 = queue<int>();

    cout << "\n Clearing ÇØº¸±â " << endl ;
    q1.push( -23 );
    q1.push( -45 ) ;

    cout << q1.front() << endl ;
    cout << q1.back() << endl ;
}
