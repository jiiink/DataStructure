/*
Return iterator to lower bound
Returns an iterator pointing to the first element in the
container which is not considered to go before val
(i.e., either it is equivalent or goes after).

The function uses its internal comparison object (key_comp)
to determine this, returning an iterator to the first element for
which key_comp(element,val) would return false.

If the set class is instantiated with the default comparison
type (less), the function returns an iterator to the first
element that is not less than val.
*/

#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
#include <iostream>
#include <string>
#include <set>
using namespace std;

unsigned int simhash2(unsigned int x, int M) {
    if( x < 0 ) return(-1) ;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = ((x >> 16) ^ x) * 0x45d9f3b;
    x = (x >> 16) ^ x;
    return x%M;
}

// 이게 가능한 이유는 항상 set은 원소를 자체적으로 정렬해서 관리하기 때문이다....
// 정렬, 정렬 죽어도 정렬......set의 목표

int main () {
    set<int> myset;
    set<int>::iterator itlow,itup;

    for (int i=1; i<=10; i++) myset.insert( simhash2(i,1000) );
    allout("myset{}: ", myset ) ;

    auto vlower =  simhash2(3,1000) ;
    auto vupper =  simhash2(6,1000) ;
    cout << "\n vlower, vupper= " << vlower << " , " << vupper ;
    itlow = myset.lower_bound ( vlower  );
    itup  = myset.upper_bound ( vupper  );

    myset.erase(itlow,itup);                     // 10 20 70 80 90

    allout("After erase myset{}: ", myset ) ;

    return 0;
}
