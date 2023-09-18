#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool isNotDigit(char c) {
    return !isdigit(c);
}

int main() {
    vector<string> lines;
    string line;
    string firstLine;
    int numOfPeople;

    //bid as a key, vector of name as a value, ordered with decendent of bid
    //so we can know the number of people who make that bid.
    map<int, vector<string>, greater<int> > bids; 

    getline(cin, firstLine);
    numOfPeople = stoi(firstLine);

    for (int i=0; i<numOfPeople; i++) {
        getline(cin, line);
        lines.push_back(line);
    }

    for (const string& line : lines) {
        istringstream splitedLine(line);
        string name;
        string numStr;
        int bid;

        splitedLine >> name;
        if (name.length() > 15) { //error with the length of name
            cout << "The length of name is over 15" << endl;
            return 0;
        }

        splitedLine >> numStr;
        
        numStr.erase(remove_if(numStr.begin(), numStr.end(), isNotDigit), numStr.end());
        
        if (!numStr.empty()) {
            bid = stoi(numStr);
        } else {
            bid = 0;
        }

        if (bid < 1 || bid > 10000) { //error with range of bid
            cout << "The bid has to 1 <= bid <= 10,000" << endl;
            return 0;
        }

        bids[bid].push_back(name);
    }

    string winner = "NONE";

    for (const pair<int, vector<string> >& bid : bids) {
        if (bid.second.size() == 1) { //unique bid
            winner = bid.second[0];
            break;
        }
    }

    cout << winner << endl;

    return 0;
}