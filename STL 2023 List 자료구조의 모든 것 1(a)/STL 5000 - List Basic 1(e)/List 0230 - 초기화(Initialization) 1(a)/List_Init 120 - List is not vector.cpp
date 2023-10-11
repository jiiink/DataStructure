using namespace std;
#include <bits/stdc++.h>
#define Outcont(msg,lx)  cout<< "\n " << msg<<": " ; for(auto w : lx ) cout<< " " << w ;

int main() {

     list  <int> myl =  { 11, 12, 13, 14, 15, 16, 17, 18, 19 } ;
     vector<int> myv =  { 1,   2,  3,  4,  5,  6,  7,  8,  9 } ;

     Outcont("myl=", myl) ;
     Outcont("myv=", myv) ;

     cout << "\n\n width of myv = " << (myv.end()- myv.begin()) ;
     auto it = myv.begin( ) ;
     cout << "\n\n myv *(it+3) =" << *(it+3) ;

/* 이라믄 큰일난다. 리스트에서는 .... 왜 vector는 X[i]의 위치가 정해져있기 때문이다.

     cout << "\n\n width of myl = " << (myl.end()- myl.begin()) ;
     auto ilt = myl.begin( ) ;
     cout << "\n\n myl *(ilt+3) =" << *(ilt+3) ;
*/


} // end of main()





