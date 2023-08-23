#include <stdio.h>
#include <conio.h>

int main(){

    printf ("Press any key to continue . . .\n");
    while (1) if (kbhit()) break;

    //code here
    return 0;

}
