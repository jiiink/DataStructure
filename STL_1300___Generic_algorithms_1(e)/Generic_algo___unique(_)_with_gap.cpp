#define vout(msg,x)    cout<<"\n"<<msg; for(auto s:x) cout << "  " << s ;

#include <iostream>     // cout
#include <bits/stdc++.h>
#define  allout(MSG,X) cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<" "
using namespace std;


bool myfun (int i, int j) {
    if( abs(i-j) <= 1 ) return(1) ;
    else return(0) ;
}

int main () {

  vector<int> myvec1  { 15,21,21,20,20,31,20,10,10,11,9,9} ;
  vector<int> myvec2  { 15,21,21,20,20,31,20,10,10,11,9,9} ;

  auto it = unique (myvec1.begin(), myvec1.end());   // 10 20 30 20 10 ?  ?  ?  ?
  myvec1.resize( distance(myvec1.begin(),it) ); // 10 20 30 20 10
  allout("> 1. myvec1[]= ", myvec1 ) ;                                                       //                ^

  it=unique (myvec2.begin(), myvec2.end(), myfun);   // (no changes)
  myvec2.resize( distance(myvec2.begin(),it) ); // 10 20 30 20 10
  allout("> 2. myvec2[]= ", myvec2) ;


  return 0;
}
