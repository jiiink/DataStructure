#include <bits/stdc++.h>
using namespace std;

#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<","

int main() {
 int i, num ;
 string mystr ;
 vector <string> v1;
 vector <double> v2( 10, 0.0 );
 vector   <int>  v3(100, 2016);

 mystr = "개돼지" ;
 v1.push_back("Banana") ;
 v1.push_back("Tomato") ;
 v1[0] = "gorilla" ;
 v1.push_back( mystr ) ;

 // 이것은 수행이 안됩니다. 왜 일까요 ?
 // v1[100]= "Dog Pig" ;

 v2[0] = 345.678   ;
 v2[7] = -68.902   ;

 allout("\n v1의 내용을 출력 함 ", v1 ) ;
 allout("\n v2의 내용을 출력 함 ", v2 ) ;

 // 질문: 범위 밖의 원소에 뭔가를 넣을 때 무슨 오류가 생기나요 ?
 // v3[102] = 12345 ;

} // end of main()  )

