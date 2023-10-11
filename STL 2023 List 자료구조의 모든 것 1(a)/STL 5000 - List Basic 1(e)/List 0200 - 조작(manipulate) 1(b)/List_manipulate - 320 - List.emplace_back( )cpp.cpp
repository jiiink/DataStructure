#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main () {
  list< pair<int,char> > mylist;
  pair<int,char>    mypair ;

  mylist.emplace_back( 10,'a' );  // 접시(임시변수) 없이 쌩으로
  mylist.emplace_back( 20,'b' );
  mylist.emplace_back( 30,'c' );

  mypair.first = 56 ;
  mypair.second= 'w' ;
  mylist.push_back( mypair) ;

  cout << "mylist contains:";
  for (auto& x: mylist)
    cout << "\n" <<  "(" << x.first << "," << x.second << ")";

  cout << endl;
  return 0;
}
