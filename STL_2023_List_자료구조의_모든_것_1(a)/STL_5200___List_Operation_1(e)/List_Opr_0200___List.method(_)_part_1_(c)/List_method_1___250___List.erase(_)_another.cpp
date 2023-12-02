#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;

string name ;
int main() {

  list  <int> myl = { 1, 2, 3, 5, 7, 11, 13, 17, 19, 23 };

  auto it = myl.begin() ;

  while( myl.size()>= 2){
    if( it == myl.end()) it = myl.begin() ;
    cout << " ---" << *it ;
    myl.erase(it++) ;
    if( it == myl.end()) it = myl.begin() ;
    ++it ;

    mout("->", myl ) ;
  }

} // end of main()





