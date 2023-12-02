/*
STD array는 그 자체로 기본적인 저장공간이 아니고
기본 C-type array, int x[10]과 같은 것을 묶어놓은 aggregate이다.
즉 기본 array를 class로 순서대로 묶어 관리하는 단위인 것이다.

*/

#include <bits/stdc++.h>
using namespace std ;

typedef array<int, 5> ifive ;

int main() {

    int x[5] =  { 9, 8, 7, 6, 5} ;
    ifive my    { { 1, 2, 3, 4, 5 } } ;   //안 {}은 배열 초기화, 밖 {}은 class 표식
    ifive you = { 11, 22, 33, 44, 55 } ; // =를 사용하면 outer { }는 불필요

    cout << "\n my: " ;
    for(auto s : my ) cout << "  " << s  ;

    array < ifive, 3 > dry  { { {1,2,3,4,5}, {3,3,3,3,3}, {7,7,7,7,7} } } ;
    array < ifive, 5 > wet ;

    cout << "\n dry[][]=  " ;
    for(auto s : dry ) {
        cout << "\n" ;
        for (auto t : s ) cout << "  " << t  ;
    }

    wet[0] =   {11,12,13} ;
    wet[1] =   {33,34,35 } ;
    wet[2] =  {-1,-2,-3,-4} ;
    wet[3] =  {100}   ;

    cout << "\n\n wet[][] = " ;
    for(auto s : wet ) {
        cout << "\n" ;
        for (auto t : s ) cout << "  " << t  ;
    }
} // end of main( )
