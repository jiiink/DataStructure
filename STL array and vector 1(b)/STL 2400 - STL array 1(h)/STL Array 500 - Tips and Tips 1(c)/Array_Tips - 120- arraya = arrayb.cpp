// array는 같은 type끼리의 대입(assignment) 가능. C-Array 는 불가.

#include <bits/stdc++.h>
#define  pout(MSG,X)     cout<<"\n"<<MSG<< X << "\n" ;
#define  allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
#define  SKIP            cout<<"\n"
using namespace std ;

int main() {

    array <int, 5> xarr, yarr ;         // 반드시 크기가 compile time에 결정되어야 한다.

    xarr = { 0, 1, 2, 3, 4 };    // okay
    yarr = xarr ;

    allout("yarr[]= ", yarr) ;
    allout("xarr[]= ", yarr) ;

    xarr[3]= -99 ;


    cout << "\n 4. yarr[]= "  ;
    for(auto& s: yarr ) cout << s << ' ';



} // end of main( )
