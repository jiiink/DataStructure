#include <iostream>
#include <vector>
#include <map>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

struct adjNode {
    char val;
    int cost;
    adjNode* next;
};

class DiaGraph {
    adjNode* getAdjListNode(char value, int weight, adjNode* head) {
        adjNode* newNode = new adjNode;
        newNode->val = value;
        newNode->cost = weight;
        newNode->next = head;
        return newNode;
    }

public:
    map<char, adjNode*> head;

    DiaGraph() {}

    DiaGraph(vector<pair<char, char>> edges) {
        for (const auto& edge : edges) {
            char start_ver = edge.first;
            char end_ver = edge.second;
            int weight = 1;
            adjNode* newNode = getAdjListNode(end_ver, weight, head[start_ver]);
            head[start_ver] = newNode;
        }
    }
};

void displayAdjList(adjNode* ptr, char c) {
    while (ptr != nullptr) {
        cout << "(" << c << ", " << ptr->val << ", " << ptr->cost << ") ";
        ptr = ptr->next;
    }
    cout << endl;
}

vector<pair<char, char>> edges;

vector< vector<char> > graph;
void input(char& f1, char& f2, char& f3) {
    int N;
    cin >> N;
    
    // char f1, f2, f3;
    cin >> f1 >> f2 >> f3;

    for (int i=0; i<N; i++) {
        char currentChar;
        std::vector<char> characters;
        // Read characters until '$' is encountered
        while (std::cin >> currentChar && currentChar != '$') {
            // Store the characters in a vector
            characters.push_back(currentChar);
        }
        graph.push_back(characters);
    }

    cout << "Number of vertex : " << N << endl;
    // cout << "Friends: " << f1 << " " << f2 << " " << f3 << endl;
    for (auto n : graph) { // print graph
        for (auto c : n) {
            cout << c << " ";
        }
        cout << endl;
    }
    cout << endl;
}


void makeEdge() {
    for (auto& c : graph) {
        for (int i=1; i<c.size(); i++) {
            pair<char, char> edge(c[0], c[i]);
            edges.push_back(edge);
        }
    }
}

// print all adjacent vertices of given vertex
void display_AdjList(adjNode* ptr, char c) {
    while (ptr != nullptr) {
        cout << "(" << c << ", " << ptr->val
            << ", " << ptr->cost << ") ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    char node1, node2, node3;
    input(node1, node2, node3);
    makeEdge();

    DiaGraph diagraph(edges);
    for (auto& a : diagraph.head) {
        // cout << a.first << " ";
        display_AdjList(a.second, a.first);
    }
    // cout << "Enter three starting nodes: ";
    // cin >> node1 >> node2 >> node3;

    return 0;
}
