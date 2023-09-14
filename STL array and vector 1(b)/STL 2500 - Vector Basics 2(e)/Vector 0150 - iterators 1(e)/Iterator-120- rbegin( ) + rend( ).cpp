#include <bits/stdc++.h>
using namespace std;


int main() {
 int i, num ;

 vector <int>   intvec { 11, 12, 13, 14, 15, 16, 17 };


 cout << "\n 연습01 = "  << *(intvec.begin()+2) ;
 cout << "\n 연습02 = "  << *(intvec.rbegin()+1) ;
 cout << "\n 연습03 ="   << *intvec.rbegin()+100 ;
 cout << "\n 연습04 ="   << *(intvec.rend()-1) ; // 마지막 원소는 end()-1
 cout << "\n 연습05 ="   << *(intvec.rend()+5) ;
 cout << "\n 연습06 ="   << *intvec.rend() ;
 cout << "\n 연습07 ="   << *(intvec.begin()+33) ; // 마지막 원소는 end()-1
 cout << "\n 연습08 ="   << *(intvec.end()-33) ;
 cout << "\n 연습09 ="   << *(intvec.rend()-1) ;

// rbegin() rned()도 방향으로는 +, -를 사용해야 한다.

} // end of main()

