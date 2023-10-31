// map을 CodeBlock에서 사용하려면 반드시 Comipler에서 C+11 을 check해야 합니다.
// Have g++ follow the C++11 ISO C++ language standard
#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {

    map     < string, map< float, double >  >   twoD_map   ;
    vector  < map <string, int> >               vec_map     ;
    map     < int, map<string, int> >           map_map  ;
    pair    < int, map<string, int> >               Z ;
    map     <string, int>                           T ;

    vec_map.resize(100);
    vec_map[25]["hello"] = 7;

    map_map[45]["Banana"] = 931;
    map_map[10]["Apple" ] =  60;
    map_map[10]["Pear"  ] =  62;
    map_map[10]["Orange"] =  63;
    map_map[33]["Italia"] =  47;


    twoD_map[ "hello" ][ 23.1 ] =   1.9 ;
    twoD_map[ "good"  ][ 23.2 ] =   2.9 ;
    twoD_map[ "boy"   ][ 23.3 ] =  3.09 ;
    twoD_map[ "world" ][  0.0 ] = -0.89 ;

    cout << "test= " <<  twoD_map[ "world" ][  0.0 ] << endl ;
    cout << map_map[33]["Italia"]  ;

    auto it = map_map.begin() ;
    Z = *it ;
    cout << "\n Z.first= " << Z.first << endl  ;
    T = Z.second ;  // 또 하나의 map을 받는다. 이것을 몽땅 출력해보자.

    cout << "\n\n mapmap의 구성성분 T의 모든 원소를 출력합시다.\n " ;
    for(auto iit = T.begin() ; iit != T.end(); iit++) {
        cout<< "\n Map."  << (*iit).first << " = " << (*iit).second ;
    }

} // end of main( )
