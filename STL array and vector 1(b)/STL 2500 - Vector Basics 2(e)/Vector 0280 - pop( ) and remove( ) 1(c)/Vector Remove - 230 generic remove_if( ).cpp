#include<bits/stdc++.h>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;

// 방법 7. generic remove( )로 몽땅 값으로 찾아서 지우기
// 단 조심해야 할 것으로 이 작업은 실제 원소를 지우는 것이 아니라.
// 지울 원소의 위치를 옮기고 그 끝 범위를 RETURN한다는 것이다.

bool mycut(int v){
    return( v == 33 ) ;
}

int main(){

    vector<int> v { 23, 33, 27, 31, 33, 35, 33, 41, 55};

    allout("원래 vector v[]: ", v ) ;

    auto mb = v.begin() ;
    auto me = v.end( ) ;
    auto mit = remove_if( v.begin(), v.end( ), mycut ) ;


    allout("remove_if( ) 이후 vector v[]: ", v ) ;
    cout << "\n *mit= " << *mit ;
    cout << "\n mit-mb+1= " << mit-mb+1 ;
    cout << "\n remove_if( ) 이후의 구간을 출력해보자, \n" ;
    for(auto it= mb ; it <= mit-1; it++){
        cout <<" " << *it ;
    }

    return 0;
}

