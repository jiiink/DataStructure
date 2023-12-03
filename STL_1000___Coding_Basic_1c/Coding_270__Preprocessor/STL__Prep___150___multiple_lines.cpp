#include <iostream>
using namespace std;

#define X 30    //macro definition
const int Y = 10; //global integer constant

// 한 줄에 여러개의 macro를 사용할 수 있습니다. 좀 얍삽한 방법이긴 하지만

#define Heading(x) \
    do { \
        cout<<  "\n\n 부산대학교 " ; \
        cout << "\n 정보컴퓨터 공학부 " ; \
        cout << "\n " << (x) << " 번째 숙제를 제출합니다." ; \
    } while(0)

int main() {

	const  int Z = 30; //local ineteger constant
	int t = -9999 ;

    Heading(Z) ;
    Heading(t) ;

	return 0;
}
