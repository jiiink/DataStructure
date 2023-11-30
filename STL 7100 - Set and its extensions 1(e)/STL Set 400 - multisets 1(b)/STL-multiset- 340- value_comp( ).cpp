/*
Return comparison object
Returns a copy of the comparison object used by the container.
default´Â less object, which returns the same as operator<.
*/

#include <iostream>
#include <set>
using namespace std ;

int main () {
    multiset<int> pnuset;

    for (int i=0; i<= 10; i++) pnuset.insert(i);

    multiset<int>::key_compare mycomp = pnuset.value_comp();

    cout << "pnuset contains:";

    int highest = *pnuset.rbegin();

    cout << "\n pnuset{} : \n" ;
    for(auto w : pnuset) cout << " ," << w ;

    cout << "\n pnuset{} + mycomp() : \n" ;
    multiset<int>::iterator it = pnuset.begin();
    do {
        cout << ' ' << *it;
    } while ( mycomp(*it++,highest) );

    cout << '\n';

    return 0;
}
