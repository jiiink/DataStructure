#include <bits/stdc++.h>
using namespace std;
// #define allout(vec) for (auto i : vec) cout << i << " "; cout << endl; 

class Node {
    public:
        Node* bossNode = NULL;
        string name = "";
        string boss = "";
        int level;
        int totalServantCounts = 0;
    public:
        Node() {}
        Node(string name) : name(name) {}

        void setCounts(int counts) {
            totalServantCounts = counts;
        }

        int getCounts() {
            return totalServantCounts;
        }

        int getLevel() {
            return level;
        }
        void setLevel(int level) {
            this->level = level;
        } 
};

unordered_map<string, vector<string>> mafia;
vector<Node> people(500);
vector<Node*> ranking;


string name, boss;
bool isIn(Node node) {
    return node.name == boss;
}
void input() {
    int N = 0;
    int index = 0;
    cin >> N;

    while (--N) {
        int found = 0;
        cin >> name >> boss;
        mafia[boss].push_back(name);
        // ranking.emplace_back(name);
        Node node(name); 

        for (auto& person1 : people) {
            if (person1.name == name) { // the person is already in the people
                // cout << name << " is already in the people\n";
                found = 1;
                for (auto& person2 : people) { //there is a boss of node in people
                    if (person2.name == boss) {
                        // cout << "found it. " << person2.name << " is " << node.name <<"'s boss.\n" ;
                        person1.bossNode = &person2;
                        break;
                    }
                }
                if (person1.bossNode == nullptr) { // there is no boss of node in people
                    // cout << "there is no boss of " << node.name << " in people\n";
                    Node* bossNode = new Node(boss);
                    // cout << "bossNode : " << bossNode->name << endl;
                    int i = index;
                    people[index++] = *bossNode;
                    node.bossNode = &people[i];
                }
                break;
            }
        }
        if (found == 0) { // the node is new face
            // cout << name << " is new face\n";
            for (auto& person2 : people) { //there is a boss of node in people
                    if (person2.name == boss) {
                        // cout << "found it. " << person2.name << " is " << node.name <<"'s boss.\n" ;
                        node.bossNode = &person2;
                        break;
                    }
            }
            if (node.bossNode == nullptr) { // there is no boss of node in people
                // cout << "there is no boss of " << node.name << " in people\n";
                Node* bossNode = new Node(boss);
                // cout << "bossNode : " << bossNode->name << endl;
                int i = index;
                people[index++] = *bossNode;
                node.bossNode = &people[i];
            }

            people[index++] = node;
        }
        

        // cout << "people info : " << people.size() << endl;
        // for (auto& node : people) {
        //     if (node.bossNode != NULL) {
        //         cout << "Node name : " << node.name << "\nnode's boss : " << node.bossNode->name << endl;
        //     } else if (node.name != "") {
        //         cout << "Node name : " << node.name << "\nnode's boss : " << "NULL\n";
        //     }
        // }
    }

    for (auto& person : people) {
        if (person.name != "") {
            ranking.push_back(&person);
        }
    }


    // cout << "---------------\n";
    // for (auto& person : mafia) { // get the rootBoss
    //     auto it = find(people.begin(), people.end(), person.first);
    //     // cout << (*it).first << " ";
    //     if (it == people.end()) {
    //         // cout << "in if\n";
    //         people.push_back(person.first);
    //         Node root(person.first, "");
    //         root.rank = 0;
    //         ranking.push_back(root);
    //     }
    // }
    // cout << endl;

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
        // cout << node.name << " " << node.bossNode->name << endl;
        node = *node.bossNode;
        // if (node.bossNode != nullptr) {
        //     cout << node.name << " " << node.bossNode->name << endl;

        // } else {
        //     cout << node.name << " " << "null" << endl;
        // }
        level++;
    }
    // n.level = level;
    // cout << "------------\n";
    return level;
}

void search(unordered_map<string, vector<string>>::iterator member) {
    int rank = 0;
}




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


bool mysort(Node* a, Node* b) {
    // return a->totalServantCounts > b->totalServantCounts;
    if (a->totalServantCounts == b->totalServantCounts) {
        // return a->level < b->level;
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
    // allout(people);
    // printMafia();

    for (auto& person : people) {
        // cout << person.name << " : ";
        if (person.name != "") {
            auto it = mafia.find(person.name);
            if (it != mafia.end()) {
                int counts = getServantCounts(it);
                person.setCounts(counts);
            // cout << person.totalServantCounts << endl; 
            }

            int level = getLevel(person);
            person.setLevel(level);
        }
        
    }
    // for (auto& person : people) {
    //     if (person.name != "") {
    //         // cout << person.name << " : " << person.totalServantCounts << ", " << person.level << endl;
    //         ranking.push_back(&person);
    //     }
    // }

    // for (auto& person : ranking) {
    //     cout << person->name << " : " << person->totalServantCounts << ", " << person->level << endl;
    // }

    sort(ranking.begin(), ranking.end(), mysort);
    // for (auto i : ranking) {
    //     cout << i.name << " "; 
    // }
    // cout <<endl;

    for (auto& person : ranking) {
        cout << person->name << " ";
    }
    cout << endl;

    return 0;
}