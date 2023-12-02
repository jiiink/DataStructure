#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;


int main() {
 int i, num ;

 vector <int>   intvec { 12, 23, 34, 45, 56, 67, 78, 89, 90, -44 };

 int a =9 , b = 10 ;
 swap(a,b);
 cout << "\n a,b = " << a << ", " << b ;

 allout("1. 처음 intvec[ ] = ", intvec ) ;
 swap( intvec.front(), intvec.back()) ;
 allout("2. swap( )이후 intvec[ ] = ", intvec ) ;
 intvec.back()= 98765 ;
 allout("3. assign 이후 intvec[ ] = ", intvec ) ;

 // 가운데 넣기
 int m ;
 m = (int) ( (intvec.end()-intvec.begin())/2 ) ;
 cout << "\n m = "<< m ;
 *(intvec.end()-m) = 0 ;
  allout("4. assign 이후 intvec[ ] = ", intvec ) ;

} // end of main()

