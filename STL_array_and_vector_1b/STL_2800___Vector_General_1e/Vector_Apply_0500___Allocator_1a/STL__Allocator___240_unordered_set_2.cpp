#include <bits/stdc++.h>
using namespace std;


int main(void) {

    unordered_map<char, int> um;
    pair<const char, int>* a;

    a = um.get_allocator().allocate(8);

    cout << "Allocated size = " << sizeof(*a) * 8 << endl;

    return 0;
}



