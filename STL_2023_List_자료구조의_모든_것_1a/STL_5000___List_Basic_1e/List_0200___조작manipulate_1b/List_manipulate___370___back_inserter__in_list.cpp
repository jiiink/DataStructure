#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main() {


    list <int> la = { 31, 32, 33, 34, 35, 35, 37, -100 };
    list <int> lb, lc ;


    outlist("1. la<>= ", la) ;
    outlist("1. lb<>= ", lb) ;
    outlist("1. lc<>= ", lc) ;

    // copy( la.begin(), la.end(), back_inserter(lb)) ;
    copy( la.begin(), la.end(), lb.begin() ) ;


    outlist("2. copy  ���� la<>= ", la) ;
    outlist("2. copy  ���� lb<>= ", lb) ;
    outlist("2. copy  ���� lc<>= ", lc) ;

    for(auto w : la ) lc.push_back(w+1) ;
    outlist("3. lc<>= ", lc) ;

}
