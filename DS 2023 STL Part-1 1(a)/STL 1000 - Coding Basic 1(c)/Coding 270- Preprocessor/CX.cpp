#include <iostream>
using namespace std;

#define TABLE_SIZE 100
    int table1[TABLE_SIZE];
#undef TABLE_SIZE

#define TABLE_SIZE 200
    int table2[TABLE_SIZE];
#include <iostream>

#define str(x) #x   // # 뒤에 나오는 parameter는 문자욜로 취급한다.
#define glue(a,b) a ## b    //   ##는 두 parameter를 붙인다.



#define getmax(a,b) ((a)>(b)?(a):(b))

#ifndef TABLE_SIZE
#define TABLE_SIZE 100
#endif
int table3[TABLE_SIZE];


int main() {

    int x=5, y;


    cout << str(부산 갈매기 부산 갈매기);   // 이것은 cout << "test" 와 동일
    glue(c,out) << "\n\n 글루를 이용한 문자열";


    y= getmax(x,2);
    cout << "\n  " << y << endl;
    cout << "\n  " << getmax(7,x) << endl;

    cout << "\n 라인넘버 :  " << __LINE__;
    cout << "\n 파일 이름 : " << __FILE__ << ".\n";
    cout << "\n 컴파일 시작 일자 :  " << __DATE__;
    cout << "\n 컴파일 시간: " << __TIME__ << ".\n";
    cout << "\n 컴파일러의 값: " << __cplusplus;

    return 0;
}

