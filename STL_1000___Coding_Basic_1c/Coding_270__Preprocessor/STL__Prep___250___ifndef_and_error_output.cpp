#include <iostream>

//#define  __LARGE__ 360
using namespace std;


int main() {

	int   i=99, j=100 ;
	float   f[10] ;
	const  int Z = 30;       //local ineteger constant`

#ifndef __LARGE__
    #error This program must be compiled in LARGE memory model!
    i = -99 ;
    j = -999 ;
#endif

	cout << "\n i=" << i << "  j= " << j << endl ;

	return 0;
}
