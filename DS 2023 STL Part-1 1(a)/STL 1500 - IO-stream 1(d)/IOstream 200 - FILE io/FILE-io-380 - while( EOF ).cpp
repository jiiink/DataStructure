
// 2. scanf()를 EOF와 직접 비교하는 방법

#include <stdio.h>
int main(){

    int a,b;

    while( scanf("%d %d",&a,&b) != EOF) printf("%d\n",a+b);
        // EOF == End Of File
        // 말그대로 파일의 끝에 도달하면 EOF를 리턴한다
        // 윈도우 계열에서 임의로 발생시키기 위해선 Ctrl + Z를 누르면 된다고..
        // 하는데 필자는 온라인 IDE를 써서 테스트 못해봄. 안되덥디다..
    return 0;
}
