#include <bits/stdc++.h>
#include <stdio.h>
#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto _w:C) cout << " "<<_w;
using namespace std;

string name ;
int main() {

  int N = 15 ;
  list  <int> myl( N ) ;;
  int   i,j, jump, steps ;

  iota( begin( myl ), end(myl), 1) ;
  mout("myl[] = ", myl ) ;
  auto it = myl.begin() ;

  int counter = 0 ;
  jump = 5 ;
  while( ++counter < 5*N  ) {
    steps = 0 ;
    while( steps < jump ){
        ++it ;
        if(it == myl.end()) {
           it = myl.begin() ;
           //cout << "\n Skip end();" ;
        }
        steps++ ;
    }
     cout << "\n" << setw(3) << counter << ", *it = " << *it ;
  } // end of while( )



} // end of main()





