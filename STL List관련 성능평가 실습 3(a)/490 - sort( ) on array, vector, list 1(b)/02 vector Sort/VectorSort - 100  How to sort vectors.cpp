// vector에서 적용할 수 있는 다양한 동작(operator) 중 sorting을 실험해 봄

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

int main() {

    int i,j,t ;

    vector <int>    iv = { 56,  22, 0, 12, 100, 34, 9, -56, 0 } ;
    vector <int> tv ;
    vector <string> sv = { "Mon", "-X-", "Kong", "Pepsi", "Note", "__cool" } ;

    allout(" sort()전 sv[]", sv ) ;
    sort( sv.begin(), sv.end() ) ;
    allout(" sort()후 sv[]", sv ) ;

    tv = iv ;
    allout(" sort()전 iv[]", iv ) ;
    sort( iv.begin(), iv.end(),  greater<int>() ) ; // 거꾸로 sorting
    allout(" sort()후 iv[]", iv ) ;

    allout("  tv[]", tv ) ;

} // end of main ( )
