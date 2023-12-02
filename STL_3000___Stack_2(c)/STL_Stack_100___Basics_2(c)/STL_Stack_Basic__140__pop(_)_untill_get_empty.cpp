#include <bits/stdc++.h>
using namespace std;

int main() {

  vector <string> svec {"쥐", "닭","소","말","개","염소","용","용가리","대가리" } ;
  stack  <string> s, summer ;


  cout << "\n 1. 현재 Stack size( ) = " << s.size() << endl;
  for (auto w : svec ) s.push( w ) ;


   int i = 0 ;
   while (!s.empty()) {
     printf( "\n [%2d] = %s", i++, s.top().c_str() )  ; // ㅊprintf에서 string은 .c_str( )로 변환
     s.pop();
  } // end of while( )


  cout << "\n 2. 현재 Stack size( ) = " << s.size() << endl;
  return 0;
}
