
#include <bits/stdc++.h>
using namespace std ;


int main () {

    vector<int> myints;
    cout << "0. ÃÊ±â size: " << myints.size() << '\n';

    for (int i=0; i<10; i++)         myints.push_back(i);

    cout << "1. 10°³ »ðÀÔ ÈÄ size: " << myints.size() << '\n';
    cout << "2. 10°³ »ðÀÔ ÈÄ capacity: " << myints.capacity() << '\n';

    myints.insert (myints.end(),10,100);
    cout << "3. 10°³ Ãß°¡ »ðÀÔ ÈÄ size: " << myints.size() << '\n';
    cout << "4. 10°³ Ãß°¡ »ðÀÔ ÈÄ capacity: " << myints.capacity() << '\n';

    myints.pop_back();
    cout << "5. ÇÏ³ª »« ÈÄ size: " << myints.size() << '\n';
    cout << "6. ÇÏ³ª »« ÈÄ capacity: " << myints.capacity() << '\n';

    myints.reserve(100 ) ;
    cout << "7. reserve(100) ÈÄ size: " << myints.size() << '\n';
    cout << "8. reserve(100) ÈÄ capacity: " << myints.capacity() << '\n';
    return 0;
}
