#include <bits/stdc++.h>
using namespace std;
using DNA_FORM = set<int, greater<>>;

multimap< DNA_FORM, int> GDBC;
// vector  <DNA_FORM>        Query;

// bool myfunc(int i, int j) {return i>j;}
vector<vector<int>> responses;
void query(DNA_FORM request) {
    vector<int> response;
    for (auto& DNA : GDBC) {
        if (DNA.first == request) response.push_back(DNA.second);
    }
    
    sort(response.begin(), response.end(), [] (int i, int j) {
        return i > j;
    });
    responses.push_back(response);
}

void input() {
    string line;
    
    while (getline(cin, line)) {
        if (line == "$") break;

        istringstream iss(line);
        DNA_FORM DNA;
        char mode;
        iss >> mode;
        if (mode == 'R') {
            int value;

            while (iss >> value) {
                if (value < 0) break;
                DNA.insert(value);
            }
            GDBC.insert(pair<DNA_FORM, int>(DNA, value));
        }
        if (mode == 'Q') {
            int value;

            while (iss >> value) {
                if (value == 0) break;
                DNA.insert(value);
            }
            query(DNA);
        }
    }
}

void output() {
    for (auto& r : responses) {
        if (r.empty()) {
            cout << "\nNone\n";
        } else {
            for (auto& c : r) {
                cout << c << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    input();
    output();
    return 0;
}