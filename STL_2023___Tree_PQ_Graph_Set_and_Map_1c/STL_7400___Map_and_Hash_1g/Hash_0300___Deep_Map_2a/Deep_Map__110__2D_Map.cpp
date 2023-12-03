#include <bits/stdc++.h>
using namespace std;

int main() {

    map    < string, map< float, double >   > deep_map ;
    vector < map <string, int>     >   myData1;
    map    < int, map <string, int> >  myData2;

    myData1.resize(100);
    myData1[25]["apple"] = 107;
    myData2[23]["banana"] = 53;

    deep_map[ "hello" ][ 23.1 ] =   1.9 ;
    deep_map[ "good"  ][ 23.2 ] =   2.9 ;
    deep_map[ "boy"   ][ 23.3 ] =  3.09 ;
    deep_map[ "world" ][  0.0 ] = -0.89 ;

    cout << "\n test 01 ---> " <<  deep_map[ "world" ][  0.0 ] ;
    cout << "\n test 02 ---> " <<  myData1[25]["apple"] ;
    cout << "\n test 03 ---> " <<  myData2[23]["banana"] ;



}
