#include <bits/stdc++.h>
#define allout(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;


int main() {


    vector<int> v1 = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
    vector<int> v2(6);
    vector<int> v3(6);

    allout("1. v1[]= ", v1) ;
    allout("1. v2[]= ", v2) ;
    allout("1. v3[]= ", v3) ;

    v2 = v1 ;
    copy( v1.begin(), v1.begin()+6, v3.begin())  ;
    //                 end( ) 위치 표시, 마지막 원소가 아니라.  마지막 원소가 ㅇ아니다.

    allout("2. v1[]= ", v1) ;
    allout("2. v2[]= ", v2) ;
    allout("2. v3[]= ", v3) ;

}
