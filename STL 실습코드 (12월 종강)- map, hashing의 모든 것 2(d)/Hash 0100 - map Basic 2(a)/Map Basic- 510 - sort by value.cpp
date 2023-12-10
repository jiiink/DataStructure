#include <bits/stdc++.h>
using namespace std;


bool cmp(pair<string, int>& a, pair<string, int>& b) {
    return a.second < b.second;
}

void sort(map<string, int>& M) {
    vector<pair<string, int> > A;

    for (auto& it : M) {
        A.push_back(it);
    }

    sort(A.begin(), A.end(), cmp);

    for (auto& it : A) {
        cout << it.first << ' ' << it.second << endl;
    }
}


int main() {

    map<string, int> M;

    M = { {"G0",7}, {"Tom",34},{"Mary",13}, {"Alan",52}, {"Rissa",54} };

    sort(M);
    for(auto w : M) cout << w.first << " : " << w.second << endl ;

    auto it = M.begin();
    std::advance(it, 3);
    cout << "\n it->first " << it->first;
    return 0;
}
