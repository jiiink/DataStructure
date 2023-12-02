#include <bits/stdc++.h>
#include <stdio.h>
#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto _w:C) cout << " "<<_w;
using namespace std;

string name ;
int main() {

  int i,j, N=10, Jump=2 ;
  list  <int> myl(N) ;;

  iota( begin( myl ), end(myl), 1) ;
  mout("mout[]= ", myl ) ;
  auto it = myl.begin() ;

  while(1) {
    for(i=0 ; i < Jump ; i++){
        it++ ;
        if( it == myl.end()) { cout << " end()*" ; it = myl.begin();  }
    } // end of for()
    printf("\n remove *it= %2d", *it) ;
    it = myl.erase(it) ;
    it--;
    mout(" ==>", myl) ;
    if( myl.size() == 1 ) break ;
  } // end of while( )



} // end of main()





