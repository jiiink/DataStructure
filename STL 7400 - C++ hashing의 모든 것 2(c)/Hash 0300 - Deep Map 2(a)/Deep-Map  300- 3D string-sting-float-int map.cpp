#include <map>
#include <string>
#include <iostream>
#include <ctime>		//Time Check를 하기위해 필요한 헤더
#include <cmath>		//Math Function들을 사용하기 위한 헤더
#include <stdio.h>
using namespace std;

int main() {

    map< string, map< string, map< int, double > >  > multi_map ;

    multi_map[ "Messi" ][ "Atalntico" ][3] =   11.9 ;
    multi_map[ "Ronaldo" ][ "Madrid" ][7] =   3.2 ;
    multi_map[ "Modrichi" ][ "Zagrebo" ][9] =   9.05 ;
    multi_map[ "James" ][ "NY" ][3] =   1.9 ;
    multi_map[ "James" ][ "NY" ][3] =   1.9 ;
    multi_map[ "James" ][ "NY" ][3] =   1.9 ;

    cout << "test= " <<     multi_map[ "James" ][ "NY" ][3]  ;


}
