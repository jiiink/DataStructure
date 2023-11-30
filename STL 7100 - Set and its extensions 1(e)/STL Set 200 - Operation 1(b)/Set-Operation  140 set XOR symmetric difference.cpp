#include <iostream>     // cout
#include <algorithm>    // set_intersection, sort
#include <vector>       // vector
#include <set>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" : ";for(auto w:X)cout<<w<<", "
using namespace std ;

int main () {

  set<int> s1 { 50,40,30,20,10, 25};
  set<int> s2 { 34, 5,10,15,40, 25};
  set<int> s3  {-99 }, s4 ;                      // 0  0  0  0  0  0  0  0  0  0
  set<int>::iterator it;

  allout("준비 s1{}= ", s1) ;
  allout("준비 s2{}= ", s2) ;
  allout("준비 s3{}= ", s3) ;

  // 뒤에서 들어갈 inserter( )와 그 위치를 넣어야 한다.
  // 공집합으로 구한 원소를 원하는 집합에 "쳐" 넣어야 한다.
  set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                              std::inserter( s3, s3.end()));
  allout("결과 s1 AND s2 = s3{}= ", s3) ;

  set_symmetric_difference (s1.begin(), s1.end(), s2.begin(), s2.end(),
                              std::inserter( s4, s4.end()));
  // 당신이 사라지는 방법, Me XOR Me = {  }
  // 당신과 그대가 모두 살아남는 방법, You XOR Me = { You, Me }

  allout("결과 s1 XOR s2 = ", s4) ;






  return 0;
}
