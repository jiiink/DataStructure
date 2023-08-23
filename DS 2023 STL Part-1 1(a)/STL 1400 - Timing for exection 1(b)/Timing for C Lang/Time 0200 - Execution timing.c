#include <stdio.h>
#include <time.h>


void fun() {  // enter key가 입력되면 중지된다.
    printf("fun() starts \n");
    printf("Press enter to stop fun \n");
    while(1) {
        if (getchar())
            break;
    }
    printf("fun() ends \n");
}


int main() {  // Calculate the time taken by fun()

    clock_t mybegin, myend, t;

    mybegin = clock();
         fun();
    myend   = clock() ;

    t= myend - mybegin ;

    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("fun() took %f seconds to execute \n", time_taken);
    return 0;
}
