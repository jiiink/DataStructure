/*
  argc, argv는 외부에서 프로그램에 변수, option을 넣어줄 수 있는 방법이다.

  Option을 넣을 경우에는 Project > Set Program Argument을 채우면 된다.
  사용방법은 외부에서 exe를 수행할 때 Option을 줄 수 있다.
  상대방에게 source를 주지 않고 .. 예

  game.exe -{easy, medium, hard}
  work.exe  -silent      (출력문을 모두 생략 )

*/

#include <stdio.h>
#include <stdlib.h>  // exit()

int main(int argc, char* argv[]) {


  if (argc == 1) { // argc는 명령어 줄에 제시된 token의 수.
    fputs("에러! 옵션을 입력하지 않으셨군요...\n", stderr);
    exit(1);
  }


  // 옵션 개수 출력
  printf("%d 개의 옵션을 입력하셨군요\n\n",  argc-1);


  // 옵션 배열의 요소들을 하나씩 출력
  for (int i = 1; i < argc; i++)
    printf("argv[%d] = %s\n", i, argv[i]);

  return 0;
}
