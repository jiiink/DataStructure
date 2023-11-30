
#include <iostream>
#include <set>
#include <string>
using namespace std;

#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "

int main() {

    set<int> S, T, U ;

    S = { 4, 5, 6, 1, 2, 3, 3, 3, 3 } ;
    T = { 1, 2, 3, 4, 5, 6 } ;
    U = { 3, 4, 5 } ;


    if( S == T ) cout << "\n 두 집합 S와 T는  같습니데이" ;
    else cout << "\n 두 집합은 다릅니다. " ;

    if( S != U ) cout << "\n 두 집합 S와 U는  다릅니다. " ;
    else cout << "\n 아니오 두 집합은 같습니다. " ;

    if( U < S ) cout << "\n U는 S의 부분집합입니다. " ;

    allout("\n Before erase U", U ) ;
    U.erase(5) ;
    U.erase(55) ;
    allout("\n After erase U", U ) ;
    U.erase(55) ;
    allout("\n After erase 55 from U", U ) ;
}
