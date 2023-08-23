#include <iostream>     // cout
#include <algorithm>    // remove
#include <vector>
#include <list>
#include <string>

#define show(vx)   for( auto s : vx ) cout << " " << s
#define SKIP          cout<< " \n "

using namespace std;

int main () {

  vector<int> my {10,20,30,40,50,60,70,80};
  vector<int> yout ;


  list<int>   her {1,3, 5, 7, 11, 13, 17, 19} ;
  string your = "Summer Time" ;  // "한글이 되나"

  SKIP; show( my ) ;
  reverse ( my.begin()+2, my.end()-3);
  SKIP; show( my ) ;

  cout << "\n  " << your ;
  reverse( your.begin(), your.end()) ;
  cout << "\n  " << your ;

  SKIP; show( her ) ;
  reverse ( her.begin(), her.end());
  SKIP; show( her ) ;

  return 0;
}
