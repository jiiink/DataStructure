#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

	vector <int> fvect = {3, 4, 5, 6, 7} ;
	vector <int> tvect(10) ;


	allout( "1. fvect[]=", fvect ) ;
	allout( "2. tvect[]=", tvect ) ;

	copy( fvect.begin(), fvect.end(), tvect.begin() ) ;
	// 복사를 받을 공간에 미리 확보되어야 한다. 작으면 오류가 발생.

	allout( "3. fvect[]=", fvect ) ;
	allout( "4. tvect[]=", tvect ) ;

} // end of main()
