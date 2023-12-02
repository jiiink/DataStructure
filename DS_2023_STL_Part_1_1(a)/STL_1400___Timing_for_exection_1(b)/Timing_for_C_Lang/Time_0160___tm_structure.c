#include <time.h>
#include <stdio.h>

#define SIZE 256
struct mytm {
   int tm_sec;         /* seconds,  range 0 to 59          */
   int tm_min;         /* minutes, range 0 to 59           */
   int tm_hour;        /* hours, range 0 to 23             */
   int tm_mday;        /* day of the month, range 1 to 31  */
   int tm_mon;         /* month, range 0 to 11             */
   int tm_year;        /* The number of years since 1900   */
   int tm_wday;        /* day of the week, range 0 to 6    */
   int tm_yday;        /* day in the year, range 0 to 365  */
   int tm_isdst;       /* daylight saving time             */
};


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

