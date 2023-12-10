// 다양한 나라말을 hashing 하기

#include <iostream>
#include <iomanip>
#include <functional>
#include <string>
#include <vector>
using namespace std ;


int main () {

   // ビル, 비루, 일본어로 맥주를 의미한다. 일본에서는 빌딩도 비루 맥주도 비루
  vector < string > sdata = { "ビル", "good", "껄배이", "will", "be", "부산갈매기" } ;
  vector < int > hchain ;

  hash < string > str_hash; // 결과는 정수 , 입력은 string hash( string) -> Z

  for( auto w : sdata ) {
      auto hashed = str_hash( w ) ;
      hchain.push_back( hashed ) ;
      cout << "\n hash( " << setw(10) << w << " )= " << hashed ;
  } ;

  return 0;

} // end of main()

