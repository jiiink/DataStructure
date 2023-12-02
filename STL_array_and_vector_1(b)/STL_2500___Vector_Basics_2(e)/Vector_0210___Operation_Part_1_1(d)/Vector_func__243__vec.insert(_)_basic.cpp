#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

     cout << "\n 실험 : vector insert( ) \n" ;

     vector<int> myvec { 2, 4, 5, 9, 7, 0, 3, 7, 8 } ;
     allout("1. 초기 myvec[] = ", myvec ) ;

     myvec.insert( myvec.begin(), -12 ) ;
     allout("2. -12 insert 후 = ", myvec ) ;

     myvec.insert( myvec.end(), 89 ) ;
     allout("3. 89 insert 후 = ", myvec ) ;

     myvec.insert( myvec.begin()+3, 888 ) ;
     allout("4. 888 insert 후 = ", myvec ) ;

     myvec.insert( myvec.end()-1, 100 ) ;
     allout("5. 100 insert 후 = ", myvec ) ;

} // end of main( )
