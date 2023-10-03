// 양쪽으로 두 개의 끝이 뚫려있는 deque 사용법
// Adaptor를 이용한  디큐의 사용법을 보여줍니다.
#include <bits/stdc++.h>
#define  OutDeque(msg,x)  cout << "\n " << msg; for(auto w : x) cout << "\n " << w
using namespace std;



int main() {
  string mystr ;

  deque <string> beerbar ;

  beerbar.push_front("Cass") ;
  beerbar.push_front("Ale") ;
  beerbar.push_back ("Stout") ;
  beerbar.push_front("Ginger") ;
  beerbar.push_back ("Mead") ;
  beerbar.push_back ("Pilsner") ;
  beerbar.push_back ("Hite") ;
  beerbar.push_front("Kloud") ;

  // Kloud, Giner, Ale, cass, Stout, Mead, Pilsner, Hite
  cout << "\n [ Kloud, Ginger, Ale, cass, Stout, Mead, Pilsner, Hite ] \n" ;
  mystr = beerbar.back();
  cout << "\n 가장 뒤에 있는 원소 = " << mystr ;
  cout << "\n deque의 크기 beerbar.size() " << beerbar.size() ;
  OutDeque( "출력",  beerbar) ;

  beerbar.pop_back();
  mystr = beerbar.back();
  cout << "\n pop_back() 이후 가장 뒤 원소" << mystr ;
  cout << "\n deque의 크기 beerbar.size() " << beerbar.size() ;

  beerbar.pop_front();
  mystr = beerbar.front();
  cout << "\n \n pop_front() 이후 가장 앞 원소 " << mystr ;
  cout << "\n deque의 크기 beerbar.size() " << beerbar.size() ;


  return 0;
} // end of main( )
