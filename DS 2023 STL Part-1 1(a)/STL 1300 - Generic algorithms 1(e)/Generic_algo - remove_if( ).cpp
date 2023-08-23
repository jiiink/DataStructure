#include <iostream>     // cout
#include <algorithm>    // remove
#include <vector>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;

bool mycond(int w){
    return( (w % 2 == 0 ) ) ;
}

int main () {

  vector<int> my {52, 13, 23, 31,36,29,-23,-10,-440};
  allout(" The original contents vector v[]: ", my ) ;

  auto pend = remove_if ( my.begin(), my.end(), mycond );

  allout("remove_if( ) ¿Ã»ƒ vector v[]: ", my ) ;
  return 0;
}
