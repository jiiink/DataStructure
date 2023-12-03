// 양쪽 끝이 뚫려있는 deque 사용법
#include <iostream>
#include <deque>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;

#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "

int main() {

  deque <string>  beerbar ;

  beerbar.push_front("Larger") ;   //앞으로 넣습니다.
  beerbar.push_back ("Ale") ;
  beerbar.push_front("IPA") ;
  beerbar.push_back ("Stout") ;
  beerbar.push_front("Mead") ;
  beerbar.push_front("막걸리") ;
  beerbar.push_back ("Dunkel") ;

  allout("Beerbar Before: ", beerbar ) ;
  cout << "Size() = " << beerbar.size() << endl ;

  beerbar.pop_back() ;
  beerbar.pop_back() ;
  beerbar.pop_front() ;
  allout("Beerbar After: ", beerbar ) ;
  return 0;
} // end of main( )
