#include <iostream>
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;


int main(){

    vector <int> x ;
    x.push_back(20) ;

    for(int i; i<10  ; i++){
        x.push_back(i*33) ;
    }
    allout("vector x[]: ", x) ;
}
