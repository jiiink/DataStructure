
#include <fstream>
#include <iostream>
#include <string>
using namespace std ;


int main() {

  ifstream in("people.txt");
  char buf[100];
  string s ;

  if (!in.is_open()) {  // opne check( )하기
    cout << "파일을 찾을 수 없습니다!" << endl;
    return 0;
  }

  while (in) {
    getline(in, s);
    cout << s << endl;
  }

  return 0;
}
