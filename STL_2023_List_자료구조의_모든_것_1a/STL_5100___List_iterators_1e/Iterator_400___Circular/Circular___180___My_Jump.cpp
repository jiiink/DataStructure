#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n >> " << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main () {
  int i, jump, N = 30 ;

  list<int> mylist( N ) ;
  iota( begin(mylist), end(mylist), 1) ;
  auto it = mylist.begin();

  Outlist("초기 리스트:", mylist ) ;
  cout << "\n 앞으로 뒤로 k칸 옮겨가기 연습 " ;

  while( 1 ) {
    cout << "\n Type jump steps (0=quit): " ;
    cin >> jump ;
    if( jump == 0 ) break ;
    if ( jump > 0 ) {
        for(i=0 ; i < jump; i++ ){
          it++ ;
          if( it == mylist.end()) it = mylist.begin() ;
        }
    } else { // jump는 음수, backword jump, 뒤로 돌아가기
        for(i=0 ; i < -jump; i++ ){

        if( it == mylist.begin()) { it = mylist.end() ; it-- ;}
        else it-- ;
        }
    }

    cout << " Current = " << *it ;
  }
  cout << "\n End of experiment \n\n" ;
} // end of main()
