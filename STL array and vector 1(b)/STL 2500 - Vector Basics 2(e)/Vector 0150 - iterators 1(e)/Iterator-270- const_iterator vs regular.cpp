#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
#include <stdexcept>
#include <cstdio>
#include <set>
#include <map>
using namespace std;


void regularIterator(vector<int>& v) {
    vector<int>::iterator i;
    for (i = v.begin(); i < v.end(); i++) {
        *i += 1;
        cout << *i << " ";
    }
}


void constIterator(vector<int>& v1) {
    vector<int>::const_iterator ci;
    for (ci = v1.begin(); ci < v1.end(); ci++) {
       //*ci += 1; // ¿À·ù ³³´Ïµ¥ÀÌ....ÀÌ¶ó¹È...
        cout << *ci << " ";
    }
}

int main() {
    vector<int> v1 = { 7, -4, 2, 4 };
    vector<int> v2 = { 15, 26, 37, 48, 59 };

    regularIterator(v1);
    cout << endl;

    constIterator(v2);
    return 0;
}
