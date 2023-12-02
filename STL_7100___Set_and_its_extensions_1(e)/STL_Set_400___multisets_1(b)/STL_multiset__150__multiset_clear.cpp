// multiset::clear
#include <iostream>
#include <set>
using namespace std ;


int main () {
    multiset<int> pnuset;

    pnuset.insert (11);
    pnuset.insert (42);
    pnuset.insert (11);

    cout << "\n pnuset 내용물: \n ";
    for (multiset<int>::iterator it=pnuset.begin(); it!=pnuset.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    pnuset.clear();  // 한꺼번에 왕창 지운다.
    cout << "\n pnuset.clear( ) 이후 : \n ";
    pnuset.insert (200);
    pnuset.insert (100);

    cout << "\n pnuset.clear( ) 추가 insert( )이후  : \n ";
    for (multiset<int>::iterator it=pnuset.begin(); it!=pnuset.end(); ++it)
        cout << ' ' << *it;

    cout << '\n';

    return 0;
}
