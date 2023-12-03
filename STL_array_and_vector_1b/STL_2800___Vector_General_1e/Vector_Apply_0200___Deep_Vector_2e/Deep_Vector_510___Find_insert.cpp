
/*
예제) std::string를 요소로 가지는 std::vector에서
"Luna" 라는 값을 찾아서 바로 앞에 "Star"라는 값을 삽입합니다.
만약 "Luna"가 없다면 맨 끝에 삽입이 될 것입니다.
*/

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

  vector<string> VEC = { "Pizza", "Soju", "Luna", "Beer++", "Coke", "Coffee" } ;
  vector<string>::iterator IT = find(VEC.begin(), VEC.end(), "Luna");

  allout( "Vec[1]=", VEC ) ;
  VEC.insert(IT, "Star");
  allout( "Vec[2]=", VEC ) ;

  auto IT2 = std::find(VEC.begin(),VEC.end(),"Foo");
  VEC.insert(IT2, "Orange");
  allout( "Vec[3]=", VEC ) ;
  return 0 ;

} // END OF MAIN( )

