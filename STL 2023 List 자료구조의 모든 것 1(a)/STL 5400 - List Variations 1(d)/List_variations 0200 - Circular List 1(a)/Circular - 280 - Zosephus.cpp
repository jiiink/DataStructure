#include <bits/stdc++.h>
#include <stdio.h>
#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto _w:C) cout << " "<<_w;
using namespace std;
vector<int> elimi ;

string name ;
int main() {

  list  <int> myl ;;
  int i,j, N, Jump ;
  i=1; j=33 ;
  myl.resize(j-i+1);

  iota( begin( myl ), end(myl), i) ;
  // mout(" INIT :: ", myl ) ;
  auto it = myl.begin() ;

  Jump = *it%3 + 2 ;
  printf("\n Seq Interval = [%2d, %2d] ", i, j ) ;
  elimi.push_back( *it ) ;
  it=myl.erase(it) ;
  it-- ;
  // mout(" ==>", myl) ;


  while(1) {
    for(i=0 ; i < Jump ; i++){
        it++ ;
        if( it == myl.end()) { /*  cout << " *"<<i; */ it = myl.begin();  }
    } // end of for()
    Jump = *it%3 + 2 ;
    elimi.push_back( *it ) ;
    // printf(" remove *it= %2d, Jump=%d", *it, Jump) ;
    it = myl.erase(it) ;
    it--;
    // mout(" ==>", myl) ;
    if( myl.size() == 1 ) break ;
  } // end of while( )

  mout(" elimi seq.=", elimi) ;
  cout << "\n Answer = " << *myl.begin()  ;


} // end of main()





