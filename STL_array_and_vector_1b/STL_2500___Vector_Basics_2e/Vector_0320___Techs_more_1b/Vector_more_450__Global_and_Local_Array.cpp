
#include <bits/stdc++.h>
#define  MAXG  500000  // 100만은 불가능함.
#define  MAXL  500000
using namespace std;
int g[ MAXG ]  ;

int main () {

    int x[ MAXL ] ;
    int i ;

    for( i=0 ; i < MAXG; i++  ) {
         if ( i % 10000 == 0 )   cout << "* " ;
         g[i] = i ;
    }


  return 0;
}
