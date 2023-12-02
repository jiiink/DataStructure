#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;



int main() {
 int i, num ;
 vector  <int>  *myvec ;

 myvec = new vector<int>{} ;

 myvec->push_back(50) ;
 myvec->push_back(51) ;
 myvec->push_back(52) ;

 allout( "Pointer vector *myvec[]: ", *myvec ) ;

} // END OF MAIN( )

