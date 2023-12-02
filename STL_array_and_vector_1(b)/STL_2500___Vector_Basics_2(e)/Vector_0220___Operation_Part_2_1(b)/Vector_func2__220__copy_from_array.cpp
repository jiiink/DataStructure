#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

float fd[10] = {1.1 , 1.2 ,1.3,1.4,1.5,1.6,1.7,1.8,1.9,1.0 } ;

int main() {

	vector <float> fvect;
	vector <float> gvect( begin(fd)+2, end(fd)-2 ) ;

	fvect.insert( fvect.begin() , fd, fd + 5 ) ;
	// 여기에            시작은     가져올 배열

	allout( " fvect[]=", fvect ) ;
	allout( " Gvector[] New=", gvect ) ;


} // end of main()
