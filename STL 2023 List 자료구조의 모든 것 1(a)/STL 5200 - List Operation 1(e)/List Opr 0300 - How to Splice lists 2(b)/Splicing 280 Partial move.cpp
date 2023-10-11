#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;

int main(){

     string sa="computer", sb="12345" ;
     list <char> la (sa.begin(), sa.end() ) ;
     list <char> lb (sb.begin(), sb.end() ) ;

     auto it = la.begin();
     advance(it,2) ;

	 la.splice( it, lb ) ;
	 myout("splicing( ) ÈÄ Experi-1 la", la) ;
	 myout("splicing( ) ÈÄ Experi-1 lc", lb) ;

} // end of main( )

