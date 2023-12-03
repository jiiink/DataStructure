#include <bits/stdc++.h>
using namespace std ;

typedef array<int,4> mytype;

int main() {
    mytype A ;
    array  <int,3>    mya   { {1,2,3} } , X ;  // double-braces required
    vector < mytype > myb = { {9,8,7}, {-2,-3,-4}, {10,20,30}, {-200,89} } ;

    for(auto& s: mya) // 함수형 표현법, C++에서 가능.
        cout << s << ' ';

    cout << "\n---vector < mytype > myb -------\n" ;
    for(auto& s: myb) // 함수형 표현법, C++에서 가능.
        cout << s[0] << ' ' << s[1] << ' ' <<   s[2] << endl ;

    X = mya ;
    cout << "\n---array  <int,3> X -------\n" ;
    for(auto& s: X) // 함수형 표현법, C++에서 가능.
        cout << s << endl ;

} // end of main( )
