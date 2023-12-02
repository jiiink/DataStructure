/*
vector의 크기를 실행도중에 바꿈. dynarray( )의 기능을 수행.

만일 n이 컨테이너보다 작으면 싹뚝 잘라버림. 나머지는 날려버리고

n이 현재 크기보다 커다면 나머지는 default 0으로 채움.

If n is also greater than the current container capacity,
an automatic reallocation of the allocated storage space takes place.

이게 함수로는 한번에 불려져서 빨라 보이지만,
실제로는 그 안에서 STL에 원소를 넣고 뺴고... 열심히 작업을 함.
즉 간편하긴 하지만 더 빠른 것은 아님.

*/

#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG <<" : ";for(auto w:X)cout<<w<<", "
using namespace std;



int main () {
  vector<int> myvec {30, 31, 32, 33 };

  myvec.resize(5);
  allout("1. myvec.resize(5)= ",    myvec ) ;

  myvec.resize(8,100);
  allout("2. myvec.resize(8,10)= ", myvec ) ;

  myvec.resize(12);
  allout("3. myvec.resize(12)= ",   myvec ) ;
  cout << "\n size= " << myvec.size() ;

  myvec.resize(0);
  allout("4. myvec.resize(0)= ",   myvec ) ;


  return 0;
} // end of main( )
