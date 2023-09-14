#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "

using namespace std;

int main () {

    vector<int> myv { 11, 22, 55, 30, 76, -25 } ;

    myv.push_back(-999);
    allout("Step 1. ", myv) ;

    myv.pop_back();
    myv.pop_back();
    myv.pop_back();
    allout("Step 1. ", myv) ;

  return 0;

}
