#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stdexcept>
#include <cstdio>
using namespace std;

#define dump(msg,X) cout<<msg;for(auto w:X) cout << w << " "


int main() {
 int i, num ;
 vector   <int>  v1,v2,v3 ;

 v1.push_back(71) ;
 v1.push_back(81) ;
 v1.push_back(91) ;
 v1.push_back(45) ;


 dump("\n v1의 내용을 출력 함 ", v1 ) ;
 dump("\n v2의 내용을 출력 함 ", v2 ) ;

 v2 = v1 ;  // vector 간에 복사가 된다. 그 후 변화를 살펴보자
 v2.push_back(999) ;
 dump("\n 작업 후 v1의 내용을 출력 함: ", v1 ) ;
 dump("\n 작업 후 v2의 내용을 출력 함: ", v2 ) ;
} // END OF MAIN( )

