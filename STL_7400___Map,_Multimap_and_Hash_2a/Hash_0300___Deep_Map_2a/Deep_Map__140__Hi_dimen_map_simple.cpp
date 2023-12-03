#include <bits/stdc++.h>
using namespace std;

int main() {
    map< int, map<int, string > > m1;
    map< pair<int, int>, string > m2;

    // 실제로 2차원 map을 활용하는 2가지 방법

    pair< int, int> mpair ;

    m1[1111][3332 ] = "Hello";
    m1[3451][67873] = "Boy ";

    mpair = make_pair(4,1) ;
    m2[ mpair ] = "World";

    mpair = make_pair(432,561) ;
    m2[ mpair]  = "War";

    cout << "m1 value= " << m1[1111][3332] << endl;
    cout << "m2 value= " << m2[ mpair ] << endl;
    return 0;
}
