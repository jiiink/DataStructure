#include <bits/stdc++.h>
using namespace std;
#define allout(vec) for (auto i : vec) cout << i << " "; cout << endl; 

// class Mafia {
//     map<Member, vector<Member>> mafia;
// };

class Member {
    public:
        string name, boss;
        int rank;
        // vector<string> servants;
        int totalServantCounts;
    public:
        Member(string name) : name(name) {}
        void setCounts(int counts) {
            totalServantCounts = counts;
        }

        int getCounts() {
            return totalServantCounts;
        }
};

unordered_map<string, vector<string>> mafia;
vector<string> people;
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

    while (--N) {
        cin >> person >> boss;
        mafia[boss].push_back(person);
        people.push_back(person);
    }


    cout << "---------------\n";
    for (auto& person : mafia) { // get the rootBoss
        auto it = find(people.begin(), people.end(), person.first);
        // cout << (*it).first << " ";
        if (it == people.end()) {
            // cout << "in if\n";
            people.push_back(person.first);
        }
    }
    cout << endl;

}


int getServantCounts(unordered_map<string, vector<string>>::iterator member) {
    int servantCounts = member->second.size();
    for (auto& servant : member->second) {
        auto it = mafia.find(servant);
        if (it != mafia.end()) {
            servantCounts += getServantCounts(it);
        }
    }
    return servantCounts;
}



bool mysort(Member a, Member b) {
    if (a.totalServantCounts == b.totalServantCounts) {

    }
    return a.getCounts() > b.getCounts();
}


void search(unordered_map<string, vector<string>>::iterator member) {
    int rank = 0;
}

vector<Member> ranking;

int main() {
    input();
    allout(people);
    printMafia();

    // for (auto it=mafia.begin(); it!=mafia.end(); ++it) {
    //     cout << it->first << " : " << getServantCounts(it) << endl;
    // }

    

    for (auto person : people) {
        Member member(person);
        cout << person << " : ";
        auto it = mafia.find(person);
        if (it != mafia.end()) { // person is in the mafiaMap
            int counts = getServantCounts(it);
            member.setCounts(counts);
            cout << counts << endl;
        } else {
            cout << "0\n";
        }
        ranking.push_back(member);
    }

    sort(ranking.begin(), ranking.end(), mysort); // root is in first


    


    for (auto i : ranking) {
        cout << i.name << " "; 
    }
    cout <<endl;

    return 0;
}