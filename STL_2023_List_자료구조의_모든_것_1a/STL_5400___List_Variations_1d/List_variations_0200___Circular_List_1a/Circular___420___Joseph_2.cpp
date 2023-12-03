#include <bits/stdc++.h>
#include <stdio.h>
#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto _w:C) cout << " "<<_w;
using namespace std;

string name ;
int main() {

  list  <int> myl ;;
  int i,j, N, Jump ;
  N= 22 ; Jump = 2 ;
  i=14; j=24 ;
  myl.resize(j-i+1);

  iota( begin( myl ), end(myl), i) ;
  mout("->", myl ) ;
  auto it = myl.begin() ;

  while(1) {
    for(i=0 ; i < Jump ; i++){
        it++ ;
        if( it == myl.end()) { cout << " *"<<i; it = myl.begin();  }
    } // end of for()
    printf(" remove *it= %2d", *it) ;
    it = myl.erase(it) ;
    it--;
    mout(" ==>", myl) ;
    if( myl.size() == 1 ) break ;
  } // end of while( )



} // end of main()





