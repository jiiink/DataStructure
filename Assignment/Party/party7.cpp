#include <bits/stdc++.h>
using namespace std;
#define pair_c_c pair<char, char>
#define pair_c_i pair<char, int>
#define pair_i_c pair<int, char>

struct Node {
    char val;
    Node* next;
};

class Graph {
    Node* getAdjListNode(char value, Node* head) {
        Node* newNode = new Node;
        newNode->val = value;
        newNode->next = head;
        return newNode;
    }
public:
    map<char, Node*> head;
    Graph(vector<pair_c_c> edges) {
        for (auto& edge : edges) {
            char start_ver = edge.first;
            Node* newNode = getAdjListNode(edge.second, head[start_ver]);
            head[start_ver] = newNode;
        }
    }
};

vector<pair_c_c> edges;
char f1, f2, f3;
int N;
void input() {
    cin >> N;
    cin >> f1 >> f2 >> f3;
    for (int i = 0; i < N; i++) {
        char c, start;
        cin >> start;
        while (cin >> c && c != '$')
            edges.emplace_back(start, c);
    }
}

vector<int> dijkstra(Graph& g, char start) {
    map<char, int> dist;
    for (auto& entry : g.head)
        dist[entry.first] = INT_MAX;
    priority_queue<pair_i_c, vector<pair_i_c>, greater<pair_i_c>> pq;
    pq.push({0, start});
    dist[start] = 0;

    while (!pq.empty()) {
        int currentDist = pq.top().first;
        char u = pq.top().second;
        pq.pop();

        if (currentDist > dist[u])
            continue;
        if (g.head.find(u) != g.head.end()) {
            for (Node* n = g.head.at(u); n != nullptr; n = n->next) {
                char v = n->val;

                if (currentDist%3 == 1) currentDist+=2;
                int newDist = currentDist + 1;

                if (newDist < dist[v]) {
                    dist[v] = newDist;
                    pq.push({newDist, v});
                }
            }
        } else {
            cout << "@" << endl << -1 << endl;
            exit(0);
        }
    }

    vector<int> distances;
    for (auto& entry : dist)
        distances.push_back(entry.second);
    return distances;
}

map<char, vector<int>> fs;
void getDist(Graph& g) {
    array<char, 3> friends = {f1, f2, f3};
    for (const auto& entry : friends)
        fs[entry] = dijkstra(g, entry);
}

void findMinNode(Graph g) {
    map<char, int> max_of_tuple;
    auto it = g.head.begin();
    for (int col=0; col<N; col++) {
        vector<int> t;
        for (auto& f : fs) 
            t.push_back(f.second[col]);
        max_of_tuple[(*it++).first] = *max_element(t.begin(), t.end());
    }
    pair_c_i min = *min_element(max_of_tuple.begin(), max_of_tuple.end(), [](const pair_c_i &lhs, const pair_c_i &rhs) {
        return lhs.second < rhs.second;
    });
    if (min.second == INT_MAX)
        min = {'@', -1};
    cout << min.first << endl << min.second << endl;
}

int main() {
    input();
    Graph g(edges);
    getDist(g);
    findMinNode(g);

    return 0;
}
