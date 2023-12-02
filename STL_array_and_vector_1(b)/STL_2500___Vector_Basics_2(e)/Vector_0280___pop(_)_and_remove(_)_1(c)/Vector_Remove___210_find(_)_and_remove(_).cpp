#include<bits/stdc++.h>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;

// 방법 4. 모두 지우기

int main(){

    vector<int> v {23, 43, 11, 45, 76, 34, 45, 11, -3, 100}; // 45는 중복

    allout("원래 vector v[]: ", v ) ;

    auto it = find( v.begin(), v.end(), 45 ) ;

    v.erase( it ) ;

    allout("v[]에서 45를 삭제한 후 vector v[]: ", v ) ;

    return 0;
}

