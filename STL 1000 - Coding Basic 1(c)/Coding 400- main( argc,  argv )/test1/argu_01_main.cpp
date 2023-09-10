// argc, argv를 사용하는 방법
// console에서 매개변수를 전달.
// >a.exe  t.txt  67 89
// argc는 명령어에 제시된 token의 개수
// argv[i]는 i번째 token
// 사용방법 > argu.exe this that good (enter)

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    cout << "\n 자료구조 만만세 \n"  ;
    cout << "\n argc=" << argc << endl ;
    cout << "\n argv[0]=" << argv[0] ;
    cout << "\n argv[1]=" << argv[1] ;
    cout << "\n argv[2]=" << argv[2] ;
    // system("PAUSE");
    return EXIT_SUCCESS;
}
