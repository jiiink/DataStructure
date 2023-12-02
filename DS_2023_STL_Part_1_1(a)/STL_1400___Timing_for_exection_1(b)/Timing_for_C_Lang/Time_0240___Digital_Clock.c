#include <stdio.h>
#include <time.h>


int main() {
    time_t s, val = 1;
    struct tm* current_time;


    s = time(NULL);   // time in seconds


    current_time = localtime(&s);      // to get current time

    // print time in minutes, hours and seconds
    printf("  Time>>  %02d : %02d : %02d",
           current_time->tm_hour,
           current_time->tm_min,
           current_time->tm_sec);

    return 0;
}
