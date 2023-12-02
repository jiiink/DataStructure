#include <iostream>
#include <set>
using namespace std ;

int main () {
    multiset<int> mset;

    cout << "\n 100개까지의 원소만 보관하는 multiset 실험 :" ;
    int N = 100 ;

    for (int i=0; i< N; i++) mset.insert(i);

    cout << "\n mset.max_size() = " <<  mset.max_size() ;
    cout << "\n mset.size() = "     <<  mset.size() ;

    return 0;
}
