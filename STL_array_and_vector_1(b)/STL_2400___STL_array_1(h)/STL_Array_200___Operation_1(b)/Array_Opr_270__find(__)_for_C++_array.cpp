#include <vector>
#include <array>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    array<int,6> my = { 16, 3, 15, 22, 3, 41 };

    auto it = find( my.begin(), my.end(), 3) ;

    cout << "\n it = " << it << endl ;
    cout << "\n *it = " << *it << endl ;
    cout << "\n it-my.begin()  = " << it-my.begin() << endl ;

    cout << "\n 없는 것을 찾아보자 \n " ;
    it = find( my.begin(), my.end(), 73) ;

    cout << "\n it = " << it << endl ;
    cout << "\n *it = " << *it << endl ;
    if( it == my.end()) cout << "\n find()로 찾아보니 없네요." ;
    cout << "\n it-my.begin()  = " << it-my.begin() << endl ;
    return 0;
}
