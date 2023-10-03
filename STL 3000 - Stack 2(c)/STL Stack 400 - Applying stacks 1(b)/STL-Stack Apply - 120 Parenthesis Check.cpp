// STL 스택을 이용한 올바른 괄호 계산
// 먼저 dummy code를 작성하고 이것을 단계적 세밀화(stepwise refinement)를 한다.
// 주어진 괄호 스트링이 올바른 짝의 순서인가를 검사한다.
// 일단 외부에서 받은 기호를 모두 queue에 넣고 이것을 하나씩 꺼내서 처리한다.

#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <list>
#include <deque>
#include <queue>
using namespace std;

stack <char> parenS ;
queue <char> parenQ ;
int result = 0 ;

void input_paren( string data ) {  // 화일에서 모든 괄호 스트링을 읽어서 parenQ에 차례대로 넣는다.
	int size = data.length();

	for (int i=0; i< size; i++)
		cout << data[i];

	cout << endl << "line read complete!!" << endl ;
} // end of input_paren( )

int token( char c ) {
	switch( c ) {
	case '(' : return( 10) ;
	case ')' : return(-10) ;
	case '[' : return( 20) ;
	case ']' : return(-20) ;
	case '{' : return( 30) ;
	case '}' : return(-30) ;
	case '$' : return(100) ;
	default : { cout << "What? Input Error " ; return( 999) ; }
	}
} // end of token( )


void check_paren( ) {  //  queue에서 하나씩 꺼내서 stack에 집어 넣으면 검사를 합니다.
	cout << "하나씩 스택에 넣으면 검사를 합니다." << endl ;
	result = 0 ;
} // end of check_paren( )

void output_paren( ) {
	cout << "정수 result에 있는 숫자를 보고 결과를 보고합니다. " << endl ;
} // end of output_paren( )


int main() {  // 이렇게 main( )은 driver routine으로 구성을 해야 합니다.
	ifstream inputStream( "paren01.txt" );
	string line;

	if (inputStream.good()) {
		while( !inputStream.eof() )    // 파일 끝까지
		{
			getline( inputStream, line );    // 한줄씩 읽어서

			input_paren( line ) ;
			check_paren( ) ;
			output_paren( ) ;
		}
	}
	else {
		cout << "File open failure!!" << endl;
	}


	return 0;
} // end of main( )

