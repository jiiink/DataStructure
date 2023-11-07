// 프로그래머가 비교하는 방법을 결정하는 sort algorithm example
// 정수가 아닌 일반적인 객체에 대해서 sorting할 수 있는 고급 기법

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

bool myfunc (int i,int j)   { return ((i%10)<(j%10)) ; }

bool strfunc  (string si, string sj)   { return ( *(si.end()-1)< *(sj.end()-1) ) ; }

struct myclass {
  bool operator() (int i,int j) { return ((i%10) > (j%10))   ; }
} myobject;

int main () {

  vector   <int> myvector {332, 711, 15, 496, 803, 74, 274, 9 };
  vector<string> mystr    {"some" , "day", "pizza", "beer", "bottle", "pusan" };

  // Default 일반적인 비교 (operator <):
  sort (myvector.begin(), myvector.end() );
  allout("\n default sorting = ", myvector ) ;

  // 내가 정의한 boolean 함수대로 비교
  sort (myvector.begin(), myvector.end(), myfunc );
  allout("\nBy myfunc( ) = ", myvector ) ;

  // 내가 선언한 클래스에서 정의한 순서대로 비교
  sort (myvector.begin(), myvector.end(), myobject);
  allout("\n정의한 클래스= ", myvector ) ;

  sort (mystr.begin(), mystr.end(), strfunc );
  allout("\n문자열 내맘대로 정렬= ", mystr ) ;


  return 0;
}
