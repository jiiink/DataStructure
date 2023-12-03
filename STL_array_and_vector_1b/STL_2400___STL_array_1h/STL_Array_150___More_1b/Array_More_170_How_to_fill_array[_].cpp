
#include <array>
#include <iostream>
using namespace std ;
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "


int main() {

	array<int, 12> arr1;
	arr1.fill(100);

	arr1[5]=-999 ;

	allout("fill의 처리결과:\n", arr1) ;

	return 0;
}
