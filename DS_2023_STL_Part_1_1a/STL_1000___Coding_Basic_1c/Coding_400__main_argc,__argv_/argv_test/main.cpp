/* arg 전달하는 방법

Project >> Set Programs argument

*/

#include <iostream>
#include <stdio.h>

using namespace std;


int main( int argc, char** argv )  {
    int i = 0;

    cout << "C++의 *.exe에 parameter 패싱하기: " ;

    for( i = 0; i < argc ; i++ )  {
        printf( "\n  argv[ %d ] is -%s \n", i, argv[ i ] );
    }   /*    for( i < argc )    */

} /*    main()    */
