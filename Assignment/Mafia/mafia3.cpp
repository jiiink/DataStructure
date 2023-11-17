#include <bits/stdc++.h>
using namespace std;
#define allout(vec) for (auto i : vec) cout << i << " "; cout << endl; 

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
};

unordered_map<string, vector<string>> mafia;
vector<Node> people(500);
vector<Node> ranking;


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

        Node node(name); 
        cout << "Node name : " << name << endl;
        cout << "Node's boss name : " << boss << endl;

        for (auto& person1 : people) {
            if (person1.name == name) { // the person is already in the people
                cout << name << " is already in the people\n";
                found = 1;
                for (auto& person2 : people) { //there is a boss of node in people
                    if (person2.name == boss) {
                        cout << "found it. " << person2.name << " is " << node.name <<"'s boss.\n" ;
                        person1.bossNode = &person2;
                        break;
                    }
                }
                if (person1.bossNode == nullptr) { // there is no boss of node in people
                    cout << "there is no boss of " << node.name << " in people\n";
                    Node* bossNode = new Node(boss);
                    cout << "bossNode : " << bossNode->name << endl;
                    people[index++] = *bossNode;
                    node.bossNode = bossNode;
                }
                break;
            }
        }
        if (found == 0) { // the node is new face
            cout << name << " is new face\n";
            for (auto& person2 : people) { //there is a boss of node in people
                    if (person2.name == boss) {
                        cout << "found it. " << person2.name << " is " << node.name <<"'s boss.\n" ;
                        node.bossNode = &person2;
                        break;
                    }
            }
            if (node.bossNode == nullptr) { // there is no boss of node in people
                cout << "there is no boss of " << node.name << " in people\n";
                Node* bossNode = new Node(boss);
                cout << "bossNode : " << bossNode->name << endl;
                people[index++] = *bossNode;
                node.bossNode = bossNode;
            }

            people[index++] = node;
        }
        

        cout << "people info : " << people.size() << endl;
        for (auto& node : people) {
            if (node.bossNode != NULL) {
                cout << "Node name : " << node.name << "\nnode's boss : " << node.bossNode->name << endl;
            } else if (node.name != "") {
                cout << "Node name : " << node.name << "\nnode's boss : " << "NULL\n";
            }
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

void search(unordered_map<string, vector<string>>::iterator member) {
    int rank = 0;
}

int main() {
    input();
    // allout(people);
    // printMafia();

    for (auto person : ranking) {
        cout << person.name << " : ";
        auto it = mafia.find(person.name);
        if (it != mafia.end()) {
            int counts = getServantCounts(it);
            person.setCounts(counts);
            cout << counts << endl; 
        } else {
            cout << "0\n";
        }
    }

    for (auto i : ranking) {
        cout << i.name << " "; 
    }
    cout <<endl;

    return 0;
}