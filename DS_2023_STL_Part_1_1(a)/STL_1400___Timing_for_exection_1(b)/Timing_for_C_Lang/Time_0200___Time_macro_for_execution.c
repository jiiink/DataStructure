#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>


clock_t startm, stopm;

#define BEGIN if ( (startm = clock()) == -1) { printf("clock returned error."); exit(1); }
#define CLOSE if ( (stopm  = clock()) == -1) { printf("clock returned error."); exit(1); }
#define SHOWTIME printf( "%6.3f seconds elapsed.", ((double)stopm-startm)/CLOCKS_PER_SEC);


int main() {

     BEGIN;
     Sleep(1500);  // milli seconds
     CLOSE;

     SHOWTIME;
}
