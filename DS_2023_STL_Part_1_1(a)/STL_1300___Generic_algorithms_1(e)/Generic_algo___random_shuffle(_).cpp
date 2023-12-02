#include <bits/stdc++.h>
#define  allout(MSG,X)   std::cout<<" "<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;


int main () {

  vector<int> my {5, 6, 4, -2, 12, 7, 8 , 10, 14, 32, -4, 0};

  allout("\n > 초기 결과 = ", my ) ;
  random_shuffle( my.begin(), my.end()) ;
  allout("\n > shuffle 결과 = ", my ) ;
  random_shuffle( my.begin(), my.end()) ;
  allout("\n > shuffle 결과 = ", my ) ;
  random_shuffle( my.begin(), my.end()) ;
  allout("\n > shuffle 결과 = ", my ) ;
  random_shuffle( my.begin(), my.end()) ;
  allout("\n > shuffle 결과 = ", my ) ;
  return 0;
}
