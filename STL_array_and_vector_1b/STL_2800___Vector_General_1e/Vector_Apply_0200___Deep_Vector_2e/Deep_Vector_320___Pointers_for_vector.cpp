
#include <bits/stdc++.h>
using namespace std;



int main() {
    int i,j, k ;
    int *intp ;
    int ix[] = { 10, 20, 30, 40, 50, -100 } ;
	vector <int *> pvec ;
	vector <int *>::iterator ipv ;

	i= 9000 ; j=8000 ;
	pvec.push_back( &i ) ;
	pvec.push_back( &j ) ;
	pvec.push_back( ix ) ;

    intp = pvec[0] ;

	cout << "\n Pointer vector 1 : " << *intp ;
	cout << "\n Pointer vector 2 : " << *pvec[2] ;
	cout << "\n Pointer vector 3 : " << *(pvec[2]+3) ;



} // end of main()
