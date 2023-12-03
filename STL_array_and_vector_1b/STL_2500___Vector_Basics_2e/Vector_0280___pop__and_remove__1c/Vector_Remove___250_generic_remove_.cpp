#include<bits/stdc++.h>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;

// 방법 8. generic remove( )로 몽땅 값으로 찾아서 지우기

int main(){

    vector<int> v {23, 45, 11, 66, 45, 34, 45, 11, -3, 100};

    allout("원래 vector v[]: ", v ) ;

    remove(v.begin(), v.end( ), 45 ) ;

    allout(" Generic remove( ) 이후 vector v[]: ", v ) ;

    return 0;
}

