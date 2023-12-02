#define vout(msg,x)    cout<<"\n"<<msg; for(auto s:x) cout << "  " << s ;

#include <iostream>     // cout
#include <algorithm>    // for_each
#include <vector>       // vector
#include <array>
#include <bits/stdc++.h>
using namespace std;


int main () {

  vector<int> myvector (8);                       // myvector: 0 0 0 0 0 0 0 0
  list<int> mylist ( { 2, 8, 7, 5, 3, 1, 4 }); ;

  fill (myvector.begin(),myvector.begin()+4,5);   // myvector: 5 5 5 5 0 0 0 0
  fill (myvector.begin()+3,myvector.end()-2,8);   // myvector: 5 5 5 8 8 8 0 0
  fill (mylist.begin(),    mylist.end(), 200);   // myvector: 5 5 5 8 8 8 0 0


  vout("myvector[]= ", myvector) ;
  vout("mylist = ", mylist) ;

  return 0;
}
