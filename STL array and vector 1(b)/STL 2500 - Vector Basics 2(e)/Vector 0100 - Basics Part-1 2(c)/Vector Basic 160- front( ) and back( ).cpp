#include <bits/stdc++.h>
using namespace std;


int main() {
 int i, num ;

 vector <int>   intvec { 34, 23, 99, -100, 1, 3, 55 };
 vector <int>   onevec { 2021 };
 vector <int>   emptyvec {} ;

 cout << "\n intvec.front( )  = " << intvec.front()  ;
 cout << "\n intvec.back( ) = "   << intvec.back() ;


 cout << "\n onevec.front( )  = " << onevec.front()  ;
 cout << "\n onevec.back( ) = "   << onevec.back() ;

 if ( emptyvec.empty ) { cout << "비어있는 vector " ; }
 // cout << "\n emptyvec.front( )  = " << emptyvec.front()  ;
 // cout << "\n emptyvec.back( ) = "   << emptyvec.back() ;
 // Null vector에서 front( ), back( )은 오류를 발생시킨다.

} // end of main()

