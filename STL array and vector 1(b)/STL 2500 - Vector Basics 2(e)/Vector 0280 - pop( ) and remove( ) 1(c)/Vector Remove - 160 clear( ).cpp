#include<bits/stdc++.h>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;

// 방법 4. 모두 지우기

int main(){

    vector<int> v {23, 43, 11, 66, 76, 34, 45, 11, -3, 100};

    allout("원래 vector v[]: ", v ) ;

    v.clear( ) ;

    allout("v.clear( )  이후 vector v[]: ", v ) ;

    return 0;
}

