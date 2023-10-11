#include <bits/stdc++.h>
#define mout(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto _w : lx ) cout<< " " << _w ;
using namespace std;



int main(){


    list<int> ml(1000000) ;
    char xc ;

    cout << "begin " ;
    int count = 0 ;
    auto it = ml.begin() ;
    while( count < 10000000 ) {
        count++ ;
        *it= count + 3 ; it++ ;
    }
    cout << "end" ;
    return 0;
}
