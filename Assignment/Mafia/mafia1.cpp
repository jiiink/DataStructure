#include <bits/stdc++.h>
using namespace std;




class Member {
    private:
        string name;
        vector<string> servants;
        int totalServantCounts;
    public:
        Member(string name) : name(name) {}
};

map<string, vector<string>> mafia;
// map<Member, vector<string>> mafia;

void printMafia() {
    cout << "-----------------\n";
    for (auto i : mafia) {
        cout << i.first << " | ";
        for (auto j : i.second) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "-----------------\n";
}

void input() {
    int N = 0;
    string person, boss;
    cin >> N;

    while (N-- != 1) {
        cin >> person >> boss;
        mafia[boss].push_back(person);
    }

}


int getServantCounts(map<string, vector<string>>::iterator member) {
    int servantCounts = member->second.size();
    for (auto& servant : member->second) {
        auto it = mafia.find(servant);
        if (it != mafia.end()) {
            servantCounts += getServantCounts(it);
        }
    }
    return servantCounts;
}


int main() {
    input();

    printMafia();

    for (auto it=mafia.begin(); it!=mafia.end(); ++it) {
        cout << it->first << " : " << getServantCounts(it) << endl;
    }

    

    return 0;
}