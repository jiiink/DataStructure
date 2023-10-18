#include <bits/stdc++.h>
using namespace std ;


int main () {
    array<int,5> a = {10, 20, 30, 40, 50};
    array<int,5> b = {10, 20, 30, 40, 30 };
    array<int,5> c = {50, 40, 30, 20, 10};
    array<int,5> d = { 5, 20, 30, 20,  5};

    cout << "(a>= b) " << (a>=b)  << endl  ;
    cout << "(b!=c) " << (b!=c)   << endl ;
    cout << "(b <c) " << (b <c)   << endl ;
    cout << "(c >b) " << (c >b)  << endl  ;
    cout << "(a<=b) " << (a<=b)   << endl ;
    cout << "(a>=b) " << (a>=b)  << endl  ;
    cout << "(d>=a) " << (a>=d)  << endl  ;

   return 0;
}
