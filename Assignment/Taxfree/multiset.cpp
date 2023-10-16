#include <iostream>
#include <set>
using namespace std;
#define allout(m) for (auto i : m) cout << i << " ";
int main() {
    multiset<int> m;
    m.insert(40);
    for (int i=10; i<50; i+=10) {
        m.insert(i);
    }
    allout(m);
    cout << endl;
    multiset<int>::iterator it;
    it = m.begin();
    it++;
    it++;
    // it++;
    m.erase(m.begin(), ++it);
    allout(m);
    return 0;
}