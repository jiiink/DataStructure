#include <bits/stdc++.h>
using namespace std;

// maybe this is correct


map<int, int> poly;

void input() {
    int n;
    cin >> n;

    int k, c, e;
    while (n--) {
        cin >> k;
        while(k--) {
            cin >> c >> e;

            poly[e] += c;
        }
    }
}

void output() {
    auto cnt = count_if(poly.begin(), poly.end(), [] (const auto& c) {return c.second != 0;});

    if (cnt == 0) cout << "0 0";
    else {
        cout << cnt << endl;
        auto it = poly.rbegin();
        while (it != poly.rend()) {
            if (it->second != 0) {
                cout << it->second << " " << it->first << endl;
            }
            ++it;
        }
    }
}



int main() {
    input();
    output();
    return 0;
}