#include <bits/stdc++.h>
using namespace std;
#define MAX 500
class Node {
    public:
        Node* bossNode = nullptr;
        string name = "";
        int level;
        int totalServantCounts = 0;
        Node() {}
        Node(string name) : name(name) {}
        void setCounts(int counts) {
            totalServantCounts = counts;
        }
};
unordered_map<string, vector<string>> mafia;
vector<Node> people(MAX);
vector<Node*> ranking;
string name, boss;
void input() {
    int N = 0;
    int index = 0;
    cin >> N;
    while (--N) {
        cin >> name >> boss;
        string specialName = name;
        string specialBoss = boss;
        mafia[boss].push_back(name);
        Node node(name); 

        auto nameIT = find_if(people.begin(), people.end(), [specialName](Node& node) {
            return node.name == specialName;
        });
        auto bossIT = find_if(people.begin(), people.end(), [specialBoss](Node& node) {
            return node.name == specialBoss;
        });

        if (nameIT != people.end()) {
            if (bossIT != people.end()) { 
                (*nameIT).bossNode = &*bossIT;
            } else {
                Node* bossNode = new Node(boss);
                int i = index;
                people[index++] = *bossNode;
                node.bossNode = &people[i];
            }
        } else {
            if (bossIT != people.end()) { 
                node.bossNode = &*bossIT;
            } else {
                Node* bossNode = new Node(boss);
                int i = index;
                people[index++] = *bossNode;
                node.bossNode = &people[i];
            }
            people[index++] = node;
        }
    }
    for (auto& person : people) {
        if (person.name != "") ranking.push_back(&person);
    }
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
void setLevel(Node& n) {
    int level = 0;
    auto node = n;
    while (node.bossNode != NULL) {
        node = *node.bossNode;
        level++;
    }
    n.level = level;
}

bool mysort(Node* a, Node* b) {
    if (a->totalServantCounts == b->totalServantCounts)
        if (a->level == b->level) return a->name < b->name;
        else return a->level < b->level;
    else return a->totalServantCounts > b->totalServantCounts;
}
int main() {
    input();
    for (auto& person : ranking) {
        auto it = mafia.find(person->name);
        if (it != mafia.end()) {
            int counts = getServantCounts(it);
            person->setCounts(counts);
        }
        setLevel(*person);
    }
    sort(ranking.begin(), ranking.end(), mysort);
    for (auto& person : ranking) {
        cout << person->name << endl;
    }

    return 0;
}