// vector에서 적용할 수 있는 다양한 동작(operator) 중 sorting을 실험해 봄

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

int main() {

    int i,j,t ;

    vector <int>    iv = { 23, 21, 20, 18, 16, 15,  12, 9, 8, 7, 5, 3, 0, -6 } ;


   allout(" sort()전 iv[]", iv ) ;
    sort( iv.begin()+3, iv.begin()+ 6 ) ;  // 3,4,5까지 sort, 6은 아님. end()와 동일
    allout(" sort()후 iv[]", iv ) ;


} // end of main ( )
