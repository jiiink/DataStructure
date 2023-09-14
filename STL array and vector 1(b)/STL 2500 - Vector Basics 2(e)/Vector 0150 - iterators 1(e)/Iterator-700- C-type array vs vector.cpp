
#include <bits/stdc++.h>
#define  MAXA  500000  // 100만은 불가능함.
#define  MAXV 1000000
using namespace std;

int main () {
    vector <int> v ;
    int x[ MAXA ] ;
    int i ;

    for( i=0 ; i < MAXA; i++  ) {
         if ( i % 10000 ==  0 )   cout << " +" ;
         x[i] = i ;
    }

    cout << "\n We use vector rather than array \n" ;
    for( i=0 ; i < MAXV; i++  ) {
         if ( i % 10000 == 0 )   cout << "- " ;
         v.push_back(i) ;
    }

    cout <<  "\n v[823456]= " << v[823456] << endl ;
  return 0;
}
