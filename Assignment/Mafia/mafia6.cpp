#include <bits/stdc++.h>
using namespace std;
#define MAX 500
class Node {
    public:
        Node* bossNode = nullptr;
        string name = "";
        int level;
        int totalServantCounts = 0;
    public:
        Node() {}
        Node(string name) : name(name) {}

        void setCounts(int counts) {
            totalServantCounts = counts;
        }
        void setLevel(int level) {
            this->level = level;
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
        int newFace = 0;
        cin >> name >> boss;
        mafia[boss].push_back(name);
        Node node(name); 

        for (auto& person1 : people) {
            if (person1.name == name) { // the person is already in the people
                newFace = 1;
                for (auto& person2 : people) { //there is a boss of node in people
                    if (person2.name == boss) {
                        person1.bossNode = &person2;
                        break;
                    }
                }
                if (person1.bossNode == nullptr) { // there is no boss of node in people
                    Node* bossNode = new Node(boss);
                    int i = index;
                    people[index++] = *bossNode;
                    node.bossNode = &people[i];
                }
                break;
            }
        }
        if (newFace == 0) { // the node is new face
            for (auto& person2 : people) { //there is a boss of node in people
                    if (person2.name == boss) {
                        node.bossNode = &person2;
                        break;
                    }
            }
            if (node.bossNode == nullptr) { // there is no boss of node in people
                Node* bossNode = new Node(boss);
                int i = index;
                people[index++] = *bossNode;
                node.bossNode = &people[i];
            }

            people[index++] = node;
        }
    }

    for (auto& person : people) {
        if (person.name != "") {
            ranking.push_back(&person);
        }
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
int getLevel(Node n) {
    int level = 0;
    auto node = n;
    while (node.bossNode != NULL) {
        node = *node.bossNode;
        level++;
    }
    return level;
}

bool mysort(Node* a, Node* b) {
    if (a->totalServantCounts == b->totalServantCounts) {
        if (a->level == b->level) {
            return a->name < b->name;
        } else {
            return a->level < b->level;
        }
    } else {
        return a->totalServantCounts > b->totalServantCounts;
    }
}


int main() {
    input();

    for (auto& person : people) {
        if (person.name != "") {
            auto it = mafia.find(person.name);
            if (it != mafia.end()) {
                int counts = getServantCounts(it);
                person.setCounts(counts);
            }

            int level = getLevel(person);
            person.setLevel(level);
        }
        
    }

    sort(ranking.begin(), ranking.end(), mysort);
    for (auto& person : ranking) {
        cout << person->name << " ";
    }
    cout << endl;

    return 0;
}