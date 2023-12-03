#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;

int main() {
    vector<int> myvector{ 1, 2, 3, 4, 5 };
    cout << "\n myvector.size() = "  << myvector.size();
    cout << "\n myvector.empty()= "  << myvector.empty();
    return 0;
}

/*
왜 empty()가 size()보다 유리한가 ?

empty()는 데이터의 type에 상관없이 비교 연산을 사용하지 않는다.
그러나 size( )을 경우 실제 원소를 갯수를 일일이 세야 하는 경우가
있다. 예를 들면 list.size( )을 경우이다.
이 경우에는 O(n) time이 걸린다.

*/
