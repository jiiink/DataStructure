#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

map<int, vector<string>, greater<int> > bids; 
string winner = "NONE";

void input() {
    int N;
    cin >> N;

    while(N--) {
        string name;
        int bid;

        cin >> name >> bid;
        bids[bid].push_back(name);
    }
}

void process() {

    for (auto& bid : bids) {
        if (bid.second.size() == 1) { //unique bid
            winner = bid.second[0];
            break;
        }
    }
}

void output() {
    cout << winner << endl;
}

int main() {

    input();

    process();

    output();

    return 0;
}