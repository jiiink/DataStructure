#include <bits/stdc++.h>
using namespace std;

int main () {
    vector<int> myvector;
    myvector.push_back (100);
    myvector.push_back (200);
    myvector.push_back (300);

    cout << "\n vec[] contains:";
    for (unsigned i=0; i<myvector.size(); i++)
        cout << ' ' << myvector[i];

    myvector.clear();
    myvector.push_back (1101);
    myvector.push_back (2202);

    cout << "\n After clear() vec[] contains:";
    for (unsigned i=0; i<myvector.size(); i++)
        cout << ' ' << myvector[i];


    return 0;
}
