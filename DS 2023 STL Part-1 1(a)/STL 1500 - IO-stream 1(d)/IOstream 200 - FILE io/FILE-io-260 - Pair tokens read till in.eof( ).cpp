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


  while( !in.eof()) {
     in >> s >> age ;
     cout << "\n Name= " << s  << " age= " << age*100 ;
  }

  return 0;
}
