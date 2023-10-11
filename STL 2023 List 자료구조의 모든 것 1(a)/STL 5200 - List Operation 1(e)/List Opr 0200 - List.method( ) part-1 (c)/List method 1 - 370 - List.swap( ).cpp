#include <bits/stdc++.h>
using namespace std;

// 주의 : swap은 pointer만 바꾸는 것이다.
// memory는 그대로 둔다. 따라서 속도가 무지 빠르겠지요 ?

#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "


int main(){

     list <char> la = { 'w', 'q', 'q', 'r', 'm', 'z', 'a', 'b', 'z' } ;
     list <char> ln = { '1', '2', '7', '8', '9', '0', '4' } ;
	 list <char> ls = { '+', '-', '*', '/', '%', '@' } ;
	 list <char> ldot(10,'.') ;
     list <char>::iterator ita,it1,it2;
     list <int>  LLa = { 114, 115, 116, 117, 119, 120, 130, 140, 150 } ;

     cout << "\n 실험 0: 초기상태 \n" ;
     allout("정수 리스트의 초기화 ", LLa );

     cout << "\n 실험 1: 초기상태 \n" ;
     allout("알파벳",la);allout("숫자",ln); allout("DOT",ldot);

	 cout << "\n 실험 2: swap( )으로 바뀌기 \n" ;
	 la.swap( ln ) ;
     allout("swap( ) 후 : 알파벳",la);allout("swap( ) 후 :숫자",ln);

	 cout << "\n 실험 3: assign()으로 내용 채우기\n" ;
	 la.assign( ln.begin(), ln.end() ) ;
     allout("assign() 후 알파벳",la);allout("assign() 후 숫자",ln);




} // end of main( )

