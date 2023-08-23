#define vout(msg,x)    cout<<"\n"<<msg; for(auto s:x) cout << "  " << s ;

#include <iostream>     // cout
#include <algorithm>    // for_each
#include <vector>       // vector
#include <array>
using namespace std;


bool myfunction (int i, int j) {
  return (i==j);
}

int main () {

  vector<int> myvector  {10,20,20,20,30,30,20,20,10} ;


  auto it = unique (myvector.begin(), myvector.end());   // 10 20 30 20 10 ?  ?  ?  ?
                                                         //                ^

  myvector.resize( distance(myvector.begin(),it) ); // 10 20 30 20 10


  unique (myvector.begin(), myvector.end(), myfunction);   // (no changes)

  vout("myvector[]= ", myvector) ;

  return 0;
}
