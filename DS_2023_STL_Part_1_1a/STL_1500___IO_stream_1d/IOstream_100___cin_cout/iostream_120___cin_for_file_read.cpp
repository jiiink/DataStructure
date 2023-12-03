// 파일에서의 입출력
#include <fstream>
#include <iostream>
#include <string>
using namespace std ;


int main() {

  string fname, s ;
  int age ;

  fname = "people.txt" ;

  ifstream in( fname );
  if (in.is_open()) cout << "파일을 찾았습니다" ;
  else  cout << "파일을 찾을 수 없습니다!" << endl;


  //while( !in.eof()) {  // 이렇게 하면 위험하다.
  /*   한 가지 주의할 사항으로 while 문 조건으로 절대 in.eof() 를
  사용하면 안된다. 왜냐하면 eof 함수는 파일 위치 지시자가 파일에 끝에
  도달한 이후 에 true 를 리턴하기 때문이다.
  예를 들어서 while 문 안에서 파일을 쭈르륵 읽다가 파일 끝(EOF) 바로
  직전까지 읽었다고 가정하자. 그렇다면 아직 EOF 를 읽지 않았으므로
  in.eof() 는 참인 상태일 것입니다.
  그 상태에서 예컨대 in >> data 를 하게 된다면 data 에는 아무것도
  들어가지 않게 됩니다. 즉 초기화가 되지 않은 상태로 남아있게 된다.  */

  while( in ) {
     in >> s >> age ;
     cout << "\n Token= " << s  << "  age= " << age ;
  }

  return 0;
}
