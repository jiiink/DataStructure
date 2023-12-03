#include <bits/stdc++.h>
#define  allout(MSG,X)   std::cout<<" "<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
#include <random>
using namespace std ;


int main () {

  vector<int> my {5, 6, 4, -2, 12, 7, 8 , 10, 14, 32, -4, 0};
  auto rng = default_random_engine {};

  allout("\n > 초기 결과 = ", my ) ;
  shuffle( begin( my ), end( my  ), rng);
  allout("\n > shuffle( ) => ", my ) ;
  shuffle( begin( my ), end( my  ), rng);
  allout("\n > shuffle( ) => ", my ) ;
  shuffle( begin( my ), end( my  ), rng);
  allout("\n > shuffle( ) => ", my ) ;

  return 0;

}
