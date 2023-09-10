/*
    Debug Mode와 Release Mode 선택하기
    Build >> Select Target >> { Release, Debug } 선택


    디버거를 이용해 배열에 들어있는 값이 바뀌는 것을 확인합니다.
    1.  breakPoint 만들기
        특별히 원하는 디버깅 지점이 있다면, 왼쪽에 줄 번호 옆(바로 오른쪽) 공백을 마우스로 클릭하면 breakPoint로 지정됩니다(빨간 동그라미).
        지정된 breakPoint를 다시 클릭하면 해제됩니다.

    2.  [Debug]-[Start/Continue]를 누르면(F8) 해당 breakPoint지점까지만 실행할 수 있습니다.
         Shift-F7을 눌러서 Step 별 진행상황을 볼 수 있다.

    3.  변수 확인
        [Debug]-[Debugging Windows]-[Watches]를 클릭하면 디버깅 지점에서의 변수값을 확인할 수 있습니다.

    4.  디버깅 모드 종료
        [Debug]-[stop Debugger]클릭하면 (Shift+F8) 디버깅 모드가 종료됩니다.

    5.  라인단위 디버깅
        소스코드에서 줄 단위로 실행경과를 알고 싶은 경우,
        [Debug]-[Next line]를 클릭하면(F7) 다음 줄까지 실행한 결과를 알 수 있습니다(노란 삼각형).
        (breakPoint를 지정한 후 사용하면, breakPoint 다음 줄 부터 라인 단위 실행결과를 알 수 있습니다)

    #.  [View]-[Toolbars]-[Debugger]로 툴바에 디버거 도구모음을 이용해서 동일 작업을 할 수 있습니다.
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void printArr(int arr[], int arr_size) {
    for(int i=0; i<arr_size; ++i)
        cout << arr[i] << ' ';
    cout << endl;
}

int main() {
    cout << "** CodeBlocks Debugger 실습 **\n";
    int num_arr[5] = {2,10,4,1,8};
    int cur_max_num = -1;
    int cur_max_idx = -1;

    cout << "현재 배열 :" << endl;
    printArr(num_arr,5);

    while(cur_max_num != 0) {
        for(int j=0; j<5; ++j)
            if(num_arr[j]>cur_max_num) {
                cur_max_num = num_arr[j];
                cur_max_idx = j;
            }
        if(num_arr[cur_max_idx]!=0) {
            cout << "가장 큰 원소 "<< cur_max_num <<"를 0으로 바꿉니다." << endl;
            num_arr[cur_max_idx] = 0;
            cur_max_idx = -1;
            cur_max_num = -1;
            printArr(num_arr,5);
        }
    }
    return 0;
}

