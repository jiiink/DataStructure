#include <iostream>     // cout
#include <algorithm>    // move (ranges)
#include <utility>      // move (objects)
#include <vector>       // vector
#include <string>       // string
using namespace std;

#define vout(msg,x)    cout<<"\n"<<msg;for(auto s:x) cout << "  " << s ;

int main () {

  vector<string> foo = {"air","water","fire","earth"};
  vector<string> bar (4);

  vout("0. foo( ):", foo) ;
  vout("0. bar( ):", bar) ;

  cout << "\n Moving foo[] to bar[]...\n";
  move ( foo.begin(), foo.begin()+4, bar.begin() );

  vout("1. foo( ):", foo) ;
  vout("1. bar( ):", bar) ;

  cout << "\n foo = move (bar);...\n";

  foo = move (bar);
  vout("2. foo( ):", foo) ;
  vout("2. bar( ):", bar) ;



  return 0;
}
