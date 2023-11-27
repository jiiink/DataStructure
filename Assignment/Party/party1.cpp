#include <bits/stdc++.h>
using namespace std;

// stores adjacency list items
struct adjNode {
    int val, cost;
    adjNode* next;
};
// structure to store edges
struct graphEdge {
    int start_ver, end_ver, weight;
};

class DiaGraph {
    // insert new nodes into adjacency list from given graph
    adjNode* getAdjListNode(int value, int weight, adjNode* head) {
        adjNode* newNode = new adjNode;
        newNode->val = value;
        newNode-> cost = weight;

        newNode->next = head; // point new node to current head
        return newNode;
    }
    int N; // number of nodes in the graph
public:
    adjNode **head; // adjacency list as array of pointers
    // Constructor
    DiaGraph() {}
    // DiaGraph(graphEdge edges[], int n, int N) {
    DiaGraph(vector<pair<int, int>> edges, int n, int N) {    
        // allocate new node
        head = new adjNode*[N]();
        this->N = N;
        // initialize head pointer for all vertices
        for (int i=0; i<N; ++i)
            head[i] = nullptr;
        // construct directed graph by adding edges to it
        for (unsigned i=0; i<n; i++) {
            int start_ver = edges[i].first;
            int end_ver = edges[i].second;
            int weight = 1;
            // insert in the beginning
            adjNode* newNode = getAdjListNode(end_ver, weight, head[start_ver]);

            // point head pointer to new node
            head[start_ver] = newNode;
        }
        // Destructor
        // ~DiaGraph() {
        //     for (int i=0; i<N; i++) {
        //         delete[] head[i];
        //         delete[] head;
        //     }
        // }
    }
};


// print all adjacent vertices of given vertex
void display_AdjList(adjNode* ptr, int i) {
    while (ptr != nullptr) {
        cout << "(" << i << ", " << ptr->val
            << ", " << ptr->cost << ") ";
        ptr = ptr->next;
    }
    cout << endl;
}


vector< vector<char> > graph;

void input() {
    int N;
    cin >> N;
    
    char f1, f2, f3;
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
    cout << "Friends: " << f1 << " " << f2 << " " << f3 << endl;
    for (auto n : graph) { // print graph
        for (auto c : n) {
            cout << c << " ";
        }
        cout << endl;
    }
    cout << endl;
}

vector< pair<int, int> > edges;
void makeEdge() {
    for (auto& c : graph) {
        for (int i=1; i<c.size(); i++) {
            pair<int, int> edge(c[0] - 97, c[i] - 97);
            edges.push_back(edge);
        }
    }
}

// graph implementation
int main() {

    input();

    makeEdge();

    int N = graph.size(); // Number of vertices in the graph
    // calculate number of edges
    int n = edges.size();
    // construct graph
    DiaGraph diagraph(edges, n, N);
    // print adjacency list representation of graph
    cout << "Graph adjacency list " << endl << "(start_vertex, end_vertex, weight):" << endl;
    for (int i=0; i<N; i++) {
        // display adjacent vertices of vertex i
        display_AdjList(diagraph.head[i], i);
    }

    return 0;
}