// 조건부 컴파일 실습 (원하는 부분만 컴파일 함. )
// 하나의 소스에게 다양한 exe를 만들어 냄.

#include <iostream>


using namespace std;



int main(void) {   // Input
    int i,s ;
    i = 100 ;
    s = 0 ;

    while( --i>0){
        s += i ;

        cout<< "i= " << i << " \n" ;

    }

  cout << "sum = " << s ;
  return 0;
}


