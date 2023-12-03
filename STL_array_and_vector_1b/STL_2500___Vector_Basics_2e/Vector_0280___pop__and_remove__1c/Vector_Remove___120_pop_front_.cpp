#include<bits/stdc++.h>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;

// 방법 1. 제일 뒤의 원소를 지움.
int main(){

    vector<int> v {23, 43, 11, 66, 76, 34};

    allout("원래 vector v[]: ", v ) ;
    // v.pop_front( ) ; 이것은 없습니다.
    // 대신
    v.erase( v.begin() ) ;

    allout("pop_front( ) 이후 vector v[]: ", v ) ;

    return 0;
}

