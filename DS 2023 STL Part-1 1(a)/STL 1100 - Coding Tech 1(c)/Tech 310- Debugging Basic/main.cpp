/*  Debug을 사용하려면 Debug directory가 있어야 하므로
    반드시 project로 관리해야 한다.

    먼저 Debug Mode와 Release Mode 선택하기
    Build >> Select Target >> { Release, Debug } 선택

    디버거를 이용해 배열에 들어있는 값이 바뀌는 것을 확인합니다.
    1.  breakPoint 만들기
        특별히 원하는 디버깅 지점이 있다면, 왼쪽에 줄 번호 옆(바로 오른쪽) 공백을
        마우스로 클릭하면 breakPoint로 지정됩니다(빨간 동그라미).
        지정된 breakPoint를 다시 클릭하면 해제됩니다.

    2.  [Debug]-[Start/Continue]를 누르면(F8) 해당 breakPoint지점까지만 실행할 수 있습니다.

    3.  변수 확인
        [Debug]-[Debugging Windows]-[Watches]를 클릭하면 디버깅 지점에서의 변수값을 확인할 수 있습니다.

    4.  디버깅 모드 종료
        [Debug]-[stop Debugger]클릭하면 (Shift+F8) 디버깅 모드가 종료됩니다.
    5.  라인단위 디버깅
        소스코드에서 줄 단위로 실행경과를 알고 싶은 경우,
        [Debug]-[Next line]를 클릭하면(F7) 다음 줄까지 실행한 결과를 알 수 있습니다(노란 삼각형).
        (breakPoint를 지정한 후 사용하면, breakPoint 다음 줄 부터 라인 단위 실행결과를 알 수 있습니다)
    6.  Step-Into, 한 줄이 아니라 한 줄안에서 다음 단계로도 갈 수 있다.
        명령어는 SHIFT-F7 이다.
    7.  [View]-[Toolbars]-[Debugger]로 툴바에 디버거 도구모음을 이용해서 동일 작업을 할 수 있습니다.

    8.  종료하려면 반드시 빨간색 삼각형 Bebug/Continue를 선택해서 꺼야 한다.

*/

#include <stdio.h>
#include <iostream>
using namespace std ;


int main() {
    int i,bit,n ;
    int memory[15] ;

    n= 1000 ; bit=0 ;

    while( n > 1 ){
        memory[ bit++ ] = n ;
        n = n / 2 ;
        cout << ">> n = "<< n  << endl ;
    }

    return 0 ;
}
