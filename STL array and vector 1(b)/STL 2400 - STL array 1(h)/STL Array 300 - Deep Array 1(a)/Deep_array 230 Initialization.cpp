#include <bits/stdc++.h>
#include <iostream>
#define  N  10

using namespace std ;

int Ctl[3][2] = { {1,2}, {3,4}, {5,6} } ;
array<int,3>  merong {51,42,33} ;

// array < array<int, 2>, 3> W  { {1,2}, {3,4}, {5,6} } ;

// EXTRA BRACES
array <array <int,3>, 6 > a1 { { {11,12,13}, {21,22,23} } } ;


array< array <int,3>, 2> a2  { // EXPLICIT CASTING
 array<int,3> {51,42,33},
 array<int,3> {41,52,63}
};



int main(){
    cout << "\n Ans1 = " << a1[1][1] ;
    cout << "\n Ans1 = " << a2[0][1] ;
    cout << "\n Ans1 = " << a1[1][1] ;
    cout << "\n Ans1 = " << a1[5] ;
}

