#include <fstream>
#include <iostream>
#include <string>
using namespace std ;

int main() {

  ifstream in("people.txt");
  string s;

  if (in.is_open()) {
    in.seekg(0, ios::end);   // 위치 지정자를 파일 끝으로 옮긴다.

    // 그리고 그 위치를 읽는다. (파일의 크기)
    int size = in.tellg();
    cout << "\n size = in.tellg() = " << size << endl ;

    s.resize(size);   // 그 크기의 문자열을 할당한다.
    in.seekg(0, ios::beg);  // 위치 지정자를 다시 파일 맨 앞으로 옮긴다.
    in.read(&s[0], size); // 파일 전체 내용을 읽어서 문자열에 저장한다.
    cout << s << endl;
 }
 else {
        cout << "파일을 찾을 수 없습니다!" << endl;
 }

  return 0;
}
