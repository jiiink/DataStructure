#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "

// x.end( )는 끝이다.  마지막이 아니라...
// 아래 vec의 마지막 원소는 49이지만 그 끝은 "}", 막다른 끝이다.

int main() {

    vector <int> vec = { 22, 33, 2, 11, 89, 49 };
    vector <int>::iterator it ;

    it =  find( vec.begin(), vec.end(), 11) ;
    cout << "\n ans1 = " << it - vec.begin() ;

    it =  find( vec.begin(), vec.end(), 31) ;
    cout << "\n ans2 = " << it - vec.begin() ;

} // end of main( )
