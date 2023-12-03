#include <windows.h>
#include <stdio.h>

int main() {
    int i ;
    printf( " 5초 동안 쉽니다. sleep...\n" );

    for(i=1; i <=5 ; i++){
        Sleep(1000) ;    //  단위는 milli second
        printf("\n %d 초가 지났습니다. ", i);
    }

} // end of main()
