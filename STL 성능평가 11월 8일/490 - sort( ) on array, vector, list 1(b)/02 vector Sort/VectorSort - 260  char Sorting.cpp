// vector에서 적용할 수 있는 다양한 동작(operator) 중 sorting을 실험해 봄

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

int main() {

	char   str1[]= "data segment fault?";
	string str2  = "Very Good";

	vector<char>  vc1(&str1[0], &str1[7]);
	vector<char>  vc3(str2.begin(), str2.end() );


    allout("\n sorting 전의 vc1[]= ", vc1 ) ;
    sort( vc1.begin(), vc1.end()) ;  // 반드시 시작과 끝을 지정해줘야 한다.
    allout("\n sorting 후의 vc1[]= ", vc1 ) ;

    allout("\n sorting 전의 vc3[]= ", vc3 ) ;
    sort( vc3.begin(), vc3.end()) ;  // 반드시 시작과 끝을 지정해줘야 한다.
    allout("\n sorting 후의 vc3[]= ", vc3 ) ;


    // 만일 컨테이너가 리스트라면 list.sort( ) 즉 list 멤버 알고리즘을 사용해야 한다.!!!

	return 0;
} // end of main ( )
