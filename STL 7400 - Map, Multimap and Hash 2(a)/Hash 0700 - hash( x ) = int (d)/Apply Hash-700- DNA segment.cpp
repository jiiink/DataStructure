#include <bits/stdc++.h>
#include <iostream>
#include <functional>
#include <string>
using namespace std ;

size_t myhash(const string& key) {
    hash<string> hasher;
    return hasher(key);
}

int main() {

    vector <string> genome { "a", "agg", "gttcga", "agg", "aggc", "gttca" \
                             "ttagatagatatatagaagcccgtagagacccagagagaat"} ;
    for(auto w : genome) {
        cout << "hash( " << w << " )=" << myhash(w) << endl;
    }
    cout << myhash("abc") << endl;
    return 0;
}
