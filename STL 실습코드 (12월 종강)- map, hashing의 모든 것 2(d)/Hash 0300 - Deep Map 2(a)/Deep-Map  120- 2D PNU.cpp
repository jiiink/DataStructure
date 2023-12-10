#include <bits/stdc++.h>
using namespace std;

int main() {

    map    < int, map< int, string >   > PNU_map ;

    // map < int, int, string > PNU_map ;


    PNU_map[35 ][ 5 ] = "첨단관" ;
    PNU_map[ 3][ 12 ] = "컴공관" ;
    PNU_map[ 5 ][ 12 ] = "중앙도서관" ;
    PNU_map[34][ 67 ] = "대운동장" ;
    PNU_map[ 2 ][ 1 ] = "정문" ;
    PNU_map[ -23][ -29 ] = "부산대역" ;

    int x, y ;
    x= 3 ; y = 12 ;

    cout << "x,y=" <<  PNU_map[ x][ y ] << "\n " ;
    x= -23 ; y = -29 ;

    cout << "x,y=" <<  PNU_map[ x][ y ] << "\n " ;


}
