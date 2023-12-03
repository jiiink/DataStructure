// Project >> Set Programmer's argument 에서 항목을 지정해야 함.

// argc, argv를 사용하는 방법
// argc는 명령어에 제시된 token의 개수
// argv[i]는 0번째 부터의 parameter

#include <cstdlib>
#include <iostream>

using namespace std;
// 조환규 교수님이 작성함,

int main(int argc, char *argv[]) {

    cout << "\n 자료구조 만만세 \n"  ;
    cout << "\n argc= " << argc << "개 입니다" << endl ;
    cout << "\n argv[0]=" << argv[0] << endl ;
    cout << "\n argv[1]=" << argv[1] << endl;
    cout << "\n argv[2]=" << argv[2] << endl ;
    cout << "\n argv[3]=" << argv[3] << endl;
    cout << "\n argv[4]=" << argv[4] << endl ;
    // system("PAUSE");
    return EXIT_SUCCESS;
}
