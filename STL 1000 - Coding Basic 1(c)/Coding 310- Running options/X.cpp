/*

1. CcodeBlock의 경우
    Compiler >> Setting >> #define에 가서 다음 항목을 추가한다.
    CHO=1234
    이것은 #define CHO 1234와 동일한다. 이것은 preprocessor에서 처리한다.

2. Console에서 처리할 경우 -D option을 사용한다.

>> g++ -D CHO x.cpp  // define 상수를 추가하는 방법.


*/
#include <iostream>
using namespace std;

#define X 30    //macro definition
int Y = 10; //global integer constantt

#ifdef CHO
  float W = 100.0 ;
#else
  float W = -100.0 ;
#endif // CHO

int main() {

	const  int Z = 30; //local ineteger constant`

	cout<<"Value of X:  "<< X <<endl;
	cout<<"Value of Y:  "<< Y <<endl;
	cout<<"Value of Z:  "<< Z <<endl;
	cout<<"Value of W:  "<< W <<endl;

	return 0;
}
