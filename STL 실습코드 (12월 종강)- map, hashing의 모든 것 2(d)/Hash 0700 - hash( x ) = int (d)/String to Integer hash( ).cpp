#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "

using namespace std;

size_t myhash(const string& key) {
    hash<string> hasher;
    return hasher(key);
}

int main() {
    cout << myhash("abc") << endl;

    vector<string> genome= { "a", "agg", "gttcga", "agg", "gttca", \
                             "ttagatagatatatagaagcccgtagagacccagagagaat"
                           } ;

    for(auto w : genome) {
        cout << "hash(" << w << ")=" << myhash(w) << endl;
    }

    return 0;
}
