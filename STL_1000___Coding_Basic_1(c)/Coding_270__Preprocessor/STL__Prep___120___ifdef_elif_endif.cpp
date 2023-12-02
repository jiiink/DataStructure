/*
 build option에서 #define에서 MACRO=xxx 로 설정
*/


#include <iostream>

#define MYDEF    100    /* MYDEF는 값은 100으로 설정 */

#ifdef YOURDEF          /* 만약 YOURDEF가 정의되어 있다면... */
    #define BASE "Zoh"     /* BASE == 10 */
#elif MYDEF             /* 그외에 MYDEF가 정의되었다면... */
    #define BASE "Cho"      /* BASE == 2 */
#endif

#define N 100
using namespace std;


int main() {
    int x[ N ] ;

	cout << "\n BASE = " << BASE << endl ;

	return 0;
}

