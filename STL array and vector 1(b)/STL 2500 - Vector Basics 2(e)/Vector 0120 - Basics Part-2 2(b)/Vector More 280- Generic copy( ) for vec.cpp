#include <bits/stdc++.h>
#define allout(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;


int main() {


    vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int> v2 = {-1, -2, -3,-4,-5, -6} ;
    vector<int> v3 (10 ) ;

    copy( v1.begin()+2, v1.end()-2, v2.begin()+1)  ;
    copy( v1.begin()+3, v1.end()-1, v3.begin()+1)  ;

    allout("v1[]= ", v1) ;
    allout("v2[]= ", v2) ;
    allout("v3[]= ", v3) ;

}
