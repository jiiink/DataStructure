#include <bits/stdc++.h>
using namespace std;
#define allout(msg, container) cout << msg << " : "; for (auto i : container) cout << i << " "; cout << endl;


int main() {
    list<int> a = {0, 1, 2, 3, 2, 5};
    list<int>::iterator it = a.begin();
    allout("before", a);
    // it++;
    // (*it) = 10;
    for (auto& i : a) {
        if (i == 2) {
            i = 10;
        }
    }
    allout("after", a);
    return 0;
}