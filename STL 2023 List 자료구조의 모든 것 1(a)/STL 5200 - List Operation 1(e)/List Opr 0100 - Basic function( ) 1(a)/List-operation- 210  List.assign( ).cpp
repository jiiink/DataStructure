#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

     list <string> ml = {"Jan", "Feb", "March", "April", "May" } ;
     list <string>::iterator it ;

     allout("원본 리스트 : ", ml );
	 ml.assign(3, "Null") ;
	 allout(" ml.assign(3, Null) 후  : ", ml );
} // end of main()





