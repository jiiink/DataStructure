// 조건부 컴파일 실습 (원하는 부분만 컴파일 함. )
// 하나의 소스에게 다양한 exe를 만들어 냄.

#include <iostream>
#include <cstdlib>

using namespace std;

void pause(void);  // Function Prototypes
#define DEBUG 1    // 1 for true  (i.e. DEBUG on)
                   // 0 for false (i.e. DEBUG off)

int age ;
int days ;

int main(void) {   // Input

#if DEBUG
    cout << "\n 만 나이를 입력하시오: ";
    cin >> age;
#else
  cout << "\n  서양식 나이를 입격하시오:  ";
  cin >> age;
#endif


#if DEBUG
    cout << "\n 엄마 뱃속에서 부터 살아온 날은 = " << age*365 << "입니다." << endl ;
#else
   cout << "\n 밖에서부터 Code 살아온 날은 = " << age*365 << "입니다." << endl ;
#endif



  return 0;
}



void pause(void) {
  cout << "\n\n";
  system("PAUSE");
  cout << "\n\n";
  return;
}

