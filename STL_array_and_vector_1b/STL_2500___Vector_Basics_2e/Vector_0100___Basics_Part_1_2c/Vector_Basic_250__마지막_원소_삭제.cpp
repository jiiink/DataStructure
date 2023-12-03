#include <iostream>
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;


int main(){

    vector <int> vx {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12} ;
    allout("1. vector x[]: ", vx) ;
    cout << "\n vx.size() = " << vx.size() ;
    vx.push_back(20) ;
    allout("2. vector x[]: ", vx) ;
    cout << "\n vx.size() = " << vx.size() ;

    vx.erase( vx.begin()) ;
    vx.erase( vx.begin()) ;
    allout("3. vector x[]: ", vx) ;
    cout << "\n vx.size() = " << vx.size() ;

    vx.erase( vx.end()-1) ;  // 이건 좀 무ㅡ식한 방법
    vx.erase( vx.end()-1) ;
    allout("4. vector x[]: ", vx) ;

    vx.pop_back();    // 이게 좋아요. 제대로 하는 방법,.
    allout("5. vector x[]: ", vx) ;
    cout << "\n vx.size() = " << vx.size() ;
}
