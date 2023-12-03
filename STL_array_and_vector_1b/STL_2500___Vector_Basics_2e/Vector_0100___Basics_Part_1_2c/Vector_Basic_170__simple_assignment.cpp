#include <bits/stdc++.h>
#define allout(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< w << ", " ;
using namespace std;


int main() {

    vector<int> v1, v2, v3  = { 66, 77, 88, 99, 100 };

    allout("1. v1[]= ", v1) ;
    allout("1. v2[]= ", v2) ;
    allout("1. v3[]= ", v3) ;

    v2 = { 0, -1, -2, -3 } ;
    v3 = v2 ;

    allout("2. v1[]= ", v1) ;
    allout("2. v2[]= ", v2) ;
    allout("2. v3[]= ", v3) ;

}
