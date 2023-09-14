#include <bits/stdc++.h>
using namespace std;
#define allout(MSG,X)   cout<<"\n"<<MSG <<" : ";for(auto w:X)cout<<w<<", "

// x.end( )는 끝이다.  마지막이 아니라...
// 아래 vec의 마지막 원소는 49이지만 그 끝은 "}", 막다른 끝이다.

int main() {

    vector<int> vec { 22, 33, 2, 11, 89, 49 };

    cout <<  "\n vec[4]= " << vec[4] ;
    cout <<  "\n *vec.end()-1 = " << *(vec.end()-1)  ;
    vec.clear() ;
    vec.push_back(99);
    vec.push_back(100);
    allout("\n Clear 이후: ", vec) ;
    cout <<  "\n clear( ) 이후 *vec.end()-1 = " << *(vec.end()-1) ;
    cout <<  "\n clear( ) 이후 *vec.begin( ) = " << *(vec.begin()) ;
    cout <<  "\n clear( ) 이후 vec의 size(크기)  = " << sizeof(vec) ;
    cout <<  "\n clear( )이후 vec[4]= " << vec[4] << endl ;
} // end of main( )
