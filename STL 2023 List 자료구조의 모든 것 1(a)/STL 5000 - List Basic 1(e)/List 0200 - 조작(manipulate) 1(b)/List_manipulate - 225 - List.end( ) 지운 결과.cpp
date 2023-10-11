#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main() {

    list <int>::iterator it1, it2, it3 ;
    list <int> la = { 31, 32, 33, 34, 35, 36, 37, -100 };
    outlist("1. la[]= ", la) ;

    it1 = la.end() ;
    //it1-- ;
    la.erase( it1 ) ;  // 기억하라... remove( ) return 값은 void 이다.
    outlist("2. la[]= ", la) ;

    cout <<"\n *it1= " << *it1 ;


}
