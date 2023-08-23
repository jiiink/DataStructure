#include <time.h>
#include <stdio.h>

#define SIZE 256

int main (void) {
  char buffer[SIZE];
  time_t curtime;
  struct tm *loctime;


  curtime = time (NULL); // 현재 시간을 얻습니다.
  loctime = localtime (&curtime); // 지역 시간으로 바꿉니다.
  fputs (asctime (loctime), stdout); // 화면에 출력

  /* Print it out in a nice format. */
  strftime (buffer, SIZE, "Today is %A, %B %d.\n", loctime);
  fputs (buffer, stdout);
  strftime (buffer, SIZE, "The time is %I:%M %p.\n", loctime);
  fputs (buffer, stdout);

  return 0;
}

