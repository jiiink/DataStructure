#include <bits/stdc++.h>
using namespace std;

#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;


int main () {

  list<int> mylist = {60, 55, 17, 100, 7, 100, 100, 84, 14} ;
  myout("원본 리스트 : ", mylist ) ;

  mylist.remove( 100 ); // 모두 찾아서 지웁니다.
  myout(" 100을  지운 이후 : ", mylist ) ;

  return 0;

}
