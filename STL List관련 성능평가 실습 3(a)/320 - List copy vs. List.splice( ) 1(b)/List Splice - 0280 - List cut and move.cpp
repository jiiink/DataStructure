#include <bits/stdc++.h>
#define myout(msg,x)  cout<<"\n"<< msg << ":"; for(auto s : x)cout<<" "<<s;
using namespace std;

int main(){

     string sa="computerBOOK", sb="123456789" ;
     list <char> la (sa.begin(), sa.end() ) ;
     list <char> lb (sb.begin(), sb.end() ) ;

     auto it = la.begin();
     auto is = lb.end() ;

	myout("Before splicing( ) la[]= ", la) ;
	myout("Before splicing( ) lb[]= ", lb) ;

    advance(it, 3) ;
    advance(is,-3) ;

     cout << "\n *it=" << *it   ;
     cout << "\n *is=" << *is   ;

	la.splice(  it, lb, is, lb.end() ) ;

	myout("After splicing( ) la[]= ", la) ;
	myout("After splicing( ) lb[]= ", lb) ;

} // end of main( )

