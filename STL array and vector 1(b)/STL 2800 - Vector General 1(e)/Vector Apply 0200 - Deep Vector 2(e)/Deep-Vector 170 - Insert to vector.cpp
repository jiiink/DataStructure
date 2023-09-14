#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

  vector<string> VEC = { "Pizza", "Soju", "Luna", "Beer++", "Coke", "Coffee" } ;
  vector<string>::iterator IT = find(VEC.begin(), VEC.end(), "Luna");

  allout( "Vec[1]=", VEC ) ;
  VEC.insert(IT, "Star");
  allout( "Vec[2]=", VEC ) ;

  auto IT2 = find(VEC.begin(),VEC.end(),"Foo"); // auto class를 사용하기
  // 이제 이 위치 IT2는 변화 시킬 수 없는 상수가 된다.
  // 이걸 고치면 오류가 난다. 프로그램의 안정성보장.

  VEC.insert(IT2, "Orange");
  allout( "Vec[3]=", VEC ) ;
  return 0 ;

} // END OF MAIN( )

