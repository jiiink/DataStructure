#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

//functional ???

bool isNotDigit(char c) {
    return !isdigit(c);
}

int main() {
    vector<string> lines;
    string line;
    string firstLine;

    getline(cin, firstLine);

    while (true) {
        getline(cin, line);
        if (line.empty()) {
            break;
        }
        lines.push_back(line);
    }

    map<int, vector<string>, greater<int> > bids;

    for (const string& line : lines) {
        istringstream splitedLine(line);
        string name;
        string intStr;
        int bid;

        splitedLine >> name;
        splitedLine >> intStr;
        
        intStr.erase(remove_if(intStr.begin(), intStr.end(), isNotDigit), intStr.end());
        
        if (!intStr.empty()) {
            bid = stoi(intStr);
        } else {
            bid = 0;
        }
        bids[bid].push_back(name);
    }

    string winner = "NONE";

    for (const pair<int, vector<string> >& bid : bids) {
        if (bid.second.size() == 1) {
            winner = bid.second[0];
            break;
        }
    }

    cout << winner << endl;

    return 0;
}