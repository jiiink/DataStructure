#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

int main(){

  vector <string>  sulpan = { "소주", "순대", "두부" } ;

  sulpan.push_back( "막걸리" ) ;
  allout("Step 1: ", sulpan ) ;

  //  sulpan.push_front( "막걸리" )  // 이건 안됨, 이거하면 너네들 뒤진다...
                                     // 앞에 넣는 것은 deque에서 가능


  sulpan.push_back( "곱창" ) ;
  allout("Step 2: ", sulpan ) ;
  sulpan.push_back( "수제맥주" ) ;
  allout("Step 3: ", sulpan ) ;
  auto w = sulpan.back() ;
  cout << "\n 끄트머리 원소= " << w ;
  sulpan.pop_back( ) ;
  allout("Step 4: ", sulpan ) ;

}//End of Main
