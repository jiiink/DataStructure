#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

string last( list<string> X ) {
    auto it = X.end() ;
    return( *(--it)) ;
}

int main () {

  list< string > mylist ({"K", "O", "R", "E", "A", "N", "S" });
  list< string >::reverse_iterator rit ;

  cout << "mylist backwards:";
  for ( rit=mylist.rbegin(); rit!=mylist.rend(); ++rit)
    cout << ' ' << *rit;

  cout << '\n';

  cout << "\n begin() = " << *mylist.begin() ;
  // cout << "\n end()   = " << *mylist.end() ;
  cout << "\n rbegin()= " << *mylist.rbegin() ;
  // cout << "\n rend()  = " << *mylist.rend() ;

  cout << "\n last(mylist) = " << last( mylist)  ;

  return 0;
}
