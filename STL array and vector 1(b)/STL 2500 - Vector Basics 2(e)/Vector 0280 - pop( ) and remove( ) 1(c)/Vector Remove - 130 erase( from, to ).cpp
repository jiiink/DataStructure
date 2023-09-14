#include<bits/stdc++.h>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;

// 방법 1. 제일 뒤의 원소를 지움.
int main(){

    vector<int> v {23, 43, 11, 66, 76, 34, 45, 11, -3, 100};

    allout("원래 vector v[]: ", v ) ;

    v.erase( v.begin()+1, v.end()-3 ) ;

    allout("v.erase( v.begin()+1, v.end()-3 )  이후 vector v[]: ", v ) ;

    return 0;
}

