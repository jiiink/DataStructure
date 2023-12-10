#include <map>
#include <string>
#include <iostream>
#include <ctime>		//Time Check를 하기위해 필요한 헤더
#include <cmath>		//Math Function들을 사용하기 위한 헤더
#include <stdio.h>
using namespace std;

int main() {

    map< string, map< float, double >  > multi_map ;

    multi_map[ "hello" ][ 23.1 ] =   1.9 ;
    multi_map[ "good"  ][ 23.2 ] =   2.9 ;
    multi_map[ "boy"   ][ 23.3 ] =  3.09 ;
    multi_map[ "world" ][  0.0 ] = -0.89 ;

    cout << "test= " <<  multi_map[ "world" ][  0.0 ] <<  "\n\n 2D Map Test Over" ;


}
