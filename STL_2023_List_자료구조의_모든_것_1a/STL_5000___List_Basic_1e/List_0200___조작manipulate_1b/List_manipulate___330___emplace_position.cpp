#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;



int main () {
  list< pair<int,string> > mylist;
  string tstr ;

  pair<int,string> w ;

  w.first = 590 ;
  w.second = "BeerBox" ;

  mylist.emplace ( mylist.begin(), 100, "banana" );
  mylist.emplace ( mylist.begin(), 200, "oxygen" );
  mylist.emplace ( mylist.begin(), 500, "Terran" );
  mylist.emplace ( mylist.end(),   045,  "똥" ) ;    // 한글은 emplace하면 개망신.
  mylist.insert  ( mylist.end(),   w ) ;

  cout << "mylist contains:";
  for (auto& x: mylist)
    cout << "\n (" << x.first << " , " << x.second << ")";

  cout << '\n';
  return 0;
}
