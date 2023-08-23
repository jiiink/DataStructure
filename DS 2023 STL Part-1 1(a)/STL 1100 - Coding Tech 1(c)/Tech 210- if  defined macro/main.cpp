#include <iostream>

using namespace std;

int main() {

#ifdef  macro1
printf( "Hello macro1이 있다. !\n" );
#endif
#if ( macro1 > 10 )
#ifndef  macro2
printf( "Hello macro2가 없다. !\n" );
#endif

#ifdef  macro3
printf( "Hello macro3가 있다. !\n" );
#endif


// Another use of the defined operator is in a single #if directive to perform similar macro checks:
#if  defined (macro1)  || !defined (macro2) || defined (macro3)
printf( "Hello 1-2-3 !\n" );
#endif


    cout << "Hello world!" << endl;
    return 0;
}
