#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;


 //  get< 정수>(array) 는 compile time에 미리 결정을 한다.
 //  이것이 at() or operator[]와 다른 점이다.

int main() {
    array<int, 3> arr;

    get<0>(arr) = 1;
    get<1>(arr) = 2;
    get<2>(arr) = 3;

    // get values:

    cout << "(" << get<0>(arr) << ", " \
                << get<1>(arr) << ", " \
                << get<2>(arr) << ")\n";
}
