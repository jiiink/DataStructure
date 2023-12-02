#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;

int main(){

     string sa="computer", sb="StarCraft" ;
     list <char> la (sa.begin(), sa.end() ) ;
     list <char> lb (sb.begin(), sb.end() ) ;

     myout("splicing( ) 전 la[]= ", la) ;
	 myout("splicing( ) 전 lb[]= ", lb) ;
	 cout << "\n\nSplicing을 하면 잘라서 붙이는 작업을 한다. 복사가 아니라.\n" ;
	 la.splice( la.end(), lb ) ;
	 myout("splicing( ) 후 la[]=", la) ;
	 myout("splicing( ) 후 lb[]=", lb) ;

	 // lb의 길이와 상관없이 일정한 시간이 걸림.

} // end of main( )

