#include <bits/stdc++.h>
using namespace std;
using DNA_FORM = multiset<int, greater<>>;

struct comp {
    comp() {}
    bool operator()(const pair<DNA_FORM, int>& lhs, const pair<DNA_FORM, int>& rhs) const {
        return lhs.second >= rhs.second;
    }
};

map< DNA_FORM, int> GDBC;
vector  <DNA_FORM>        Query;


set<pair<DNA_FORM, int>, comp> mysort(multimap<DNA_FORM, int> m) {
    set< pair<DNA_FORM, int>, comp> S(m.begin(), m.end());

    return S;
}


vector<vector<int>> responses;
void request(DNA_FORM question) {
    vector<int> response;
    // auto dict = mysort(GDBC);
    bool isin = false;
    for (auto& DNA : GDBC) {
        if (DNA.first == question) {
            isin = true;
            // cout << DNA.second << " ";
            response.push_back(DNA.second);
        }
    }
    // if (!isin) {
    //     cout << "\nNone\n";
    // }
    responses.push_back(response);
}

void input() {
    string line;
    
    while (getline(cin, line)) {
        if (line == "$") break;
        // cout << "You entered : " << line << endl;
        istringstream iss(line);
        DNA_FORM DNA;
        char mode;
        iss >> mode;
        if (mode == 'R') {
            int value;
            // iss >> value;
            while (iss >> value) {
                if (value < 0) break;
                DNA.insert(value);
            }
            GDBC.insert(pair<DNA_FORM, int>(DNA, value));
        }
        if (mode == 'Q') {
            int value;
            // iss >> value;
            while (iss >> value) {
                if (value == 0) break;
                DNA.insert(value);
            }
            request(DNA);
        }
    }
}

void output() {
    for (auto& r : responses) {
        if (r.empty()) {
            cout << "\nNone\n";
        } else {
            // cout << endl;
            for (auto& c : r) {
                cout << c << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    input();
    output();
    return 0;
}