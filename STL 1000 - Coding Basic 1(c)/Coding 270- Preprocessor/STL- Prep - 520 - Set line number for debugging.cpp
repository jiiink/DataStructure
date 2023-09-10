#include <stdio.h>
#define DEBUG

int main(void) {

    int count = 100;
    #line 100   "Kill me"  /* <-- 이 줄의 번호가 100이다 */
    #ifdef DEBUG /* <-- 이 줄의 번호가 101이다 */
        printf("line:%d, count = %d\n", __LINE__, count);
    #endif

    count = count * count - 56 ;  // 일부러 에러를 만들어 줄번호를 확인 ; 삭제 후에
    #ifdef DEBUG
        printf("line:%d, count = %d\n", __LINE__, count);
    #endif
    count = count / 2 + 48;
    #ifdef DEBUG
        printf("line:%d, count = %d\n", __LINE__, count);
    #endif
}



