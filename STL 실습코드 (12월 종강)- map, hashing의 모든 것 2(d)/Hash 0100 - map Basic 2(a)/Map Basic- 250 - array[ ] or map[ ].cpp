#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"


int main () {
    int x[10] = { 1, 2, 3, 4, 5, 6, 7, 9, 10 } ;
    map <int, int> m = { {3, 9}, {5, 25}, {8, 64}, {-1,1}, {10,100}, {-5, 25} } ;
    map <float, int> mf = { {3.1, 9}, {5.2, 25}, {8.4, 64}, {-5.345, 25} } ;


    printf("\n In x[5]= %d", x[5] ) ; // it works
    printf("\n In x[15]= %d", x[15] ) ; // it works
    printf("\n In m[-5]= %d", m[-5] ) ; // it works
    printf("\n In m[8]= %d", m[8] ) ; // it works
    printf("\n In m[100]= %d", m[100] ) ; // it works
    printf("\n In m[100]= %d", mf[-5.345] ) ; // it works

  return 0;
}
