/* g++ 컴파일러에서 (C++언어) 아래와 같은 헤더를 인클루드하여
사용할 수 있다. 해당 헤더파일을 확인해 보면(링크),
cstdio, cstdlib, cmath 등 C언어 표준헤더들과
stack, queue, vector 등과 같은 STL관련 헤더들을 포함하고 있는 것을 볼 수 있다.
프로그래밍 대회,  입사 코딩, 면접  test 등에서 이 헤더를 사용하여 코딩시간을 단축할 수 있다.
C언어 표준헤더가 아니므로 Visual Studio에서는 사용할 수 없다. */

#include <bits/stdc++.h>


int main() {

    std::stack<int> s;
    std::queue<int> q;
    std::vector<int> v;

    printf("abc\n");
    printf("%d\n", (int)sqrt(100));


    return 0;
}
