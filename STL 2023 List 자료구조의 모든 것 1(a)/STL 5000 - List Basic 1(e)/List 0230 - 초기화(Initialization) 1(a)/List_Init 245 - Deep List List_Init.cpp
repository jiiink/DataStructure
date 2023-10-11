#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

typedef list<int> iLIST ;

int main() {

	list< iLIST > mylist  = {  { 2, 8,} , {7}, {}, {5, 3, 1} , {4}, {0, 3, 4, 5, 8,12} } ;

	for(auto wlist : mylist ) {
        cout << "\n" ;
             for(auto s : wlist ){
                   cout << " " << s ;
             }
     }

	return 0;
} // end of main( )

